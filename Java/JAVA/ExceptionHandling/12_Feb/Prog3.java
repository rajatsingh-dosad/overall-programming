
class CatchSequence {

	public static void main(String[] args) {

		try{

			System.out.println(10/0);
		}catch(ArithmeticException ae) {

			System.out.println("Arithmetic catched");
		}catch(Exception ae) {

			System.out.println("Again Arithmetic catched");
		}
	}
}
