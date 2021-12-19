import java.util.*;

class Marvellus
{
	public boolean CheckPrime(int iNo)
	{
		int iCnt=0;
		boolean bFlag=true;

		if(iNo==1 || iNo==2)
		{
			return bFlag;
		}

		for(iCnt=2; iCnt<=iNo/2; iCnt++)
		{
			if((iNo % iCnt)==0)
			{
				bFlag=false;
				break;
			}
		}
		return bFlag;
	}
}

class Program141
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue=0;
		boolean bRet=false;

		System.out.println("Enter the no");

		iValue= sobj.nextInt();

		Marvellus mobj=new Marvellus();

		bRet=mobj.CheckPrime(iValue);

		if(bRet==true)
		{
			System.out.println("IT IS PRIME NUMBER");
		}
		else
		{
			System.out.println("IT IS NOT PRIME NUMBER");
		}

	}
}