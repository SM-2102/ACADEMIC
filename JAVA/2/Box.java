class Box
{
	int width, height, depth, length;
	void setData()
	{	
		width=10;
		height=30;
		depth=20;
	}
	void setData1()
	{
		length = 30;
	} 

	int volume_cuboid() 	
	{
		return width*height*depth;
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
		cuboid.setData();
		cube.setData1();
		if(cuboid.volume_cuboid()>cube.volume_cube())	
			System.out.println("The volume of cuboid is more.");
		else
			System.out.println("The volume of cube is more.");
	}
}
