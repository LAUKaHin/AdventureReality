using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class LoopPointer : MonoBehaviour
{
    public int floorFlag;
    public UIOperation uio;
    [Serializable]
    public class ShopData
    {
        public string shopName;
        public string content;
        public string location;
        public string contact;
    }
    public ShopData shopData;
    public void ShopDataCallDialogAuto()
    {
        uio.ShopDataDialog(shopData, "", "");
    }
}
