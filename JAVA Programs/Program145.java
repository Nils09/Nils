import java.util.*;

class ArrayX
{
	public int Arr[];
	public ArrayX(int iSize)
	{
		Arr=new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj= new Scanner(System.in);
		System.out.println("Enter Element :");

		int iCnt=0;
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt=0;
		System.out.println("Element is");
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}

	}
	
}
class Addition extends ArrayX
	{
		public Addition(int iValue)
		{
			super(iValue);
		}
		public int Add()
		{
			int iSum=0,iCnt=0;

			for(iCnt=0; iCnt<Arr.length; iCnt++)
			{
				iSum=iSum+Arr[iCnt];
			}
			return iSum;
		}
	}

class Program145
{
	public static void main(String arg[])
	{
		Scanner sobj= new Scanner(System.in);

		int iLength=0, iRet=0;

		System.out.println("Enter the no of element");
		iLength=sobj.nextInt();

		Addition aobj = new Addition(iLength);
		aobj.Accept();
		aobj.Display();
		iRet=aobj.Add();
		System.out.println("Addition is :"+iRet);
	}
}