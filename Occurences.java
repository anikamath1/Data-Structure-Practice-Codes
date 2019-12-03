import java.util.*;
class Main 
{

	public static void main(String args[])
	{
		System.out.println("Enter the numbers");
		Scanner obj=new Scanner(System.in);
		String array[] = obj.nextLine().split(" ");
		Integer numbers[]=new Integer[array.length];
		for(int i=0;i<array.length;i++)
		{
			numbers[i]=new Integer(Integer.parseInt(array[i]));
		
		}
		List<Integer> list=Arrays.asList(numbers);
		Set<Integer> unique = new HashSet<Integer>(Arrays.asList(numbers));
		Data[] object=new Data[unique.size()];
		
		int i=0;
		
		for(int n: unique)
		{
			int count=Collections.frequency(list,new Integer(n));
			object[i++]=new Data(n,count);
		}
		System.out.println("The object array is ");
		
		Arrays.sort(object);

		for(Data temp: object)
		{
		   System.out.println(" The data is " + temp.data + "Frequency is " + temp.frequency );
		}
		int r=(int)list.toArray()[0];
	   System.out.println("This is another thing " + r);
	   
	   
	   
	   	
		
		
				

		
	
	
	}
	
	
	

}


class Data implements Comparable<Data>
{
	int data;
	int frequency;
	public Data(int data,int frequency)
	{
		this.data=data;
		this.frequency=frequency;
	}
	public static void toString(Object obj)
	{	
		Data object=(Data)obj;
		System.out.println(object.data + " is the data and frequency is "  + object.frequency);
	}
	
	public int compareTo(Data obj)
	{
		Data object=(Data)obj;
		return (-this.frequency+object.frequency);
	}
	

	
}
