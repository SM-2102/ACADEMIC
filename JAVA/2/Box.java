class Box
{
	int width;
	int height;
	int depth;
int 
	void setData(int w, int h, int d)
	{	
		width=w;
		height=h;
		depth=d;
	}
	void setData1(int l)
	{
		length = l;
	} 

	int volume_cuboid() 	
	{
		return width *height*depth;
	}
	int volume_cube()
	{
		return length*length*length;
	} 
}

class CheckBox
{
	public static void main(String args[])
	{
		Box cuboid = new Box();
		Box cube = new Box();
		cuboid.setData(10,20,30);
		cube.setData1(10);
		int a = cuboid.volume_cuboid();
		int b = cube.volume_cube();
		if(a>b)	
			System.out.println("The volume of cuboid is more.");
		else
			System.out.println("The volume of cube is more.");
	}
}
