import java.util.*;

class Marvellus
{
	public boolean CheckArmstrong(int iNo)
	{
		int iTemp=0, iDigCnt=0, iDigit=0, iPower =1;
		int iSum=0,iCnt=0;

		if(iNo<0)
		{
			iNo = -iNo;
		}
		iTemp=iNo;

		while(iTemp != 0)
		{
			iDigCnt++;
			iTemp=iTemp/10;
		}

		iTemp=iNo;

		while(iTemp != 0)
		{
			iDigit=iTemp%10;

			for(iCnt=1; iCnt<=iDigCnt; iCnt++)
			{
				iPower=iPower*iDigit;
			}
			iSum=iSum+iPower;
			iPower=1;
			iTemp=iTemp/10;

		}
		if(iSum==iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Program142
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue=0;
		boolean bRet=false;

		System.out.println("Enter the no");

		iValue= sobj.nextInt();

		Marvellus mobj=new Marvellus();

		bRet=mobj.CheckArmstrong(iValue);

		if(bRet==true)
		{
			System.out.println("IT IS Armstrong NUMBER");
		}
		else
		{
			System.out.println("IT IS NOT Armstrong NUMBER");
		}

	}
}