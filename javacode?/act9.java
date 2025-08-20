import java.util.Scanner;
public class act9 {
	public static void main (String[]args){
		Scanner input = new Scanner (System.in);
		
		System.out.print("Input Integer: ");
		int num = input.nextInt();
		
		int shiftLeft = num << 2;
		int shiftRight = num >> 2;
		
		
		System.out.println ("Your integer is: " + num);
		System.out.println ("After shifting left: " + shiftLeft);
		System.out.println ("After shifting right: " + shiftRight);
		
	}
}
		