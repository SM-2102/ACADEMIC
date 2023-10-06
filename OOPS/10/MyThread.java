public class MyThread extends Thread
{
	public void run()
	{
		System.out.println("Start of thread");
		try
		{
			Thread.sleep(500);
		}
		catch(InterruptedException e)
		{}
		System.out.println("End of thread");
	}
	public static void display_active(Thread t1,Thread t2)
	{
		System.out.println("T1 active : "+t1.isAlive());
		System.out.println("T2 active : "+t2.isAlive());
	}
	public static void main(String args[])
	{
		MyThread t1 = new MyThread(),
			 t2 = new MyThread();
		t1.start();
		t2.start();
		display_active(t1,t2);
		try
		{
			t1.join();
			t2.join();
		}
		catch(InterruptedException e)
		{}
		display_active(t1,t2);
	}
}
		
