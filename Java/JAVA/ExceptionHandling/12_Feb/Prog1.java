
class Biencaps {
	
	void products() {

		System.out.println("Bielearn");
	}
}


class TryDemo  {

	public static void main(String[] args) {

		System.out.println("Statement 1");

		try{
			
			System.out.println("Statement 2");
			System.out.println(10/0);
			System.out.println("Statement 3");
		}catch(ArithmeticException ae) {

			System.out.println("Statement 4");
		}

			
		System.out.println("Statement 5");
		
		
		try{
			
			System.out.println("Statement 6");
			Biencaps obj = new Biencaps();
			obj.products();
			System.out.println("Statement 7");
		}catch(ArithmeticException ae) {

			System.out.println("Statement 8");
		}

			
		System.out.println("Statement 9");
	}
}
