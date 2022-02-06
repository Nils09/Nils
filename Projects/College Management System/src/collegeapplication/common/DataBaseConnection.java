///////////////////////////////////////////////////////////////////////////////////
// 
//  Author :                     Bachhav Nilesh Bapu
//
///////////////////////////////////////////////////////////////////////////////////

package collegeapplication.common;

import java.sql.*;


public class DataBaseConnection {
	
	static Connection con=null;
	public static Connection getConnection()
	{
		if(con!=null)
		{
			return con;
		}
		else
		{
			try
			{
				String url="jdbc:mysql://localhost:3308/collegedata";
				String uname="root";
				String password="";
				Class.forName("com.mysql.jdbc.Driver");
				con=DriverManager.getConnection(url,uname,password);
				return con;
			}
			catch(Exception exp)
			{
				exp.printStackTrace();
				return con;
			}
		}
	}
	public static boolean checkconnection() 
	{
		
		try
		{
			String url="jdbc:mysql://localhost:3308/collegedata";
			String uname="root";
			String password="";
			Class.forName("com.mysql.jdbc.Driver");
			con=DriverManager.getConnection(url,uname,password);
			return true;
		}
		catch(Exception exp)
		{
			exp.printStackTrace();
			return false;
		}
	}
	public static void  closeConnection() 
	{
		try {
			con.close();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
