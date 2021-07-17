
class Demo {

	void test(Integer i) {

		System.out.println("test(Integer)");
	}

	void test(String name) {

		System.out.println("test(String)");
	}

	public static void main(String[] args) {

		Demo obj = new Demo();
		obj.test(null);
	}
}

/*
 	Here it is a case of ambiguity as both the methods matches with 'obj.test(null)' so we don't get the output

	Integer i = null;

		or

	String name = null;

	Both are correct.

*/
