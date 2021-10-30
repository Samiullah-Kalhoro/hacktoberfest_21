/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraylistpractice;
import java.util.ArrayList;

/**
 *
 * @author HP
 */
public class ArrayListPractice {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        ArrayList friends = new ArrayList();
        friends.add("Wasay");
        friends.add("Anousha");
        friends.add("Mehran");
        friends.add("Niaz");
        friends.add("Moiz");
        System.out.println(friends.get(1));
        System.out.println(friends);
        
        System.out.println(friends.contains("Wasay"));
        
        
    }
    
}
