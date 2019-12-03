import java.util.*;
class A
{
	static int difference(int[] sorted,int[] unsorted)
	{
		int[] difference=new int[sorted.length];
		for(int i=0;i<sorted.length;i++)
		{
			difference[i]=(int)(Math.abs(Arrays.asList(unsorted).indexOf(sorted[i])-i));
		}
	}


	public static void main(String args[])
	{
		System.out.println("Enter array of numbers");
		Scanner obj=new Scanner(System.in);
		String[] str=obj.nextLine().split(" ");
		int[] unsorted=new int[str.length];
		int[] sorted=new int[str.length];
		for(int i=0;i<str.length;i++)
		{
			sorted[i]=Integer.parseInt(str[i]);
			unsorted[i]=Integer.parseInt(str[i]);
		}
		Arrays.sort(sorted);
		
			
	
	
	
	

	
	
	}


}
