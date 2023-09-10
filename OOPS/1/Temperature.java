class Temperature
{
	public static void main(String args[])
	{
		double cel =0.0;
		double fah = Double.parseDouble(args[0]);
		cel = ((fah-32)/9)*5;
		System.out.println("The Celsius temperature : "+cel);
	}
}