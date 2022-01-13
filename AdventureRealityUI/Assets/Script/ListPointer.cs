using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ListPointer : MonoBehaviour
{
    public UIOperation uio;
    public GridPopulator lists;
    public int p_categoryNum;
    public int p_loopnumber;
    public bool backpackMode;

    private void Start()
    {
        uio = GameObject.Find("Canvas").GetComponent<UIOperation>();
        if (backpackMode)
        {
            lists = GameObject.Find("CouponList").GetComponent<GridPopulator>();
            this.GetComponent<Button>().onClick.AddListener(backpackCallDialogAuto);
        }
        else
        {
            lists = GameObject.Find("ShopList").GetComponent<GridPopulator>();
            this.GetComponent<Button>().onClick.AddListener(ShopCallDialogAuto);
        }   
    }
    void ShopCallDialogAuto()//UnityEngine.Events.UnityAction does not except method with argument or with return value.
    {
        //print(lists.shopList[p_categoryNum].CouponItems[p_loopnumber].content + " $" + lists.sCategoryList[p_categoryNum].CouponItems[p_loopnumber].cost);
        uio.ShopDialog(lists.sCategoryList[p_categoryNum].CouponItems[p_loopnumber], p_categoryNum, null, null, uio.Buying);
    }
    void backpackCallDialogAuto()//UnityEngine.Events.UnityAction does not except method with argument or with return value.
    {
        //print(lists.shopList[p_categoryNum].CouponItems[p_loopnumber].content + " $" + lists.sCategoryList[p_categoryNum].CouponItems[p_loopnumber].cost);
        uio.BackpackDialog(lists.uCategoryList[p_categoryNum].CouponItems[p_loopnumber], p_categoryNum, null, null, null);
    }
}
