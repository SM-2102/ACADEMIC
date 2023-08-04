class Data
{
	void setData(int a, double b)
	{	
		System.out.println("Integer "+a+" passed to Double results in "+b);
	}
	
	public static void main(String args[])
	{
		Data a1 = new Data();
		a1.setData(2,2);
	}
}
