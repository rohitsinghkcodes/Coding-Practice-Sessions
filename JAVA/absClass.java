import java.util.*;

abstract class shape{
    shape(){System.out.println("Calculating ares");}
    int area()
    {
        System.out.println("Printing Area");
        return 0;
    }
}

class Rect extends shape{
    Scanner sc= new Scanner(System.in); 
        int l= sc.nextInt();
        int b = sc.nextInt();
    @Override
    int area() {
        int x = l*b;
        return x;
        
    }
}
class abs{
    public static void main(String args[])
    {
       shape obj = new Rect();
       obj.area();
    }
}