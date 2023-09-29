class Finally_exception
{
    static int excep()
    {
        try
        {
            System.out.println("No exceptions.");
            return 1;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Exception");
        }
        finally
        {
            System.out.println("Finally executed nevertheless.");
            return 2;
        }
    }
    public static void main(String args[])
    {
        System.out.printf("Returned value : %d",excep());
    }
}