abstract class TwoDFigure
{
    double dim1, dim2;
    TwoDFigure(double a, double b)
    {
        dim1=a;
        dim2=b;
    }
    void calc_area();
}

class Rectangle extends TwoDFigure
{
    Rectangle(double height, double width)
    {
        super(height,width);
    }
    void calc_area()
    {
        double area = dim1*dim2;
        System.out.println("The area of rectangle : "+area);
    }
}

class Triangle extends TwoDFigure
{
    Triangle(double height, double base)
    {
        super(height,base);
    }
    void calc_area()
    {
        double area = (dim1*dim2)/2;
        System.out.println("The area of triangle : "+area);
    }
}

class Mainclass
{
    public static void main(String args[])
    {
        
    }
}
