

class WhileDemo {

	public static void main(String[] args) {

		int num = 1567;
		int var = num;
		int sum= 0;

		while(num != 0) {

			sum = sum + num%10;
			num = num/10;
		}
		System.out.println("Sum of "+var+" is "+sum);
	}
}
