class Throws_Exception
{
	static void throwme()throws IllegalAccessException
    {
		System.out.println("Inside Throw me");
		throw new IllegalAccessException();
	}
	public static void main(String args[])
    {
		try
        {
			throwme();
		}
		catch(IllegalAccessException e)
        {
			System.out.println("Illegal Exception Caught");
		}
	}
}