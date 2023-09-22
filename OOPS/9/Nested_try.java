class Nested_try
{
	public static void main(String args[])
    {
		try
        {
			try
            {
				String s= args[0];
			}
			catch(ArrayIndexOutOfBoundsException e)
            {
				System.out.println("Array out of bound Exception");
			} 
			int a=5/0;
		}	
		catch(ArithmeticException e)
        {
			System.out.println("Can not Divided by Zero");
		}	
	}
}
