
/*	Program 13: Find whether a number is a Neon number or not. Neon Number -> A
	neon number is a number where the sum of digits of square of the number is equal to
	the number

	e.g. 9 is a Neon number but how?
	Square of 9 is 81, and sum of digits of 81 i.e. 8 + 1 is 9 again
	 Input: 9
	 Output: 9 is a neon number
	(also give a thought on how many possible neon numbers are there
*/

class NeonNumber {

	public static void main(String[] args) {

	int num = 9;

	int sq = num * num;
	int dup=sq;
	int sum=0;
	while(sq!=0) {

		sum=sum+(sq%10);
		sq=sq/10;
	}
	if(sum==num)
		System.out.println("9 is a neon number.");
}


}

// There is only one Neon number i.e 9.
