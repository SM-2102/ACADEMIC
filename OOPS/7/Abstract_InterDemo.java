interface AA
{
    void display();
}

class BB implements AA
{
    public void display()
    {
        System.out.println("Hello World.");
    }
}

abstract class CC implements AA {}

class Abstact_InterDemo extends CC
{
    public void display()
    {
            System.out.println("Hello Earth.");
    }
    public static void main(String args[])
    {
        System.out.println("Methods are defined in a normal class.");
        new BB().display();
        System.out.println("Methods are not defined in an abstract class.");
        new Abstact_InterDemo().display();
    }
}
