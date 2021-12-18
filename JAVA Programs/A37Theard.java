///////////////////////////////////////////////////////////////////////
//Write Java program which accept number of rows and number of
//columns from user and display below pattern.
//Input : iRow = 3 iCol = 5
//Output : 5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1
///////////////////////////////////////////////////////////////////////

import java.util.*;

class Display
{
	public void Pattern(int iValue1,int iValue2)
	{
		int iCntR=0,iCntC=0;
		
		for(iCntR=1; iCntR<=iValue1; iCntR++)
		{
			int iNo=iValue2;
			System.out.println();
			for(iCntC=1; iCntC<=iValue2; iCntC++)
			{
					
					System.out.print("\t"+iNo);
					iNo--;
				
			}
			
		}
	}
}

class A37Theard
{
	public static void main (String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the no of Rows");
		int iRow=sobj.nextInt();
		System.out.println("Enter the no of Coloum");
		int iCol=sobj.nextInt();

		Display dobj= new Display();

		dobj.Pattern(iRow,iCol);


	}
}