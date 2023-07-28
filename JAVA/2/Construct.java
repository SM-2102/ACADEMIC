class Construct
{
	int length;
	Construct()
	{
		length=10;
	}
}

class Construct1
{
	int width,height,depth;
	Construct1(int w, int h, int d)
	{
		width=w;
		height=h;
		depth=d;
	}
}

class Constructor_class
{
	public static void main(String args[])
	{	
		Construct mybox = new Construct();
		int volume_cube = mybox.length * mybox.length * mybox.length;
		Construct1 mybox1 = new Construct1(10,15,30);
		int volume_cuboid = mybox1.width * mybox1.height * mybox1.depth;
		if(volume_cuboid>volume_cube)	
			System.out.println("The volume of cuboid is more.");
		else
			System.out.println("The volume of cube is more.");
	}
}
		