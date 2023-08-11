class Complex
{
	int real,imag;
	public Complex(int i,int r)
	{
		real=i;
		imag=r;
	}
	void display()
	{
		if (imag>0)
			System.out.println(real+"+"+imag+"i");
		else
			System.out.println(real+""+imag+"i");
	}
	static Complex add(Complex num1, Complex num2)
	{	
		Complex ans = new Complex(0,0);
		ans.real = num1.real+num2.real;
		ans.imag = num1.imag+num2.imag;
		return ans;
	}
	static Complex sub(Complex num1, Complex num2)
	{	
		Complex ans = new Complex(0,0);
		ans.real = num1.real-num2.real;
		ans.imag = num1.imag-num2.imag;
		return ans;
	}
	static Complex mult(Complex num1, Complex num2)
	{	
		Complex ans = new Complex(0,0);
		ans.real = (num1.real*num2.real);
		ans.imag = num1.imag+num2.imag;
		return ans;
	}
	public static void main(String args[])
	{
		Complex n1 = new Complex(1,3);
		Complex n2 = new Complex(4,5);
		System.out.println("The numbers : ");
		n1.display();
		n2.display();
		Complex ans = add(n1,n2);
		System.out.print("The addition : ");
		ans.display();
		ans = sub(n1,n2);
		System.out.print("The subtraction : ");
		ans.display();
		ans = mult(n1,n2);
		System.out.print("The multiplication : ");
		ans.display();
	}
}
