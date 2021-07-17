
class Arithmetic {
	
	int sum = 0;
	int add(int a, int b) {
		
		sum = a + b;
		return sum;
	}
}

class Adder extends Arithmetic {

	Adder() {

		System.out.println("Super class of Adder class is Arithmetic.");
	}
}

class Demo {

	public static void main(String[] args) {

		Adder obj = new Adder();
		int sumVar = obj.add(10,20);
		System.out.println(sumVar);
	}
}


