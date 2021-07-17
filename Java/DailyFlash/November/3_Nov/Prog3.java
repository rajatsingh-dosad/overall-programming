
import java.util.*;
class Prog3 {

	void consistPalindrome(int x,int i) {
		
		int num = x;
		int rem = 0;
		int rev = 0;
		while(x>0) {

			rem = x % 10;
			rev = rev * 10 + rem;
			x = x / 10;
		}

		if(num == rev)
			System.out.println(i+" index consist Palindrome");
	}

	public static void main(String[] args ) {
		
		Prog3 obj = new Prog3();
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the size of array: ");
		int size = sc.nextInt();

		int[] arr = new int[size];

		System.out.print("Enter the elements in the array: ");
		for(int i=0;i<size;i++) {

			arr[i] = sc.nextInt();
		}
		
		System.out.println("OUTPUT:");
		for(int i=0;i<size;i++) {
			
			obj.consistPalindrome(arr[i],i);
			
		}
	}
}

		
