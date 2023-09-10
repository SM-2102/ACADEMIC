interface A1
{
    interface A2
    {
        void display();
    }
}

class NestedDemo implements A1.A2
{
    public void display()
    {
        System.out.println("Hello World.");
    }
    public static void main(String args[])
    {
        A1.A2 ob = new NestedDemo();
        ob.display();
    }
}
