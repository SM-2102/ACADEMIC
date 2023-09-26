class MethOver
{
    void display()
    {
        System.out.println("Original Method.");
    }
}

class Methover1 extends MethOver
{
    void display()
    {
        System.out.println("Method Overriden.");
    }
}

class Demo
{
    public static void main(String args[])
    {
        new MethOver().display();
        new Methover1().display();
    }
}
