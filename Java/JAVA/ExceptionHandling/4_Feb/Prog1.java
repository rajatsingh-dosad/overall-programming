
class ExceptionDemo {

	public static void main(String[] args) {

		System.out.println("Before exception");
		
		try{
			System.out.println(10/0);
		}catch(ArithmeticException e) {
			
			System.out.println("Handling code");
		}

		System.out.println("After exception");
	}
}
