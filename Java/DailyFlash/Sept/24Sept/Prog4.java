
class Prog4 {

	public static void main(String[] args) {

		String one = "Swarup,A,2,324.2";
		String two = "Sonia,C,23,522.05";

		int t1= 1;
		int t2= 1;
		int j=0;
		
		for(int i=0;i<one.length();i++) {

			if(one.charAt(i) == ',') {
				t1++;
				System.out.println();
			}

			else if(one.charAt(i)!=',')

				System.out.print(one.charAt(i));

		}
		System.out.println("\nNo of tokens in String1 are: "+t1);
		
		System.out.println("\n*********************************************************\n");

		
		while(j<two.length()) {
			if(two.charAt(j) == ',') {
				t2++;
				System.out.println();
			}

			else if(two.charAt(j)!=',')

				System.out.print(two.charAt(j));
			j++;
		}
		System.out.println("\nNo of tokens in String2 are: "+t2);

	}
}
