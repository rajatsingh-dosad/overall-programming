
class A {

	void m1() {

		System.out.println("Base class");
	}
}

class B extends A {

	void m1() {

		System.out.println("Derived class");
	}

	public static void main(String[] args) {

		B obj = new B();

		obj.m1();

	}
}

/*

	It is the program of overriding so it is run time polymorphism so it's RHS part is considered 
	and hence we can't call method of base class from object of derived class.
*/
