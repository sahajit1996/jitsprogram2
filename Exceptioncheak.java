import java.lang.*;
public class Exceptioncheak
{
public static void main(String args[])
{
try
{
String Str1=null;
System.out.println("results"+Str1.length());
System.out.println("in try");
}
catch(NullPointerException e)
{
System.out.println("Exception\t"+e.getMessage());
}
finally
{
System.out.println("program ends");
}
}
}