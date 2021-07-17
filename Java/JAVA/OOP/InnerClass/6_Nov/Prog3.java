
class Outer {

	class Inner {
		
		void m1() {

			System.out.println("In Inner class m1");
		}
	}

	public static void main(String[] args) {
		
		Outer o = new Outer();
		Inner i = o.new Inner();
		i.m1();
	}
}
