
//Overloading 

class Demo {

	void m1(char x) {

		System.out.println("In method m1 - char");
	}
	
	void m1(float y) {

		System.out.println("In method m1 - int");
	}

	public static void main(String[] args) {

		Demo d = new Demo();
		
		d.m1('A');
		d.m1(10);

	}
}

