using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "Map Data", menuName = "ScriptableObjects/MapData", order = 1)]
public class MapData : ScriptableObject
{
    public Sprite map;
    public string name;
    public string ar_scene_name;
}
