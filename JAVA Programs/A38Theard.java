///////////////////////////////////////////////////////////////////
//Write Java program which accept String from user and display
//below pattern.
//Input : Hello
//Output :
//H
//H e
//H e l
//H e l l
//H e l l o
///////////////////////////////////////////////////////////////////
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
		int iNo=0;
		for(int iCntR=0; iCntR<=Arr.length; iCntR++)
		{

			for(int iCntC=0; iCntC<iNo; iCntC++)
			{
				System.out.print("\t"+Arr[iCntC]);
			}
			iNo++;
			System.out.println();
		}
	}
}

class A38Theard
{
	public static void main(String arg[])
	{
		Display dobj=new Display();
		dobj.Accept();
		dobj.Pattern();

	}
}