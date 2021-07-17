
class Cricket {

	void match(int number) {

		System.out.println("Int - 1");
	}

	void match(char number) {

		System.out.println("char - 2");
	}

	void match(float number) {

		System.out.println("float - 3");
	}

	void match(double number) {

		System.out.println("double - 4");
	}

	public static void main(String[] args) {

		
		Cricket c = new Cricket();
		c.match(1);
		c.match('a');
		c.match(20.3f);
		c.match(23.3);
	}
}



