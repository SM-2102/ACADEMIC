interface Class1
{
    void display(int n);
}

interface Class2 extends Class1
{
    void display1(int n);
}

class Interface_inher implements Class2
{
    public void display(int n)
    {
        System.out.printf("The square of %d is %d.\n",n,n*n);
    }
    public void display1(int n)
    {
        System.out.printf("The cube of %d is %d.\n",n,n*n*n);
    }
    public static void main(String args[])
    {
        Interface_inher ob = new Interface_inher();
        ob.display(3);
        ob.display1(3);
    }
}
