

class EvenOdd {



	int evenOdd(int a) {
		
				
		if(a%2==0) {
			System.out.println(a +" is even number");
		}
		else {
			System.out.println(a+" is odd number");
		}
		return 0;
	}

	public static void main(String[] args) {

		EvenOdd check=new EvenOdd();

		check.evenOdd(8);
		check.evenOdd(5);
	}
}
