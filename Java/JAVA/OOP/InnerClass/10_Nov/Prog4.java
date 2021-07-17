
class Parent {

	Parent() {

		System.out.println("Parent Constructor");
	}
}

class Child extends Parent {
	
	Child() {

		System.out.println("Child Constructor");
	}

	public static void main(String[] args) {


		Parent p1 = new Child();

		
	}
}

	
