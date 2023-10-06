class ThreadX implements Runnable
{
	Thread t;
	int t_num;
	ThreadX(int thread_num)
	{
		t_num = thread_num;
		t = new Thread(this,"Thread "+t_num);
		t.start();
	}
	public void run()
	{
		try
		{
			for(int i=0;i<3;i++)
			{
				System.out.println("In Thread "+t_num);
				Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{}
	}
}

class Thread3{
	public static void main(String args[]) throws InterruptedException{
		new ThreadX(1);
		new ThreadX(2);
		try
		{
			for(int i=0;i<3;i++)
			{
				System.out.println("In Main");
				Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{}
		Thread.sleep(500);
		System.out.println("Main Ended");
	}
}