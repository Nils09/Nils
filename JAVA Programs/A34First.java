//////////////////////////////////////////////////////////////////////////////
//Write java program which accept N numbers from user and accept
//one another number as NO , check whether NO is present or not.
//Input : N : 6
//NO: 66
//Elements :85 66 3 66 93 88
//
//Output : TRUE
//Input : N : 6
//NO: 12
//Elements :85 11 3 15 11 111
//
//Output : FALSE
///////////////////////////////////////////////////////////////////////////////

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

	public boolean FindNo()
	{
		int iCnt=0;
		boolean bRet=false;

		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			if(Arr[iCnt]==iNo)
			{
				bRet=true;
			}
		}

		return bRet;

	} 
}

class A34First
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

		boolean bRet;

		fobj.Accept();
		bRet=fobj.FindNo();

		if(bRet==true)
		{
			System.out.println("No is Present ");
		}
		else
		{
			System.out.println("No is Present ");
		}


	}
}

