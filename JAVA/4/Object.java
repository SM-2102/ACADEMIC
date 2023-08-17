class Object 
{
	int a;
    Object(int i)
    {
        a=i;
    }
	Object funct()
    {
		Object ob = new Object(a+5);
		return ob;
	}
	public static void main(String args[])
    {
		Object ob1 = new Object(2);
        System.out.println("The value of ob1 : "+ob1.a);
        Object ob2 = ob1.funct();
        System.out.println("The value of ob2 : "+ob2.a);
	}
}

