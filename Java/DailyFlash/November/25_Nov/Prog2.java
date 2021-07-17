
class X {

	class Y {
		
		static int a = 10;
	       	static final int b = 20;

		void printValues() {

			System.out.println("A = "+a);
			System.out.println("B = "+b);
		}
	}

	public static void main(String[] args) {

		X obj1 = new X();

		Y obj2 = obj1.new Y();

		obj2.printValues();
	}
}

/*

	In normal Inner class , inner class(Y) is an instance of outer class(X) and it will only come in picture when we make object of 	it so how static will work in inner class.

	But static final is treated as a constant thats why it works properly .

*/
