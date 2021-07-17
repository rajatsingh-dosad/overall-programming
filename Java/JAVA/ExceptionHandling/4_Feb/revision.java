
class Prog1 {

	public static void main(String[] args) {

		System.out.println("In statement 1");
		try {

			System.out.println("In statement 3");
			System.out.println(10/0);
		}catch(Exception e) {

			
			System.out.println("In statement 4");
		}


			System.out.println("In statement 5");

	}
}
