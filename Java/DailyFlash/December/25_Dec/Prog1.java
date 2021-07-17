
interface I {

	void num(int n);
}

class A implements I {

	public void num(int n) {

		System.out.println("The square of the number "+n+" is :"+n*n);
	}
}

class Test {

	public static void main(String[] args) {

		A a = new A();
		a.num(10);
	}
}
