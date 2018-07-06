package pack2;
import pack1.*;
public class example
{
public static void main(String args[])
{
student s1=new student();
s1.getroll(100);
s1.getname("jit saha");
System.out.println("name is"+s1.showname());
System.out.println("roll is"+s1.showroll());
}
}