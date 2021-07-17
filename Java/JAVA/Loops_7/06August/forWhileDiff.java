

class ForWhileDemo {

	public static void main(String[] args) {

		int sum=0;
		for(int num=247,rem=0;num!=0;num=num/10) {

			rem=num%10;
			sum=sum+rem;
		}
		System.out.println("Sum = "+sum);
	}
}
