/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package primenumbercheck;

/**
 *
 * @author HP
 * 
 */
import java.util.Scanner;
public class PrimeNumberCheck {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        long n, f;
        
        boolean isPrime = true;
        Scanner obj = new Scanner(System.in);
        n = obj.nextInt();
        long j;
        for(j=2; j<n; j++){
        if(n%j==0)
            isPrime = false;
    }
        if(isPrime==true){
            System.out.println(n + " is a prime number.");}
        else {
            System.out.println(n + " is not a prime number."); }
    }
    
    
}
