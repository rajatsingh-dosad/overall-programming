
/*	Program 18: Write a program to accept some number and print them in reverse order
	Input: 420
	Output: 024
*/

class ReverseNo {

	public static void main(String[] args) {

		int num=420;

		while(num!=0) {

			int rem=num%10;
			System.out.print(rem);
			num=num/10;
		}
		System.out.println();
	}
}
