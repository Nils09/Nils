/////////////////////////////////////////////////////////////////////////////////////////////////////
//Write Java program which accept number of rows and number of
//columns from user and display below pattern.
//Input : iRow = 4 iCol = 3
//Output : * * *
//         * * *
//         * * *
//         * * *
////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Display
{
	public void Pattern(int iValue1,int iValue2)
	{
		int iCntR=0,iCntC=0;
		for(iCntR=1; iCntR<=iValue1; iCntR++)
		{

			System.out.println();
			for(iCntC=1; iCntC<=iValue2; iCntC++)
			{
					
					System.out.print("*\t");
					
				
			}
			
		}
	}
}

class A37Five
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