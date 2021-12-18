/////////////////////////////////////////////////////////////////////
//Write Java program which accept String from user and display
//below pattern.
//Input : Hello
//Output : 
// H e l l o
// H e l l o
// H e l l o
// H e l l o
//////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter String");
		str=sobj.nextLine();
	}
}

class Display extends StringX
{
	public void Pattern()
	{
		char Arr[]=str.toCharArray();

		for(int iCntR=1; iCntR<Arr.length; iCntR++)
		{
			for(int iCntC=0; iCntC<Arr.length; iCntC++)
			{
				System.out.print("\t"+Arr[iCntC]);
			}
			System.out.println();
		}
	}
}

class A38First
{
	public static void main(String arg[])
	{
		Display dobj=new Display();
		dobj.Accept();
		dobj.Pattern();

	}
}