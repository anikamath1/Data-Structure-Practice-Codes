import java.util.*;
class Main 
{

	public static void main(String args[])
	{
		Map<Integer,String> map=new HashMap<>();
		map.put(1,"Anirudh");
		map.put(2,"Mihir");
		Set<Integer> set=map.keySet();
		for(int n:set)
		{
			System.out.println("The key is " + n);		
		}
		Collection<String> list=map.values();
		Iterator itr=list.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		map.put(2,"Rahul");
		for(Map.Entry<Integer,String> entry : map.entrySet())
		{
			System.out.println("Thek key is " + entry.getKey()+"The value is " + entry.getValue());
		
		}
		
	
	}
	
	
	

}


