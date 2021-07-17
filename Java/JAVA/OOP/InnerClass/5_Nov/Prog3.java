
class Outer {
	
	int x = 10;
	class Inner {

		void xyz() {

			System.out.println("In Inner class method");
		}
	}
}

class InnerDemo {

	public static void main(String[] args) {

		System.out.println(new Outer().x);

		Outer.Inner i = new Outer().new Inner();
		i.xyz();
	}
}
