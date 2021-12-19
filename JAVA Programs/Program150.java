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

class Program150
{
	public static void main(String arg[])
	{
		StringX sobj = new StringX();
		sobj.Accept();
		sobj.Display();
	}
}