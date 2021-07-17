
class ThrowsDemo {

	public static void main(String[] args) {

		try{
			System.out.println(10/0);

		}catch(ArithmeticException | NullPointerException npe) {

			System.out.println("Exception caught");
		}
	}
}
