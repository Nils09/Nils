////////////////////////////////////////////////////////////////////////
//Write Java program which accept String from user and display
//below pattern.
//Input : Hello
//Output : 
//H * * * *
//H e * * *
//H e l * *
//H e l l *
////////////////////////////////////////////////////////////////////////

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

		for(int iCntR=0; iCntR<(Arr.length)-1; iCntR++)
		{	
			for(int iCntC=0; iCntC<Arr.length; iCntC++)
			{
				if(iCntR>=iCntC)
				{
				System.out.print("\t"+Arr[iCntC]);
				}
				else
				{
					System.out.print("\t*");
				}
			}
			System.out.println();
		}
	}
}

class A39First
{
	public static void main(String arg[])
	{
		Display dobj=new Display();
		dobj.Accept();
		dobj.Pattern();

	}
}