class Complex
{
	double real=0.0,imag=0.0;
	static int number=-1;
	public Complex(double i,double r)
	{
		real=i;
		imag=r;
		number++;
	}
	protected void finalize()
	{
		number--;
	}
	void display()
	{
		if (imag>0)
			System.out.println(real+" + "+imag+"i");
		else
			System.out.println(real+" + ("+imag+")i");
	}
	static void funct(Complex num1,Complex num2)
	{	
		Complex ans = new Complex(0,0);
		ans.real = num1.real+num2.real;
		ans.imag = num1.imag+num2.imag;
		System.out.print("The addition : ");
		ans.display();
		ans.real = num1.real-num2.real;
		ans.imag = num1.imag-num2.imag;
		System.out.print("The subtraction : ");
		ans.display();
		ans.real = (num1.real*num2.real)-(num1.imag*num2.imag);
		ans.imag = (num1.real*num2.imag)-(num1.imag*num2.real);
		System.out.print("The multiplication : ");
		ans.display();
		double mod = Math.sqrt(num1.real*num1.real + num1.imag*num1.imag);
		System.out.println("The modulus of first number : "+mod);
		System.out.print("The complement of second number : ");
		ans.imag = -1*num2.imag;
		ans.display();
	}
	public static void main(String args[])
	{
		Complex n1 = new Complex(1,3), 
			n2 = new Complex(-4,-5);
		System.out.println("The numbers : ");
		n1.display();
		n2.display();
		funct(n1,n2);
		System.out.println("The count of numbers : "+number);
	}
}
