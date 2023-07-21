class Prime
{
	public static void main(String args[])
	{
		int n = Integer.parseInt(args[0]);
		int c=0;
		for (int i=2;i<=n/2;i++)
			if (n%i==0)
			{
				c=1;
				break;
			}
		if (c==1)
			System.out.println("It is not a prime number.");
		else
			System.out.println("It is a prime number.");
		
	}
}