import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj =new Scanner(System.in);
		System.out.println("Enter the String");
		str=sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("String is :"+str);
	}
}

class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();
		int iCnt=0,i=0;
		for(i=0; i<Arr.length; i++)
		{
			if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
} 


class Program151
{
	public static void main(String arg[])
	{
		Marvellous mobj=new Marvellous();
		int iRet=0;
		mobj.Accept();
		mobj.Display();
		iRet=mobj.CountVowels();
		System.out.println();

		System.out.println("No of Vowels is :"+iRet);
	}
}