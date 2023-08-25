class MethOver
{
    int a = 10;
    void display()
    {
        System.out.println("Original Method.");
    }
}

class Methover1 extends MethOver
{
    int a =20;
    void display()
    {
        System.out.println("Method Overriden");
    }
}

class Demo
{
    public static void main(String args[])
    {
        MethOver ob = new Methover1();
        ob.display();
        System.out.println("Value of a : "+ob.a);
        System.out.println("Data members cannot be overidden");
    }
}
