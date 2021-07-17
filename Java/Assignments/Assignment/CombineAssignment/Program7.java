
/*	Program 7: Write a Program that takes Three integers and prints the minimum
	number from them.
	
	I/p: 50 7 56 (Take hard coded value)
	O/p: minimum number from 50 7 and 56 is 7.
*/

class MinimumNo {

	public static void main(String[] args) {

		int num1= 50, num2=7, num3=56;

		int min = ((num1<num2) ? ((num1<num3) ? num1 : num3) : (num2<num3) ? num2 : num3);

		System.out.println("Minimum number from 50 7 and 56 is "+min);
	}
}
