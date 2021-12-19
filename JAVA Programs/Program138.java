import java.util.*;
class Program138
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo1=0, iNo2=0, iAns=0;

		System.out.println("Enter The First No");
		iNo1= sobj.nextInt();

		System.out.println("Enter the second no");
		iNo2= sobj.nextInt();

		iAns=iNo1+iNo2;

		System.out.println("Addition is :"+iAns);
	}
}