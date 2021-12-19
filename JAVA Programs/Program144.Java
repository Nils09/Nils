import java.util.*;

class Addition
{
	public int Add(int Brr[])
	{
		int iSum=0, iCnt=0;

		for(iCnt=0; iCnt<Brr.length; iCnt++)
		{
			iSum=iSum+Brr[iCnt];
		}
		return iSum;
	}

	public int max(int Brr[])
	{
		int iMax=0,iCnt=0;

		for(iCnt=0; iCnt<Brr.length; iCnt++)
		{
			if(iMax<Brr[iCnt])
			{
				iMax=Brr[iCnt];
			}
		}
		return iMax;
	}
}

class Program144
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize=0,iCnt=0,iRet=0;

		System.out.println("Enter Number of Element");
		iSize=sobj.nextInt();

		int Arr[]=new int[iSize];

		System.out.println("Enter the numbers");
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}

		Addition aobj = new Addition();
		Addition aobj2= new Addition();
		iRet=aobj.Add(Arr);
		System.out.println("Addition is :"+iRet);
		iRet=aobj.max(Arr);
		System.out.println("Max is :"+iRet);
		
	}
}