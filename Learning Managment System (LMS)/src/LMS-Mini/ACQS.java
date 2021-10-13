
package LMS;
import java.sql.*;

public class ACQS {
    int id;
    String question,answer,a,b,c,d;
}
class CATQ_dao{
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
 int insert(ACQS a){
 connection();    
 int rs=0;
 try{
  pst=con.prepareStatement("INSERT INTO `category`(`id`, `question`, `answer`, `a`, `b`, `c`, `d`) VALUES (?,?,?,?,?,?,?)");
       pst.setInt(1, a.id);
       pst.setString(2, a.question);
       pst.setString(3, a.answer);
       pst.setString(4, a.a);
       pst.setString(5, a.b);
       pst.setString(6, a.c);
       pst.setString(7, a.d);
       rs=pst.executeUpdate();
 }catch(SQLException ex){System.out.println(ex);}
 return rs;
 }   
int delete(ACQS a){
connection();    
int rs=0;
try{
pst=con.prepareStatement("DELETE FROM category WHERE id="+a.id);
   pst.executeUpdate();
}catch(SQLException ex){}
return 0;
}
ResultSet select(int a){
    connection();
    ResultSet rs=null;
    try{
 pst=con.prepareStatement("SELECT `id`, `question`, `answer`, `a`, `b`, `c`, `d` FROM `category` WHERE id="+a);
            rs=pst.executeQuery();

}catch(SQLException ex){}
    
    return rs;

}
}