
class WithoutTryCatch {

	public static void main(String[] args) {
		
		System.out.println("Before Exception occurs");

		WithoutTryCatch obj = null;

		try {

			obj.fun();
		}catch(Exception ob) {

			System.out.println(ob);
		}
		
		System.out.println("After Exception occurs");	
	}

	void fun() {

		System.out.println("In fun");
	}
}
