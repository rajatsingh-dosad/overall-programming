

class AddMul {

	public static void main(String[] args) {

		int num = 12345;
		int rem = 0;
		int add = 0;
		int mul = 1;
		while(num!=0) {

			rem = num%10;
			if(rem%2==0)
				add = add + rem;
			else
				mul =mul * rem;
			num = num/10;
		}

		System.out.println("Addition of even digit - "+add);
		System.out.println("Multiplication of odd digit - "+mul);
	}
}

