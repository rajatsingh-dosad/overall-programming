
class NestedDemo {
	
	public static void main(String[] args) {

		try{
			
			System.out.println("In outer try");

			try{

				System.out.println("Inside Inner try");
				System.out.println(10/0);

			}catch(ArithmeticException ae) {
				
				System.out.println("Insider Inner catch(Try)");
			}	
		}catch(NullPointerException npe) {
			
			System.out.println("In outer catch");
			
			try{

				System.out.println("Inside outer catch");

			}catch(ArithmeticException ae) {
				
				System.out.println("Insider Inner catch(Catch)");
			}	


		}finally {

			System.out.println("In finally");
			try{

				System.out.println("Inside Inner finally(Try)");

			}catch(ArithmeticException ae) {
				
				System.out.println("Insider Inner catch(Catch)");
			}	
		}
	}

}

