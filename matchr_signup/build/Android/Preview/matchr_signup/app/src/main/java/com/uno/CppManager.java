package com.uno;

import android.os.Build;
import android.util.Log;

public class CppManager {
    @SuppressWarnings("unused")
    public static void LoadLibraries()
    {
        String[] libs = new String[] { "log", "stlport_shared", "V8Simple" };
        Log.d("matchr_signup","SDK: "+Build.VERSION.SDK_INT);

        if (loadLibrariesInternal(libs) != 0)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < libs.length; i++)
            {
                if (libs[i] == null)
                    continue;
                if (sb.length() == 0)
                    sb.append("Failed to load JNI libraries: ");
                else
                    sb.append(", ");
                sb.append(libs[i]);
            }
            Log.wtf("matchr_signup", sb.toString());
        }
        System.loadLibrary("matchr_signup");
    }

    static int loadLibrariesInternal(String[] libs)
    {
        while (true)
        {
            int loaded = 0;
            int failed = 0;
            for (int i = 0; i < libs.length; i++)
            {
                if (libs[i] == null)
                    continue;
                try
                {
                    System.loadLibrary(libs[i]);
                    libs[i] = null;
                    loaded++;
                }
                catch (UnsatisfiedLinkError e)
                {
                    failed++;
                }
            }
            if (loaded == 0 || failed == 0)
                return failed;
        }
    }
}
