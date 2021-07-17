

/*	Program 15: Write a java code to count the number of steps required for a number to
reduce it to zero.(Take a hardcoded value and write the number of steps required to
make it zero).
Input - num = 8
Output - steps required = 4
Input - num = 123
Output - steps required = 12.

*/

class ReduceToZero {

	public static void main(String[] args) {

		int num=123;
		int count=0;

		while(num!=0) {
			
			if(num%2!=0) {
				num=num-1;
				count++;
				continue;
			}
			num=num/2;
			count++;
		}

		System.out.println("Steps required = "+count);
	}
}

