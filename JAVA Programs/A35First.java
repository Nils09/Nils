
////////////////////////////////////////////////////////////////////////////////////
//Write a java program which accepts 2 strings from user and
//concat N characters of second string after first string.Value of N
//should be accepted from user.
//Note : If third parameter is greater than the size of second string
//then concat whole string after first string.
//
//Input : Marvellous Infosystems
//Logic Building
//5
//Output : Marvellous Infosystems Logic
/////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
	public String str1,str2,str3;
	public int iNo;
	public char Arr2[];

	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the first String :");
		str1=sobj.nextLine();

		System.out.println("Enter the Second String :");
		str2=sobj.nextLine();

		System.out.println("Enter the How many letter print");
		iNo=sobj.nextInt();
	}
}

class Display extends StringX
{
	public void Concat()
	{
	  str3=str1.concat(" ").concat(str2);
	  System.out.println(str3);

	  char Arr[]=str2.toCharArray();

	  for(int iCnt=0; iCnt<iNo; iCnt++)
	  {
	  	Arr2[iCnt]=Arr[iCnt];
	  }

	  for(int iCnt=0; iCnt<Arr2.length; iCnt++)
	  {
	  	System.out.println(Arr2[iCnt]);
	  }

	  str2=Arr2.toString();


	  
	}
}

class A35First
{
	public static void main(String arg[])
	{
		Display dobj=new Display();
		dobj.Accept();
		dobj.Concat();
	}
}