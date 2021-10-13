
package LMS;
import java.sql.*;

public class ASTUD {
    String name;
    String department;
    String username;
    String password;
}
class ADSTU_DAO{
Connection con;
PreparedStatement pst;
void connection(){ 
    try {
        Class.forName("com.mysql.jdbc.Driver");
  
 String URL="jdbc:mysql://localhost:3306/lms";
     
  con = DriverManager.getConnection(URL,"root","");
  
  } catch (ClassNotFoundException | SQLException ex) {
    }
}   
int insert(ASTUD a){
connection();
int rs=0;   
try {
        pst=con.prepareStatement("INSERT INTO `student` (`name`, `department`, `username`, `password`) VALUES (?,?,?,?)");
   
       pst.setString(1, a.name);
       pst.setString(2, a.department);
       pst.setString(3, a.username);
       pst.setString(4, a.password);
      rs=pst.executeUpdate();
       
     
        } catch (SQLException ex) {
            System.out.println(ex);
    }
return rs;
}
}