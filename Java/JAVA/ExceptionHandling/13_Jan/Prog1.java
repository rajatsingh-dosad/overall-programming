
class ExceptionDemo {

	public static void main(String[] args) {
		
		System.out.println("In main");
		fun();
		System.out.println("In main - after fun");
	}

	static void fun() {

		System.out.println("In fun");
		gun();
		System.out.println("In fun - after gun");
	}

	static void gun() {

		System.out.println("In gun");
		System.out.println(10/0);
	}
}
