

class EvenOdd {

	static int isEven(int number) {
		if((number & 1)==0)
			return 0;
		else
			return 1;
		
	}

	public static void main(String[] args) {
		if(isEven(100)==0)
			System.out.println("Even");
		else
			System.out.println("Odd");
	}
}

