
/*	Program 20: Write a Program in Java, Print the following pattern using for loop.
	
	A B C D
	a b c d
	E F G H
	e f g h

*/


class Pattern2 {

	public static void main(String[] args) {

		char ch1='A';
		char ch2='a';

		for(int i=1; i<=4;i++) {

			for(int j=1; j<=4; j++) {

				if(i==1 || i==3) {

					System.out.print(ch1+" ");
					ch1++;
				}
				else {
					System.out.print(ch2+" ");
					ch2++;
				}
			}
			System.out.println();
		}
	}
}


