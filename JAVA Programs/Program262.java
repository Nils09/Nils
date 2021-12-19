import java.util.*;

class Sorting
{
	public void InserstionSort(int Arr[])
	{
		int i=0, j=0, key=0;
		int size=Arr.length;

		for(i=1; i<size; i++)
		{
			key = Arr[i];
			for(j=i-1; (j>=0) && (Arr[j]>key); j--)
			{
				Arr[j+1]=Arr[j];
			}
			Arr[j+1]=key;
		}
	}
}

class Program262
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

		obj.InserstionSort(Arr);
		System.out.println("Data after function call");
		for(int i=0; i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}