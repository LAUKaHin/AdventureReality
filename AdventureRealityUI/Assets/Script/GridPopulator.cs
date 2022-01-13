using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GridPopulator : MonoBehaviour
{
	public UIOperation openDialog;
	public bool backpackMode;
	public List<Sprite> activityImage;
	public GameObject prefab; // This is our prefab object that will be exposed in the inspector
	private int loopnumber;
	private int categoryNum;



	[Serializable]
	public class ShopList
	{
		[Serializable]
		public class CouponItem
		{
			public string shopName;
			public string content;
			public string location;
			public string contect;
			public string promotionShortName;
			public uint cost;
			public Sprite image;
		}
		[Serializable]
		public class CouponList
		{
			public GameObject content;
			public List<CouponItem> CouponItems;
		}
		public CouponList food, furniture, clothing, accessory, electronics, recreation;
	}
	public ShopList shopList;

	[Serializable]
	public class UserCouponList
	{
		[Serializable]
		public class CouponItem
		{
			public string shopName;
			public string content;
			public string location;
			public string contect;
			public string promotionShortName;
			public Sprite image;
			public uint quantity;
		}
		[Serializable]
		public class CouponList
		{
			public GameObject content;
			public List<CouponItem> CouponItems;
		}
		public CouponList food, furniture, clothing, accessory, electronics, recreation;
	}
	public UserCouponList userCouponList;

	public List<ShopList.CouponList> sCategoryList;
	public List<UserCouponList.CouponList> uCategoryList;
	void Start()
	{

		if (activityImage.Count > 0)
		{
			Activity(activityImage);
		}
		else if (!backpackMode)
		{
			sCategoryList.Add(shopList.food);
			sCategoryList.Add(shopList.furniture);
			sCategoryList.Add(shopList.clothing);
			sCategoryList.Add(shopList.accessory);
			sCategoryList.Add(shopList.electronics);
			sCategoryList.Add(shopList.recreation);
			for (int i = 0; i < sCategoryList.Count; i++)
			{
				categoryNum = i;
				Populate(sCategoryList[i].content, sCategoryList[i].CouponItems);
				print(i);
			}
		}
		else
		{
			this.gameObject.SetActive(true);
			uCategoryList.Add(userCouponList.food);
			uCategoryList.Add(userCouponList.furniture);
			uCategoryList.Add(userCouponList.clothing);
			uCategoryList.Add(userCouponList.accessory);
			uCategoryList.Add(userCouponList.electronics);
			uCategoryList.Add(userCouponList.recreation);
			this.gameObject.SetActive(false);
		}
	}

	void Populate(GameObject contents, List<ShopList.CouponItem> list)
	{
		GameObject newObj; // Create GameObject instance
		for (int i = 0; i < list.Count; i++)
		{
			loopnumber = i;
			// Create new instances of our prefab until we've created as many as we specified
			newObj = (GameObject)Instantiate(prefab, contents.transform);
			var notOnUseText = newObj.transform.GetChild(0);//Access useButton
			notOnUseText.gameObject.SetActive(false);
			newObj.GetComponent<Image>().sprite = list[i].image;
			newObj.GetComponent<Image>().color = Color.white;
			newObj.GetComponent<ListPointer>().p_categoryNum = categoryNum;
			newObj.GetComponent<ListPointer>().p_loopnumber = loopnumber;
			newObj.GetComponent<ListPointer>().backpackMode = false;
		}
	}


	public void Populate(List<UserCouponList.CouponList> list)
	{
		for (int i = 0; i < list.Count; i++)
		{
			GameObjectExtensions.Clear(list[i].content);
		}
		GameObject newObj; // Create GameObject instance
		for (int j = 0; j < list.Count; j++)
		{
			for (int i = 0; i < list[j].CouponItems.Count; i++)
			{
				//int length = list[j].CouponItems.Count - 1;
				// Create new instances of our prefab until we've created as many as we specified
				newObj = (GameObject)Instantiate(prefab, list[j].content.transform);
				newObj.GetComponent<ListPointer>().p_categoryNum = j;
				newObj.GetComponent<ListPointer>().p_loopnumber = i;
				newObj.GetComponent<ListPointer>().backpackMode = true;
				newObj.GetComponent<Image>().sprite = list[j].CouponItems[i].image;
				newObj.GetComponent<Image>().color = Color.white;

				if (list[j].CouponItems[i].quantity > 1)
				{
					newObj.GetComponentInChildren<Text>().text = list[j].CouponItems[i].quantity.ToString();
				}
				else
				{
					newObj.GetComponentInChildren<Text>().enabled = false;
				}
			}
		}	
	}

	private void UserCouponViewer()
	{
		
	}

	void Activity(List<Sprite> image)
	{
		GameObject newObj; // Create GameObject instance
		for (int i = 0; i < image.Count; i++)
		{
			// Create new instances of our prefab until we've created as many as we specified
			newObj = (GameObject)Instantiate(prefab, transform);

			newObj.GetComponent<Image>().sprite = image[i];
			var notOnUseText = newObj.transform.GetChild(0);//Access useButton
			notOnUseText.gameObject.SetActive(false);
			// Randomize the color of our image
			//newObj.GetComponent<Image>().color = UnityEngine.Random.ColorHSV();
			Destroy(newObj.GetComponent<ListPointer>());
		}
	}
	
	public void AddCouponInUserPack(int category,ShopList.CouponItem coupon, uint quantity, GameObject contents)
	{
		UserCouponList.CouponItem transformer = new UserCouponList.CouponItem();
		transformer.shopName = coupon.shopName;
		transformer.content = coupon.content;
		transformer.location = coupon.location;
		transformer.contect = coupon.contect;
		transformer.image = coupon.image;
		transformer.promotionShortName = coupon.promotionShortName;
		transformer.quantity = quantity;

		bool check = false;

		if (category == 0)
		{
			for (int i = 0; i < userCouponList.food.CouponItems.Count; i++)
			{
				if (userCouponList.food.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.food.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.food.CouponItems.Add(transformer);
			}
		}
		else if (category == 1)
		{
			for (int i = 0; i < userCouponList.furniture.CouponItems.Count; i++)
			{
				if (userCouponList.furniture.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.furniture.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.furniture.CouponItems.Add(transformer);
			}
		}
		else if (category == 2)
		{
			for (int i = 0; i < userCouponList.clothing.CouponItems.Count; i++)
			{
				if (userCouponList.clothing.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.clothing.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.clothing.CouponItems.Add(transformer);
			}
		}
		else if (category == 3)
		{
			for (int i = 0; i < userCouponList.accessory.CouponItems.Count; i++)
			{
				if (userCouponList.accessory.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.accessory.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.accessory.CouponItems.Add(transformer);
			}
		}
		else if (category == 4)
		{
			for (int i = 0; i < userCouponList.electronics.CouponItems.Count; i++)
			{
				if (userCouponList.electronics.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.electronics.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.electronics.CouponItems.Add(transformer);
			}
		}
		else if (category == 5)
		{
			for (int i = 0; i < userCouponList.recreation.CouponItems.Count; i++)
			{
				if (userCouponList.recreation.CouponItems[i].promotionShortName == coupon.promotionShortName)
				{
					userCouponList.recreation.CouponItems[i].quantity += quantity;
					check = true;
					break;
				}
			}
			if (!check)
			{
				userCouponList.recreation.CouponItems.Add(transformer);
			}		
		}
		else
		{
			print("Invailed category number");
		}
	}
}

static public class GameObjectExtensions
{
	static public void Clear(this GameObject go)
	{
		for (int i = go.transform.childCount - 1; i >= 0; i--)
		{
			GameObject.Destroy(go.transform.GetChild(i).gameObject);
		}
	}
}