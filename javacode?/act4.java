import java.util.Scanner;

public class Triangle {
	public static void main (String [] args) {
		Scanner input = new Scanner(System.in);
		
		int height;
		int base;
		
		System.out.print ("Input base:");
	    base = input.nextInt ();
		System.out.print ("Input Height:");
		height = input.nextInt ();
		
		double triangle = 0.5 * base * height;
		
		System.out.print ("The area of the triangle is: " + triangle);
		
	}
}