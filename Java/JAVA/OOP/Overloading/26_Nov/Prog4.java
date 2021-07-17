
class Demo {

	void m1(Object s1) {

		System.out.println("Object Method");
	}
	
	void m1(String s2) {

		System.out.println("String Method");
	}

}

class Test {

	public static void main(String[] args) {

		Demo obj = new Demo();

		obj.m1("String");

		obj.m1(new Object());

		obj.m1(null);

	}
}
