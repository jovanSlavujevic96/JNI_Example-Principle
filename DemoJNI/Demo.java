import classPackage.ClassA;

public class Demo
{
    static public void main(String[] args)
    {
        ClassA A = new ClassA();
        A.passString("Aa");
        System.out.println("i: " + String.valueOf(A.getI()) + " j: " + String.valueOf(A.getJ())  );    
    }
}