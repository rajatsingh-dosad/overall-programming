
class Father {

	static void m1() {

		System.out.println("Parent's class Static method");
	}
}

class Son extends Father {

	static void m1() {

		System.out.println("Child's class Static method");
	}

	public static void main(String[] args) {

		Father f = new Son();
		f.m1();
	}
}
