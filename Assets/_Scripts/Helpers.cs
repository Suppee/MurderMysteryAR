using System;
using System.Collections.Generic;
using UnityEngine;

public static class Helpers {
    private static readonly Dictionary<float, WaitForSeconds> waitDict = new Dictionary<float, WaitForSeconds>();
    public static WaitForSeconds GetWait(float time) {
        if(waitDict.TryGetValue(time, out var wait)) return wait;

        waitDict[time] = new WaitForSeconds(time);
        return waitDict[time];
    }
    public static string SecsToClockFormat(float secs) {
        return TimeSpan.FromSeconds(secs).ToString(@"hh\:mm\:ss");
    } 

    public static float Map (this float value, float fromSource, float toSource, float fromTarget, float toTarget) {
        return (value - fromSource) / (toSource - fromSource) * (toTarget - fromTarget) + fromTarget;
    }


}
