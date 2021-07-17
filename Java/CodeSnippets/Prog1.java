
class Core2Web {

	void method1(long var1) {

		System.out.println("In method1");
	}

	void method1(float var2) {

		System.out.println("In method2");
	}

	public static void main(String[] args) {

		Core2Web c = new Core2Web();
		c.method1(long);
	}
}
