class Point
{
	double x, y;
	Point(double a, double b)
    {
		x=a;
		y=b;
	}
	static double dist(Point a, Point b)
    {
		return Math.sqrt(Math.pow(a.x-b.x,2) + Math.pow(a.y-b.y,2));
   	}
	public static void main(String args[])
    {
		Point a = new Point(2,2),
			  b = new Point(6,5);
		System.out.println("Distance is : " + dist(a,b));
	}
}
