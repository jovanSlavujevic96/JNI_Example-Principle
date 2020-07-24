package classPackage;

public class ClassA {
    int i,j;

    static
    {
        try {
            System.loadLibrary("DemoJNI");
        } catch (Exception e) {
            //TODO: handle exception
            System.out.println("JOVAN SLAVUJEVIC\n");
            e.printStackTrace();
        }
    }

    public ClassA()
    {
        i = 0; j = 0;
    }
 
    private void setI(int i)
    {
        this.i = i;
    }
    private void setJ(int j)
    {
        this.j = j;
    }

    public native void passString(String chars);

    public int getI()
    {
        return i;
    }
    public int getJ()
    {
        return i;
    }
}