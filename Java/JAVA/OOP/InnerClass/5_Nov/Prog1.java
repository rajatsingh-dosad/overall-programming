
class Outer {
	
	int x = 10;
	class Inner {

		void xyz() {

			System.out.println("In Inner class method");
		}
	}

	public static void main(String[] args) {
		
		System.out.println(new Outer().x);
		new Outer().new Inner().xyz();
	}
}
