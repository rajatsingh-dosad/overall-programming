
class Demo {

	void m1(String s1) {

		System.out.println("String Method");
	}
	
	void m1(StringBuffer s2) {

		System.out.println("StringBuffer Method");
	}

}

class Test {

	public static void main(String[] args) {

		Demo obj = new Demo();

		obj.m1("String");

		obj.m1(new StringBuffer("Shashi"));

	}
}
