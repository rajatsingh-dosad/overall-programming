
/*	Program 10: Write a java program to calculate the power of a given number.
	
	Input: number 10, power: 2
	Output: 10 to the power 2 is 100
*/

class PowerOfNumber {

	public static void main(String[] args) {

		int num = 10;
		int power = 2;
		int ans=1;

		while(power > 0) {

			ans = ans * num;
			power--;
		}
		System.out.println("10 to the power 2 is "+ans);
	}
}
