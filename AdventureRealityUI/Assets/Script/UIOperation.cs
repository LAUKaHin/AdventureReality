using System;
using System.Collections;
using System.Globalization;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class UIOperation : MonoBehaviour
{
    public DataInterface playerSystem;
    public GameObject userCouponBag, shopCouponBag, activityList;
    public GameObject dialog;
    public GameObject CamelPaintFloorPlan, ShingYipFloorPlan, HewlettCentreFloorPlan, map, searchMap;
    public GameObject mapTitle;
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
    public GameObject camUI;
    public GameObject camvas;
    public VuforiaBehaviour vb;
    public GameObject offCamButton;
    public GameObject ErrorTText;
    public Client client;
    public Text searchText;
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
    public void RidGreatGrandparent(RectTransform esc)
    {
        esc.parent.parent.parent.gameObject.SetActive(false);//Deactivate
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
        var yesButton = dialog.transform.GetChild(0).GetChild(1).GetChild(0);//Access yes button
        var noButton = dialog.transform.GetChild(0).GetChild(1).GetChild(1);//Access no button
        var useButton = dialog.transform.GetChild(0).GetChild(1).GetChild(2);//Access useButton
        useButton.gameObject.SetActive(false);
        yesButton.gameObject.SetActive(true);
        noButton.gameObject.SetActive(true);
        yesButton.GetComponent<Button>().onClick.RemoveAllListeners();
        yesButton.GetComponent<Button>().onClick.AddListener(youstuff);

        var buyBox = dialog.transform.GetChild(0).GetChild(3);//Access buy box.
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
        var titleText = dialog.transform.GetChild(0).GetChild(0).GetChild(1);//Access title
        titleText.GetComponent<Text>().text = title; 

        var contentText = dialog.transform.GetChild(0).GetChild(2).GetChild(0);//Access content
        contentText.GetComponent<Text>().text = content + "\n" + "\n" + lText + "\n" + cText;

        var total = dialog.transform.GetChild(0).GetChild(3).GetChild(5);//Access total.text
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

        var yesButton = dialog.transform.GetChild(0).GetChild(1).GetChild(0);//Access yes button
        var noButton = dialog.transform.GetChild(0).GetChild(1).GetChild(1);//Access no button
        var useButton = dialog.transform.GetChild(0).GetChild(1).GetChild(2);//Access useButton
        dialog.SetActive(true);
        useButton.GetComponent<Button>().onClick.RemoveAllListeners();
        useButton.GetComponent<Button>().onClick.AddListener(function);
        useButton.gameObject.SetActive(false);
        var buyBox = dialog.transform.GetChild(0).GetChild(3);//Access buy box.
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
        var titleText = dialog.transform.GetChild(0).GetChild(0).GetChild(1);//Access title
        titleText.GetComponent<Text>().text = title;

        var contentText = dialog.transform.GetChild(0).GetChild(2).GetChild(0);//Access content
        contentText.GetComponent<Text>().text = content + "\n" + "\n" + lText + "\n" + cText;

        var total = dialog.transform.GetChild(0).GetChild(3).GetChild(5);//Access total.text
        quantity = 1;
        quantityText.text = quantity.ToString();
        total.GetComponent<Text>().text = cost.ToString();
    }
    public void ShopDataDialog(LoopPointer.ShopData info, string title, string content)
    {
        string lText = "";
        string cText = "";
        print("Runing ShopData Dialog");

        var yesButton = dialog.transform.GetChild(0).GetChild(1).GetChild(0);//Access yes button
        var noButton = dialog.transform.GetChild(0).GetChild(1).GetChild(1);//Access no button
        var useButton = dialog.transform.GetChild(0).GetChild(1).GetChild(2);//Access useButton
        dialog.SetActive(true);
        useButton.GetComponent<Button>().onClick.RemoveAllListeners();
        //useButton.GetComponent<Button>().onClick.AddListener(function);
        useButton.gameObject.SetActive(false);
        var buyBox = dialog.transform.GetChild(0).GetChild(3);//Access buy box.
        buyBox.gameObject.SetActive(false);

        if (info != null)
        {
            title = info.shopName;
            content = info.content;
            lText = "位置：" + info.location;
            cText = "聯絡方法：" + info.contact;
            useButton.gameObject.SetActive(false);
            yesButton.gameObject.SetActive(false);
            noButton.gameObject.SetActive(true);
        }
        else if (info != null && title != null && content != null)
        {
            print("You can't insert coupon, title and content at the same time when calling this method.");
        }
        else
        {
            yesButton.gameObject.SetActive(true);
            noButton.gameObject.SetActive(true);
            useButton.gameObject.SetActive(false);
        }
        var titleText = dialog.transform.GetChild(0).GetChild(0).GetChild(1);//Access title
        titleText.GetComponent<Text>().text = title;

        var contentText = dialog.transform.GetChild(0).GetChild(2).GetChild(0);//Access content
        contentText.GetComponent<Text>().text = content + "\n" + "\n" + lText + "\n" + cText;

        var total = dialog.transform.GetChild(0).GetChild(3).GetChild(5);//Access total.text
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
        if (cost == 0 || quantity == 0)
        {
            StartCoroutine(Animationor("請勿將將購買數量設定為0，請重新購買。"));
        }
        else if (playerSystem.myPlayerList.player[0].score >= totalValue)
        {
            playerSystem.myPlayerList.player[0].score -= Convert.ToInt32(totalValue);
            userCouponBag.SetActive(true);
            print(cNumber);
            userCouponBag.GetComponent<GridPopulator>().AddCouponInUserPack(cNumber, targetShopCoupon, quantity, userCouponBag.GetComponent<GridPopulator>().uCategoryList[cNumber].content);
            List<GridPopulator.UserCouponList.CouponList> dalist = userCouponBag.GetComponent<GridPopulator>().uCategoryList;
            userCouponBag.GetComponent<GridPopulator>().Populate(dalist);
            userCouponBag.SetActive(false);
            client.RequestWriteUserData();
            client.RequestWriteCouponAmount(cNumber, targetShopCoupon.couponID, quantity);
        }
        else
        {
            StartCoroutine(Animationor("Coupon幣不足，請掃描特定街景和位置獲取Coupon幣。"));
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
    public void escapeButton()
    {
        if ((CamelPaintFloorPlan.activeSelf || ShingYipFloorPlan.activeSelf || HewlettCentreFloorPlan.activeSelf) &&
            !(userCouponBag.activeSelf || shopCouponBag.activeSelf || activityList.activeSelf))
        {
            if (vb.enabled == true)
            {
                vb.enabled = false;
                map.SetActive(true);
                mapTitle.SetActive(true);
                camUI.SetActive(false);
                camvas.SetActive(false);
                print("case 1.5");
            }
            else
            {
                CamelPaintFloorPlan.SetActive(false);
                ShingYipFloorPlan.SetActive(false);
                HewlettCentreFloorPlan.SetActive(false);
                mapTitle.SetActive(true);
                camUI.SetActive(false);
                camvas.SetActive(false);
                print("case 1");
            }
        }
        else if (!vb.enabled && (userCouponBag.activeSelf || shopCouponBag.activeSelf || activityList.activeSelf))
        {
            userCouponBag.SetActive(false);
            shopCouponBag.SetActive(false);
            activityList.SetActive(false);
            map.SetActive(true);
            mapTitle.SetActive(true);
            print("case 2");
        }
        else if (vb.enabled && (userCouponBag.activeSelf || shopCouponBag.activeSelf || activityList.activeSelf))
        {
            userCouponBag.SetActive(false);
            shopCouponBag.SetActive(false);
            activityList.SetActive(false);
            print("case 3");
        }
        else if (vb.enabled && !map.activeSelf)
        {
            map.SetActive(true);
            mapTitle.SetActive(true);
            vb.enabled = false;
            camUI.SetActive(false);
            camvas.SetActive(false);
            print("case 4");
        }
        else if (vb.enabled && map.activeSelf)
        {
            map.SetActive(true);
            mapTitle.SetActive(true);
            vb.enabled = false;
            camUI.SetActive(false);
            camvas.SetActive(false);
            print("case 5");
        }
        else if (searchMap.activeSelf == true)
        {
            searchMap.SetActive(false);
            print("case 6");
        }
        else
        {
            CallDialog();
            print("case 7");
        }
    }
    public void SearchButton()
    {
        if (vb.enabled == true)
        {

        }
        else if (shopCouponBag.activeSelf == true)
        {
            string searchString = searchText.text;
            CultureInfo allCase = new CultureInfo("en-US", false);
            GridPopulator filter = shopCouponBag.GetComponent<GridPopulator>();
            if (searchString == "")
            {
                for (int i = 0; i < filter.sCategoryList.Count; i++)
                {
                    for (int j = 0; j < filter.sCategoryList[i].CouponItems.Count; j++)
                    {
                            shopCouponBag.transform.GetChild(i + 4).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(true);
                    }
                }
            }
            else
            {
                for (int i = 0; i < filter.sCategoryList.Count; i++)
                {
                    for (int j = 0; j < filter.sCategoryList[i].CouponItems.Count; j++)
                    {
                        if (allCase.CompareInfo.IndexOf(filter.sCategoryList[i].CouponItems[j].shopName + filter.sCategoryList[i].CouponItems[j].content, searchString, CompareOptions.IgnoreCase) >= 0)
                        {
                            shopCouponBag.transform.GetChild(i + 4).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(true);
                        }
                        else
                        {
                            shopCouponBag.transform.GetChild(i + 4).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
        else if (userCouponBag.activeSelf == true)
        {
            string searchString = searchText.text;
            CultureInfo allCase = new CultureInfo("en-US", false);
            GridPopulator filter = userCouponBag.GetComponent<GridPopulator>();
            if (searchString == "")
            {
                for (int i = 0; i < filter.sCategoryList.Count; i++)
                {
                    for (int j = 0; j < filter.sCategoryList[i].CouponItems.Count; j++)
                    {
                        userCouponBag.transform.GetChild(i + 3).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(true);
                    }
                }
            }
            else
            {
                for (int i = 0; i < filter.uCategoryList.Count; i++)
                {
                    for (int j = 0; j < filter.sCategoryList[i].CouponItems.Count; j++)
                    {
                        if (allCase.CompareInfo.IndexOf(filter.sCategoryList[i].CouponItems[j].shopName + filter.uCategoryList[i].CouponItems[j].content, searchString, CompareOptions.IgnoreCase) >= 0)
                        {
                            userCouponBag.transform.GetChild(i + 3).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(true);
                        }
                        else
                        {
                            userCouponBag.transform.GetChild(i + 3).transform.GetChild(0).transform.GetChild(0).transform.GetChild(j).gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
        else if (map.activeSelf == true)
        {
            searchMap.SetActive(true);
        }
        else
        {
        
        }
    }
    IEnumerator Animationor(string errorText)
    {
        ErrorTText.SetActive(true);
        ErrorTText.GetComponent<Text>().text = errorText;
        ErrorTText.GetComponent<Animator>().SetBool("Error", true);
        yield return new WaitForSeconds(3);
        ErrorTText.GetComponent<Animator>().SetBool("Error", false);
        ErrorTText.SetActive(false);
        //datBox.GetComponent<Animator>().SetBool("CanOpen", false);
    }
}
