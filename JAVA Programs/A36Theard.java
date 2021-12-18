///////////////////////////////////////////////////////////////////////////
// Write Java program which accept number of rows and number of columns
// from user and display below pattern.
// Input : iRow = 3 iCol = 5
// Output : A A A A A
//          B B B B B
//          C C C C C
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Display
{
	public void Pattern(int iValue1,int iValue2)
	{
		int iCntR=0,iCntC=0;
		char ch='A',ch2='a';
		for(iCntR=1; iCntR<=iValue1; iCntR++)
		{
			System.out.println();
			for(iCntC=1; iCntC<=iValue2; iCntC++)
			{
				
					System.out.print("\t"+ch);
				
			}
			ch++;
		}
	}
}

class A36Theard
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