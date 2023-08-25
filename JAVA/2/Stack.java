class Stack
{
	int top,max,num;
	Stack(int t, int m)
	{
		top = t;
		max = m;
	}
	int arr[] = new int[10];
	void push(int num)
	{
		
		if(top >= (max-1))
			System.out.println("Stack Overflow.");
		else
			arr[++top]=num;
		display();
	}
	void pop()
	{
		if(top==-1)
			System.out.println("Stack Underflow.");
		else
			num = arr[top--];
		display();
	}
	void display()
	{
		if(top<=-1)
			System.out.println("Stack empty.");
		else
		{
			System.out.print("The contents : ");
			for (int i=top; i>=0;i--)
				System.out.print(arr[i]+" ");
			System.out.println();
		}
	}
}
	
class Stack_main
{
	public static void main(String args[])
	{
		Stack stack1 = new Stack(-1,10);
		Stack stack2 = new Stack(-1,10);
		System.out.println("Popping from Stack 1");
		stack1.pop();
		System.out.println("Pushing 3 into Stack 2");
		stack2.push(3);
		System.out.println("Pushing 5 into Stack 2");
		stack2.push(5);
		System.out.println("Popping from Stack 2");
		stack2.pop();
	}
}
