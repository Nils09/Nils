///////////////////////////////////////////////////////////////////////////////////////
//Write java program which accept N numbers from user and accept
//one another number as NO , return index of last occurrence of that NO.
//Input : N : 6
//NO: 66
//Elements :85 66 3 66 93 88
//
//Output : 3
//Input : N : 6
//NO: 93
//Elements :85 66 3 66 93 88
//
//Output : 4
//Input : N : 6
//NO: 12
//Elements :85 11 3 15 11 111
//
//Output : -1
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iNo;

	public ArrayX(int iSize, int iValue)
	{
		Arr=new int[iSize];
		iNo=iValue;
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
	public Find(int iSize,int iValue)
	{
		super(iSize,iValue);
	}

	public int FindIndex()
	{
		int iCnt=0;
		iCnt=Arr.length-1;
		while(iCnt!=0)
		{
			if(Arr[iCnt]==iNo)
			{
				return iCnt;
			}
			iCnt--;
		}

		return -1;

	} 
}

class A34Theard
{
	public static void main(String arg[])
	{
		int iSize=0,iNo=0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the No of Element :");
		iSize=sobj.nextInt();

		System.out.println("Enter the No of Find :");
		iNo=sobj.nextInt();

		Find fobj=new Find(iSize,iNo);

		int iRet;

		fobj.Accept();
		iRet=fobj.FindIndex();

		System.out.println("index of Last occurrence is :"+iRet);

		


	}
}

