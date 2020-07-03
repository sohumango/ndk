package jp.co.normee;

public class palmvein {
    static {
        System.loadLibrary("PalmCore");
    }

    public static native int funA(int ntype);
}
