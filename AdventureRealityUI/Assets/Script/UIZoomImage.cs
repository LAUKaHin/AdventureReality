using UnityEngine;
using UnityEngine.EventSystems;

public class UIZoomImage : MonoBehaviour
{
    private Vector3 initialScale;

    [SerializeField]
    private float zoomSpeed = 0.1f;
    [SerializeField]
    private float maxZoom = 10f;

    private Vector3 delta;

    float touchesPrevPosDifference, touchesCurPosDifference, zoomModifier;

    Vector2 firstTouchPrevPos, secondTouchPrevPos;

    [SerializeField]
    float zoomModifierSpeed = 0.1f;

    private void Awake()
    {
        initialScale = transform.localScale;
    }

    private Vector3 ClampDesiredScale(Vector3 desiredScale)
    {
        desiredScale = Vector3.Max(initialScale, desiredScale);
        desiredScale = Vector3.Min(initialScale * maxZoom, desiredScale);
        return desiredScale;
    }
    void Update()
    {
        
        if (Input.touchCount == 2)
        {
            delta = Vector3.one * (zoomModifier * zoomSpeed);
            Touch firstTouch = Input.GetTouch(0);
            Touch secondTouch = Input.GetTouch(1);

            firstTouchPrevPos = firstTouch.position - firstTouch.deltaPosition;
            secondTouchPrevPos = secondTouch.position - secondTouch.deltaPosition;

            touchesPrevPosDifference = (firstTouchPrevPos - secondTouchPrevPos).magnitude;
            touchesCurPosDifference = (firstTouch.position - secondTouch.position).magnitude;

            zoomModifier = (firstTouch.deltaPosition - secondTouch.deltaPosition).magnitude * zoomModifierSpeed;

            if (touchesPrevPosDifference > touchesCurPosDifference)
            {
                delta = Vector3.one * (zoomModifier * -1 * zoomSpeed);
            }
            if (touchesPrevPosDifference < touchesCurPosDifference)
            {
                delta = Vector3.one * (zoomModifier  * zoomSpeed);
            }
            var desiredScale = transform.localScale + delta;

            desiredScale = ClampDesiredScale(desiredScale);

            transform.localScale = desiredScale;
        }

        
    }
}