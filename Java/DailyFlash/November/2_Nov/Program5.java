class Program5{

	 int x,y;

	Program5(int a, int b){

		System.out.println("In parameterised constructor");

		x = a;

		y = b;

		display();

		
	}

	void display() {

		System.out.println("In method");
		System.out.println("x = " + x);
		System.out.println("y = " + y);

	}

}

class Prg5{

	public static void main(String[] args){

		Program5 obj1 = new Program5(10,20);
		
	}


}

