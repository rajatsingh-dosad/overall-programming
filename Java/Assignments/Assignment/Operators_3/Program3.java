

class Bitwise1 {

	public static void main(String[] args) {

		int num1 = 10;
		int num2 = 5;
		int ans=0;

		ans=(num1++ | num2) & ((++num2) ^ num1);

		System.out.println("Ans= "+ans);
	}
}

