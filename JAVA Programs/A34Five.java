///////////////////////////////////////////////////////////////////////////////
//Write java program which accept N numbers from user and return
//product of all odd elements.
//Input : N : 6
//Elements :15 66 3 70 10 88
//Output : 45
//
//Input : N : 6
//Elements :44 66 72 70 10 88
//Output : 0
////////////////////////////////////////////////////////////////////////////////
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
		int iCnt=0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements:");

		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}

	}
}

class Find extends ArrayX
{
	public Find(int iSize)
	{
		super(iSize);
	}

	public int FindIndex()
	{
		int iCnt=0,iProduct=1;
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			if(Arr[iCnt]%2!=0)
			{
				iProduct=iProduct*Arr[iCnt];			
			}
			
		}
		return iProduct;
	} 
}

class A34Five
{
	public static void main(String arg[])
	{
		int iSize=0,iNo=0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the No of Element :");
		iSize=sobj.nextInt();

		Find fobj=new Find(iSize);

		int iRet;

		fobj.Accept();
		iRet=fobj.FindIndex();

		System.out.println("Product of odd No :"+iRet);

	}
}

