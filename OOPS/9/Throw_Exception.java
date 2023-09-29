class Throw_Exception
{
	static void procA()
	{
		try
		{
			System.out.println("Inside Proc A");
			throw new RuntimeException();
		}
		finally
		{
			System.out.println("Proc A Finally");
		}
	}
	
	public static void main(String args[])
	{
		try
		{
			procA();
		}
		catch(Exception e)
		{
			System.out.println("Exception Caught");
		}
	}
}
		