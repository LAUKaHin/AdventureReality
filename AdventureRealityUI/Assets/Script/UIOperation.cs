using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class UIOperation : MonoBehaviour
{
    public DataInterface playerSystem;
    public GameObject userCouponBag;
    public GameObject dialog;
    public uint cost;
    public uint quantity = 1;
    public uint totalValue;
    private int cNumber;
    private GridPopulator.ShopList.CouponItem targetShopCoupon;
    private GridPopulator.UserCouponList.CouponItem targetBackpackCoupon;
    public InputField quantityText;
    public Text myText;
    public Text total;
    public Slider mySlide;
    public GameObject buyBox;
    public GameObject prefab;
    public VuforiaBehaviour vb;
    public GameObject offCamButton;
    public GameObject ErrorTText;
    public Client client;
    public void Start()
    {
        userCouponBag.SetActive(true);
        quantityText.text = quantity.ToString();
    }
    public void Update()
    {
        total.text = totalValue.ToString();
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            CallDialog();
        }
    }
    public void CallDialog()//UnityEngine.Events.UnityAction does not except method with argument or with return value.
    {
        ShopDialog(null, 0, "提示", "你確定退出嗎?", Application.Quit);
    }
    public void RidGrandparent(RectTransform esc)
    {
        esc.parent.parent.gameObject.SetActive(false);//Deactivate
    }
    public void RidParent(RectTransform esc)
    {
        esc.parent.gameObject.SetActive(false);//Deactivate
    }
    public void ShopDialog(GridPopulator.ShopList.CouponItem coupon, int category, string title, string content, UnityEngine.Events.UnityAction youstuff)
    {
        string lText = "";
        string cText = "";
        dialog.SetActive(true);
        var yesButton = dialog.transform.GetChild(0).GetChild(2);//Access yes button
        var noButton = dialog.transform.GetChild(0).GetChild(3);//Access no button
        var useButton = dialog.transform.GetChild(0).GetChild(6);//Access useButton
        useButton.gameObject.SetActive(false);
        yesButton.gameObject.SetActive(true);
        noButton.gameObject.SetActive(true);
        yesButton.GetComponent<Button>().onClick.RemoveAllListeners();
        yesButton.GetComponent<Button>().onClick.AddListener(youstuff);

        var buyBox = dialog.transform.GetChild(0).GetChild(5);//Access buy box.
        if (coupon != null)
        {
            title = coupon.shopName;
            content = coupon.content;
            lText = "位置：" + coupon.location;
            cText = "聯絡方法：" + coupon.contect;
            cNumber = category;
            targetShopCoupon = coupon;
            buyBox.gameObject.SetActive(true);
            cost = coupon.cost;
        }
        else if (coupon != null && title != null & content != null)
        {
            print("You can't insert coupon, title and content at the same time when calling this method.");
        }
        else
        {
            buyBox.gameObject.SetActive(false);
        }
        var titleText = dialog.transform.GetChild(0).GetChild(0);//Access title
        titleText.GetComponent<Text>().text = title; 

        var contentText = dialog.transform.GetChild(0).GetChild(4).GetChild(0);//Access content
        contentText.GetComponent<Text>().text = content + "\n" + "\n" + lText + "\n" + cText;

        var total = dialog.transform.GetChild(0).GetChild(5).GetChild(5);
        quantity = 1;
        totalValue = cost * quantity;
        quantityText.text = quantity.ToString();
        total.GetComponent<Text>().text = totalValue.ToString();
    }
    public void BackpackDialog(GridPopulator.UserCouponList.CouponItem coupon, int category, string title, string content, UnityEngine.Events.UnityAction function)
    {
        string lText = "";
        string cText = "";
        print("Runing Backpack Dialog");

        var yesButton = dialog.transform.GetChild(0).GetChild(2);//Access yes button
        var noButton = dialog.transform.GetChild(0).GetChild(3);//Access no button

        dialog.SetActive(true);
        var useButton = dialog.transform.GetChild(0).GetChild(6);//Access use button
        useButton.GetComponent<Button>().onClick.RemoveAllListeners();
        useButton.GetComponent<Button>().onClick.AddListener(function);
        useButton.gameObject.SetActive(false);
        var buyBox = dialog.transform.GetChild(0).GetChild(5);//Access buy box.
        buyBox.gameObject.SetActive(false);

        if (coupon != null)
        {
            title = coupon.shopName;
            content = coupon.content;
            lText = "位置：" + coupon.location;
            cText = "聯絡方法：" + coupon.contect;
            cNumber = category;
            targetBackpackCoupon = coupon;
            useButton.gameObject.SetActive(true);
            yesButton.gameObject.SetActive(false);
            noButton.gameObject.SetActive(false);
        }
        else if (coupon != null && title != null && content != null)
        {
            print("You can't insert coupon, title and content at the same time when calling this method.");
        }
        else
        {
            yesButton.gameObject.SetActive(true);
            noButton.gameObject.SetActive(true);
            useButton.gameObject.SetActive(false);
        }
        var titleText = dialog.transform.GetChild(0).GetChild(0);//Access title
        titleText.GetComponent<Text>().text = title;

        var contentText = dialog.transform.GetChild(0).GetChild(4).GetChild(0);//Access content
        contentText.GetComponent<Text>().text = content + "\n" + "\n" + lText + "\n" + cText;

        var total = dialog.transform.GetChild(0).GetChild(5).GetChild(5);
        quantity = 1;
        quantityText.text = quantity.ToString();
        total.GetComponent<Text>().text = cost.ToString();
    }
    public void SliderChangeValue()
    {
        myText.text = mySlide.value.ToString()+ "F";
    }
    public void QuantityAddButton()
    {
        quantity++;
        quantityText.text = quantity.ToString();
        ChangeValue();
    }
    public void QuantityCutButton()
    {
        if (quantity > 1)
        {
            quantity--;
            quantityText.text = quantity.ToString();
            ChangeValue();
        }
    }
    public void ChangeValue()
    {
        quantity = uint.Parse(quantityText.text);
        totalValue = quantity * cost;
        total.text = totalValue.ToString();
    }
    public void Buying()
    {
        if (playerSystem.myPlayerList.player[0].score >= cost)
        {
            playerSystem.myPlayerList.player[0].score -= Convert.ToInt32(totalValue);
            userCouponBag.SetActive(true);
            print(cNumber);
            userCouponBag.GetComponent<GridPopulator>().AddCouponInUserPack(cNumber, targetShopCoupon, quantity, userCouponBag.GetComponent<GridPopulator>().uCategoryList[cNumber].content);
            List<GridPopulator.UserCouponList.CouponList> dalist = userCouponBag.GetComponent<GridPopulator>().uCategoryList;
            userCouponBag.GetComponent<GridPopulator>().Populate(dalist);
            userCouponBag.SetActive(false);
            client.RequestWriteUserData();
        }
        else
        {
            StartCoroutine(Animationor());
            print("user haven't enough money to buy this coupon.");
        }
    }
    public void Diretionor()
    {
        if (vb.enabled)
        {
            offCamButton.SetActive(true);
        }
    }
    IEnumerator Animationor()
    {
        ErrorTText.SetActive(true);
        ErrorTText.GetComponent<Text>().text = "Coupon幣不足，請掃描特定街景和位置獲取Coupon幣。";
        ErrorTText.GetComponent<Animator>().SetBool("Error", true);
        yield return new WaitForSeconds(3);
        ErrorTText.GetComponent<Animator>().SetBool("Error", false);
        ErrorTText.SetActive(false);
        //datBox.GetComponent<Animator>().SetBool("CanOpen", false);
    }
}
