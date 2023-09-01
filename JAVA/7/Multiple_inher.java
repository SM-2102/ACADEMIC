interface A
{
    void display(int n);
}

interface B
{
    void display1(int n);
}

class C implements A, B
{
    public void display(int n)
    {
        System.out.printf("The square of %d is %d.\n",n,n*n);
    }
    public void display1(int n)
    {
        System.out.printf("The cube of %d is %d.\n",n,n*n*n);
    }
}

class Multiple_inher
{
    public static void main(String args[])
    {
        new C().display(5);
        new C().display1(5);
    }
}
