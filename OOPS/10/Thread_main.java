class Thread_main
{
	public static void main(String args[])
    {
		Thread t = Thread.currentThread();
		System.out.println("Default name = "+t.getName());
      	long id = t.getId();
      	boolean status = t.isAlive();
      	Thread.State state = t.getState();
      	System.out.println(" Thread ID = " + id);
      	System.out.println(" Thread State = " + state);
      	System.out.println(" Thread Status = " + status);
		t.setName("MyThread");
		System.out.println("New name = "+t.getName());
	}
}
