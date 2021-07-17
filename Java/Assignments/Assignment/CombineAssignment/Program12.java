
/*	Program 12: Ternary Operator working with other operators. Take 3 variables as
	follows and perform the following 4 operations, print the value of ans, i, j, k after
	each operation, also solve each operation on notebook and send it to your group
	leader via email.
	
	int i = 5; int j = 10; int k = 15; boolean ans;
	a] ans = (i < (j - 10))? true: false;
	b] ans = (i == (i = j))? true: false;
	c] ans = ((i & j & k) != 0)? true: false;
	d] ans = ((i ^ j >> 2) == 0)? true: false; 
*/

class Ternary {

	public static void main(String[] args) {

		int i=5, j=10, k=15;
		boolean ans;

		ans = (i<(j-10)) ? true : false;	
		System.out.println(ans);

		ans = (i == (i = j))? true: false;
		System.out.println(ans);

		ans = ((i & j & k) != 0)? true: false;
		System.out.println(ans);
		
		ans = ((i ^ j >> 2) == 0)? true: false; 
		System.out.println(ans);
	
	}
}
