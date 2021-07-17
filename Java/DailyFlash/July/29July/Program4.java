

class Divisible {

	static boolean isDivisible(int dividend,int divisor) {

		if((dividend & ((1<<divisor)-1))==0)
			return true;
		else
			return false;


	}

	public static void main(String[] args) {

		int a=8;
		int b=2;
		if(isDivisible(a,b))
			System.out.println("Yes");
		else
			System.out.println("No");
	}

}


