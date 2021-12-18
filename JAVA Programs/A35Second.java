/////////////////////////////////////////////////////////////////////
// Write a program which 2 strings from user and check whether
// contents of two strings are equal or not.
//
// Input : Marvellous Infosystems
// Marvellous Infosystems
//
// Output : TRUE
//////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
	public String str1,str2;
	public int iNo;

	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the first String :");
		str1=sobj.nextLine();

		System.out.println("Enter the Second String :");
		str2=sobj.nextLine();

	}
}

class Display extends StringX
{
	public boolean Equals()
	{
	  
	  if(str1.equals(str2))
	  {
	  	return true;
	  }
	  else
	  {
	  	return false;
	  }
	}
}

class A35Second
{
	public static void main(String arg[])
	{
		boolean bRet=false;
		Display dobj=new Display();
		dobj.Accept();

		bRet=dobj.Equals();

		if(bRet==true)
		{
			System.out.println("String is Equels");
		}
		else
		{
			System.out.println("String Not is Equels");
		}
	}
}