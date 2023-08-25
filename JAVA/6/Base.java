class Base
{
    void display()
    {
        System.out.println("Method of super class.");
    }
}

class Base1 extends Base
{
    void display(int num)
    {
        System.out.println("Method Overloading");
    }
}

class Base2 extends Base
{
    void display()
    {
        System.out.println("Method Overridden");
    }
}

class Base_main
{
    public static void main(String args[])
    {
        Base ob1 = new Base();
        ob1.display();
        Base1 ob2 = new Base1();
        ob2.display(5);
        Base2 ob3 = new Base2();
        ob3.display();
    }
}