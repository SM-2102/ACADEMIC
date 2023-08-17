class Nested 
{
    int x= 10;
    static class staticNested
    {
        void display()
        {
            Nested outer = new Nested();
            System.out.println("The value : "+outer.x);
        }
    }
}

class NestedMain
{
    public static void main(String args[])
    {
        Nested.staticNested ob = new Nested.staticNested();
        ob.display();
    }
}
