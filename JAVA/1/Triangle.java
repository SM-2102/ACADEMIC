class Triangle
{
	public static void main(String args[])
	{
		double peri=0.0;
		double area=0.0;
		double s=0.0;
		double a= Double.parseDouble(args[0]);
		double b= Double.parseDouble(args[1]);
		double c= Double.parseDouble(args[2]);
		peri = a+b+c;
		System.out.println("The perimeter : "+peri);
		s = peri/2;
		area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.println("The area : "+area);
	}
}