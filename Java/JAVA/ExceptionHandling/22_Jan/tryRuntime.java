
class TryRuntimeDemo {
	
	int x = 10;

	public static void main(String[] args) {
	
		try {
			
			TryRuntimeDemo obj = null;
			System.out.println(obj.x);

		}catch(NullPointerException e) {

			System.out.println("Exception Handled");
		}

		System.out.println("After Try-Catch");
	}
}
