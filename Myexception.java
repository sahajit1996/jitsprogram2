import java.lang.*;
import java.util.*;
public class Myexception extends Exception
{
public Myexception(String s)
 {
        super(s);
    }

public static void main(String args[])
{
double sallary;
int bonus;
String s1;
Scanner sc=new Scanner(System.in);
System.out.println("Enter the sallary");
sallary=sc.nextDouble();
System.out.println("Enter the bonus");
bonus=sc.nextInt();
try{


if(bonus>100)
{
throw new Myexception("Bonus can not be greter than 100 and less than 0");
}
else
{
sallary=sallary+sallary*((double)bonus/100);

System.out.println("sallry is"+sallary);
}
}
catch(Myexception e)
{
System.out.println("Exception :"+e.getMessage());

}
finally
{
System.out.println("program is ends here");
}
}
}
