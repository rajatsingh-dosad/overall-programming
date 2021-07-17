
class Prog3 {

	public static void main(String[] args) {

		String s1 = "Rajat";
		String s2 = new String("Dosad");
		
	}
}

/*
 	When we write string in string literal than first it is checked in SCP(String 
	Constant Pool) and if is already present than it does not make  a object there and
	if not present present than only makes a object.

	And when we write string using "new" keyword than it is first checked in scp and 
       	if present then doesn't make the object and if not present makes the object.
	It compulsorily makes the object in heap even though it is already present.	

*/
