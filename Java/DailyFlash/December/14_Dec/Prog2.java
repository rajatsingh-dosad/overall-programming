
class OverloadingWays {

	void add(int a, int b) {
		
		System.out.println("First way of overloading by changing number of arguments: ");
		System.out.println(a+b);
	}

	void add(int a, float b) {
		

		System.out.println("\nSecond way of overloading by changing the data type: ");
		System.out.println(a+b);
	}

	void add(float a, int b) {

		System.out.println("\nThird way of overloading by changing the sequence of data type: ");
		System.out.println(a+b);
	}

	public static void main(String[] args) {

		OverloadingWays obj = new OverloadingWays();

		obj.add(10,20);

		obj.add(10,20.5f);

		obj.add(20.5f,10);

	}
}

