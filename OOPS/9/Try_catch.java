class Try_catch
{
    public void display()
    {
        System.out.println("Hello World");
    }
	public static void main(String args[])
    {
		try 
        {
			String s= args[0];
			int a = 5/0;
            Try_catch ob =null;
            ob.display();
		}
		catch(ArithmeticException e)
        {
			System.out.println("Can not Divided by Zero");
		}
		catch(ArrayIndexOutOfBoundsException e)
        {
			System.out.println("Array out of bounds");	
		}
		catch(NullPointerException e)
        {
			System.out.println("Null Pointer Exception");
		}
	}
}