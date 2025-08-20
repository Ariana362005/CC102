import java.util.Scanner;
public class ActFive {
	public static void main (String [] args ){
		Scanner input = new Scanner(System.in);
		
		System.out.print ("Age: ");
		int age = input.nextInt ();
		input.nextLine();
		
		System.out.print ("Your Citizenship Status (C for citizen, F for Foreigner):");
		String CStatus = input.nextLine ();
		
	if ( age>= 18 && CStatus.equalsIgnoreCase("C")){
		System.out.print ("You are eligible to Vote!");
	} else {
		System.out.print ("You are not eligible to Vote!");
}
	}	
}