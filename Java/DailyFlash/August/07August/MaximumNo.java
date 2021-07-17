
class MaximumNo {

	public static void main(String[] args) {

		int num =12357798;
		int max = 0;
		int rem = 0;

		while(num!=0) {
			
			rem = num%10;
			if(rem > max)
				max = rem;
			num = num/10;
		}
		System.out.println("The maximum Digit from number 12357798 is "+max);
	}
}

