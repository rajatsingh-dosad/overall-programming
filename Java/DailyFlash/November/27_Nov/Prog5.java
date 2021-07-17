
class A {

	public static void main(String[] args) {

		System.out.println("In normal main");
		main(10);
	}

	public static void main(int a) {

		System.out.println("Integer main");
	
	}
}

/*
	Yes, it is possible to overload main method.
*/
