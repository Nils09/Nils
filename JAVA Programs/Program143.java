import java.util.*;

class Program143
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize=0,iCnt=0;

		System.out.println("Enter Number of Element");
		iSize=sobj.nextInt();

		int Arr[]=new int[iSize];

		System.out.println("Enter the numbers");
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}

		System.out.println("Enter the elment are");
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}