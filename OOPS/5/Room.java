class Room
{
    int length, breadth, height;
    Room(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void clc_area()
    {
        int area = length*breadth*height;
        System.out.print(area);
    }
}

class Bedroom extends Room
{
    boolean attached_bathroom= true, study_table=true, night_lamp = true;
    Bedroom(int l, int b, int h)
    {
        super(l,b,h);
    }
    void display()
    {
        System.out.println("Attached bathroom : "+attached_bathroom);
        System.out.println("Study table : "+study_table);
        System.out.println("Night lamp : "+night_lamp);
    }
}

class Drawingroom extends Room
{
    boolean sofa=true, wall_cabinet = true;
    Drawingroom(int l, int b, int h)
    {
        super(l,b,h);
    }
    void display()
    {
        System.out.println("Sofa : "+sofa);
        System.out.println("Wall cabinet : "+wall_cabinet);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Bedroom oBedroom = new Bedroom(10,20,30);
        Drawingroom oDrawingroom = new Drawingroom(15,20,30);
        System.out.print("The area of Bedroom : ");
        oBedroom.clc_area();
        System.out.println();
        System.out.print("The area of Drawing room : ");
        oDrawingroom.clc_area();
    }
}
