/////////////////////////////////////////////////////////////////////////////
//Write java program which accept N numbers from user and accept
//Range, Display all elements from that range
//Input : N : 6
//Start: 60
//End : 90
//Elements :85 66 3 76 93 88
//
//Output : 66 76 88
//Input : N : 6
//Start: 30
//End : 50
//Elements :85 66 3 76 93 88
/////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iNo;
	public int iNo2;

	public ArrayX(int iSize, int iValue1, int iValue2)
	{
		Arr=new int[iSize];
		iNo=iValue1;
		iNo2=iValue2;
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
	public Find(int iSize,int iValue1,int iValue2)
	{
		super(iSize,iValue1,iValue2);
	}

	public void FindIndex()
	{
		int iCnt=0;
		
		System.out.println("Elements of that range is :");
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			if(Arr[iCnt]>=iNo && Arr[iCnt]<=iNo2)
			{
				System.out.println(Arr[iCnt]);
			}	
		}
	} 
}

class A34Four
{
	public static void main(String arg[])
	{
		int iSize=0,iNo=0,iNo2=0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the No of Element :");
		iSize=sobj.nextInt();

		System.out.println("Enter the first No of Range :");
		iNo=sobj.nextInt();

		System.out.println("Enter the Second No of Range :");
		iNo2=sobj.nextInt();

		Find fobj=new Find(iSize,iNo,iNo2);

		fobj.Accept();
		fobj.FindIndex();


	}
}