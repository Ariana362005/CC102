import java.util.Scanner;
public class act8 {
	public static void main (String[]args){
		Scanner input = new Scanner (System.in);
		
		System.out.print("Input an integer: ");
		int num = input.nextInt();
		
		
		String binary = Integer.toBinaryString(num);
		System.out.println ( "Binary form of " + num + " is " + binary);
		
	  int onesComplement = ~num;
	  String binaryComplement = Integer.toBinaryString(onesComplement);
	  System.out.println("One's Complement: " + onesComplement + " (binary: " + binaryComplement + ")");
	
		
	}
}