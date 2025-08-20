import java.util.Scanner;
 
 public class CircleRadius {
	 public static void main (String [] args ) {  
		 
		 Scanner input = new Scanner(System.in);
		double radius;
		
		
		System.out.print( "Please put the radius:");
		radius = input.nextDouble ();
		
		double area = 3.14 * radius * radius;   
		
		
		System.out.print ("The Area of the circle is " + area);
		
		input.close();
		
		
	 }
 }