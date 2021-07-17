
/*	Program 19: Write a Program in Java, Print the following pattern using for loop.
	A B C D
	E F G H
	I J K L
	M N O P
*/

class Pattern1 {

	public static void main(String[] args) {

		char ch='A';

		for(int i=1; i<=4; i++) {

			for(int j=1; j<=4;j++) {

				System.out.print(ch+" ");
				ch++;
			}
			System.out.println();
		}
	}
}
