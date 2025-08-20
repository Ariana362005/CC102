 import java.util.Scanner;
 
 public class Act7{
	 public static void main (String[]args) {
		 
		 Scanner input = new Scanner (System.in);
		 
		 System.out.print ("Input first integer [numA]: ");
         int a = input.nextInt();
		 System.out.print ("Input second integer [numB]: ");
		 int b  = input.nextInt();
		 
		 int and = a & b;
		 int or = a | b;
		 int xor = a ^ b;
		 
		 System.out.println("a&b = "+ and);
		 System.out.println("a|b = "+ or);
		 System.out.println("a^b = "+ xor);
		 
	 }
 }