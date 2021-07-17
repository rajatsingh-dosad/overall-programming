
class Outer {
	
	void m1() {

		System.out.println("Outer m1");
	}

	interface Inner {
		
		void m2();
	}
}

class Xyz extends Outer implements Outer.Inner  {

	public void m1() {
		
		System.out.println("In m1 method");
	}
	
	public void m2() {

		System.out.println("In m2 method");
	}
}

class Test {

	public static void main(String[] args) {
		
		Outer out = new Xyz();
		out.m1();
		
		Outer.Inner in = new Xyz();
		in.m2();

		Xyz obj = new Xyz();
		obj.m1();
		obj.m2();
	}
}
