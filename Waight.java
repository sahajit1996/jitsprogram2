package main;
import java.util.*;

public class Waight {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		
		Character c;
		Integer i=0,i1=0;
		Integer value=0;
		HashMap<Character,Integer> mp=new HashMap<Character,Integer>();
	//HashMap.Entry<Character,Integer> e =new HashMap.Entry<Character,Integer>();
		for(c='A';c<='Z';c++)
		{
			mp.put(c, ++i);
		}
	mp.put(' ',0);
	//System.out.println(mp.getValue());
		System.out.println("Enter the value of the String");
		String s=sc.nextLine();
		System.out.println("Enter the value of the input1");
		int input1=sc.nextInt();
		char[] ch=s.toCharArray();
		for(HashMap.Entry e:mp.entrySet())
		{
			if(input1==1)
				while(i1<ch.length)
				{
			if(e.getKey().equals((Character)s.charAt(i1)))
			{
				value=value+(Integer)e.getValue();
				System.out.println(value);
				i1++;
			}
				}
		}
		
		/*if(input1==1)
		{
			for(int i1=0;i1<ch.length;i1++)
			{
			if(s.equals(((String) mp).getKey())
			{
				value=value+mp.get(ch[i1]);
			}
		
			}
		}
		System.out.println(value);
		
*/
	}

}
