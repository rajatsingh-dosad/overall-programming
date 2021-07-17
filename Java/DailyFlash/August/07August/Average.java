

class Average {

	public static void main(String[] args) {

		int num = 12345;
		int sum = 0;
		int average = 0;
		int count = 0;

		while(num!=0) {
			sum = sum + (num%10);
			count++;
			num = num / 10;
		}

		average = sum / count;
		System.out.println("The Average of digits from number 12345 is "+average+".");
	}
}

