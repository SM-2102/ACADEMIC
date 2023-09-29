class Chained_exception
{
    static void except()
    {
        NullPointerException e = new NullPointerException();
        e.initCause(new ArithmeticException());
        throw e;
    }
    public static void main(String args[])
    {
        try
        {
            except();
        }
        catch(NullPointerException e)
        {
            System.out.println("Exception : "+e);
            System.out.println("Original cause : "+e.getCause());
        }
    }
}
