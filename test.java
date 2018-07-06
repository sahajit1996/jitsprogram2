public class test
{
private int x;
{
System.out.println("Intizalization block is here"+x);
x=5;
}
public test()
{
System.out.println("now we are in constructor"+x);
}
public static void main(String args[])
{
test t1=new test();
test t2=new test();
}
}
