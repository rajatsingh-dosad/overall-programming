

class IfLadderDemo {

	public static void main(String[] args) {

		int x= -100;

		if(x >=0 && x<=10 ) {

			System.out.println("Number in between 0 and 10");
		}
		
		else if(x >=10 && x<=20 ) {

			System.out.println("Number in between 10 and 20");
		}
		else if(x >=20 && x<=30 ) {

			System.out.println("Number in between 20 and 30");
		}
		else if(x>=30) {

			System.out.println("Number greater than 30");
		}
		else {

			System.out.println("Plz enter positive number.");
		}
	}
}
