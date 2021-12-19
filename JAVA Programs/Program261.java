import java.util.*;

class Sorting
{
	public void SelectionSort(int Arr[])
	{
	}
}

class Program261
{
	public static void main(String arr[])
	{
		Scanner sobj = new Scanner (System.in);
		System.out.println("Enter size of array");
		int size = sobj.nextInt();

		int Arr[]=new int[size];

		System.out.println("Enter the element");                                 
		for(int i=0; i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
	

		Sorting obj = new Sorting();

		obj.SelectionSort(Arr);
		System.out.println("Data after function call");
		for(int i=0; i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}