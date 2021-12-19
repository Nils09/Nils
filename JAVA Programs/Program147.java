import java.util.*;
import MarvellousNumbers.ArrayX;

class Addition extends ArrayX
	{
		public Addition(int iValue)
		{
			super(iValue);
		}
		public float Average()
		{
			int iSum=0,iCnt=0;

			for(iCnt=0; iCnt<Arr.length; iCnt++)
			{
				iSum=iSum+Arr[iCnt];
			}
			return (iSum/Arr.length);
		}
	}

class Program147
{
	public static void main(String arg[])
	{
		Scanner sobj= new Scanner(System.in);

		int iLength=0; 
		float fRet=0.0f;

		System.out.println("Enter the no of element");
		iLength=sobj.nextInt();

		Addition aobj = new Addition(iLength);
		aobj.Accept();
		aobj.Display();
		fRet=aobj.Average();
		System.out.println("Average is :"+fRet);
	}
}