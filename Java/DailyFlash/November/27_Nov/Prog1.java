
class Calculator {

	void addition(int a , int b) {

		System.out.println("Addition of two operands is "+(a+b));
	}

	void addition(int a, int b, int c) {

		System.out.println("Addition of three operands is "+(a+b+c));
	}

	public static void main(String[] args) {

		Calculator c = new Calculator();

		c.addition(10,20);

		c.addition(10,20,30);
	}
}


