public class Reverse
{
	public static Node reverse(Node head)
	{	
		Node prev=null;
		Node curr=head;
		Node nextNode=null;
		while(curr!=null)
		{	
			System.out.println("Hello worlld");
			nextNode = curr.next;
			curr.next = prev;
			prev = curr;
			curr = nextNode;			
		}
		print(prev);
		return curr;
	}

	public static void print(Node head)
	{
		Node temp=head;
		while(temp!=null)
		{
			//temp.next=new Node((i+1)*10);
			System.out.println(temp.data);
			temp=temp.next;
		}
	}

	public static void main(String args[])
	{
		Node head=new Node(0);
		Node temp=head;
		for(int i=0;i<10;i++)
		{
			temp.next=new Node((i+1)*10);
			temp=temp.next;
		}
		print(head);
		System.out.println("-----------------------------------");
		reverse(head);
	}
}

class Node
{
	Node(int data)
	{
		this.data=data;
	}
	int data;
	Node next;
}