class Call
{
	int x=5;
	void test(int x)
	{
		x = x + 1;
		System.out.println("After calling by value");
	}
	void test(Call ob)
	{
		ob.x = ob.x+1;
		System.out.println("After calling by reference");
	}
	
	public static void main(String args[])
	{
		Call ob1 = new Call();
		System.out.println("The value : "+ob1.x);
		ob1.test(5);
		System.out.println("The value : "+ob1.x);
		ob1.test(ob1);
		System.out.println("The value : "+ob1.x);
	}
}

		
