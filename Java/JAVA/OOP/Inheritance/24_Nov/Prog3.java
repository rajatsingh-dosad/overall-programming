
class Parent {
	
	int x = 10;

	Parent() {
		
		System.out.println("Parent Constructor");
	}

	void m1() {

		System.out.println("Parent's : m1");
	}
}

class Child extends Parent {
	
	int x = 20;

	Child() {
		
		System.out.println("Child Constructor");
	}

	void m1() {
		
		System.out.println("Child's : m1");
		System.out.println("X = "+super.x);
		System.out.println("X = "+x);
		super.m1();
	}

	public static void main(String[] args) {
		
		Parent c = new Child();
		c.m1();
	}
}

