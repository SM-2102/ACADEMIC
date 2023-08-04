class Ob_param
{
	int a, b;
	Ob_param(int x,int y)
	{
		a=x;
		b=y;
	}
	boolean equal(Ob_param ob)
	{
		if(ob.a==a && ob.b==b)
			return true;
		else
			return false;
	}
	public static void main(String args[])
	{
		Ob_param ob1=new Ob_param(1,2);
		Ob_param ob2=new Ob_param(1,2);
		Ob_param ob3=new Ob_param(2,3);
		System.out.println("0bject 1 = Object 2 : "+ob1.equal(ob2));
		System.out.println("Object 2 = Object 3 : "+ob1.equal(ob3));
	}
}
