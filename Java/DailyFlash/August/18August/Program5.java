

class MaximumNo {

	public static void main(String[] args) {

		int num1=1, num2=4, num3=2;
		
		int ans=0;

		ans=((num1>num2) ? ((num1>num3) ? num1 : num3) : ((num2>num3) ? num2: num3));

		System.out.println(ans+" is Max number among 1, 4 and 2");
	}
}

