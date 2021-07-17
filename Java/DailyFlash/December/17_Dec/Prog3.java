
class Parent {

	protected void display() {

		System.out.println("In parent's Display Method");
	}
}

class Child extends Parent {

	public void display() {

		System.out.println("In child's Display Method");
	}

	public static void main(String[] args) {

		Parent p = new Child();
		p.display();

	}
}
