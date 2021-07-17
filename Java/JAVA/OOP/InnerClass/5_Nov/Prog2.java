
class Outer {
	
	int x = 10;
	class Inner {

		void xyz() {

			System.out.println("In Inner class method");
		}
	}
	
	void outerXyz() {

		System.out.println(x);
		new Inner().xyz();
	}

	public static void main(String[] args) {
			
		new Outer().outerXyz();
	}
}
