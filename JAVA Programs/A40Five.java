//////////////////////////////////////////////////////////////////////
//Write a java program which accept number of rows and number of
//columns from user and display below pattern.
//Input : iRow = 4 iCol = 4
//Output : 1 2 3 4 5
//         1 2     5
//         1   3   5 
//         1 2 3 4 5
////////////////////////////////////////////////////

import java.util.*;

class Display
{
	public void Pattern(int iValue1,int iValue2)
	{
		int iCntR=0,iCntC=0,iNo=1;
		
		for(iCntR=1; iCntR<=iValue1; iCntR++)
		{
			int iNo2=1;
			System.out.println();
			for(iCntC=1; iCntC<=iValue2; iCntC++)
			{
				
					if(iNo==iCntC)
					{
						System.out.print("\t"+iNo2);
					}
					else if(iCntR==1 || iCntC==1)
					{
						System.out.print("\t"+iNo2);
					}
					else if(iCntR==iValue1 || iCntC==iValue2)
					{
						System.out.print("\t"+iNo2);
					}
					else
					{
						System.out.print("\t");
					}
					iNo2++;	
			}
			iNo++;		
		}
	}
}

class A40Five
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