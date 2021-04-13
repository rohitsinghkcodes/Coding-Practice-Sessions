class Swap
{
    public static void main(String[] args)
{
    int x= 10, y=15;
    x=x+y;
    y=x-y;
    x=x-y;
    System.out.print("x: "+x+"\ny: "+y);
}
}