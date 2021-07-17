
/*	Program 16: Write a java code to find a self-dividing number in which all of the digits
are divisible by the number. (Take a while loop from 0 - 100 and print all the self-
dividing numbers).
Example: Number = 12. Here 1 and 2 divide 12

*/


class SelfDividingNo {

	public static void main(String[] args) {

		int num=0;
		while(num<=100) {

			int i=num;
			int divisible=0;
			int count=0;
			while(i!=0) {

				int rem=i%10;
				count++;
				if(rem==0) {
					break;
				}
				else if(num%rem==0)
					divisible++;
				i=i/10;
			}
			
			if(count==divisible && num!=0)
				System.out.println(num+" is a self dividing number.");

			num++;
		}
	}
}


