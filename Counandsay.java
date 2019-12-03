import java.util.*;
class Count
{
	static void reset(int array[])
	{
		for(int counter=0;counter<array.length;counter++)
		{
			array[counter]=0;

		}
	}
	
	public static String generateNum(int array[],String str)
	{
		String ans="";

		for(int counter=0;counter<str.length();counter++)
		{
			
			int number=str.charAt(counter)-'0';
			int count=array[number];
			if(count>0)
			ans+=Integer.toString(count)+Integer.toString(number);
		}
		return ans;
	}
	
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		int array[]=new int[10];

		int n= obj.nextInt();
		int counter=1;
		String str="1";
		String order="";
		int count=0
		while(counter<=n)
		{
			while(i<str.length())
			{
				int num1=str.charAt(i)-'0';
				count=1;
				while(i<str.length())
				{
					int num2=str.charAt(i)-'0';
					if(num2!=num1)
						break;
					count++;	
					i++;
				}
				order+=Integer.toString(count)+Integer.toString(num1);		
			}
			System.out.println("The next generated number is " + order);
			str=order;
			order="";
			counter++;
		}
	}
	








}
