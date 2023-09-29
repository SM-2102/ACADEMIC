class Child_Thread implements Runnable
{
	public void run()
    {
		try
        {
			for(int i=0;i<3;i++)
            {
				System.out.println("In Child");
				Thread.sleep(500);
			}
			System.out.println("Child Terminated");
		}
        catch(InterruptedException e)
        {
			System.out.println("Interrupted Exception");
		}
	}
}

class MyThread
{
	public static void main(String args[]) throws InterruptedException
    {
		System.out.println("In Main");
		Thread t1 = new Thread(new Child_Thread(),"Child");
		t1.start();
		t1.join();
		System.out.println("Main Ended");
	}
}