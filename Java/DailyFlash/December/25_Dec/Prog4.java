
interface Add {

	 void m1(int a, int b);
}

interface  Sub extends Add {

	void  m2(int a, int b);
}

class Operation implements Sub {

	public void  m1(int a, int b) {

		System.out.println("Addition is : "+(a+b));
	}

	public void m2(int a, int b) {

		System.out.println("Subtraction is : "+(a-b));
		
	}
}

class Test {

	public static void main(String[] args) {

		Operation obj = new Operation();
		obj.m1(10,20);
		obj.m2(50,10);
	}
}

