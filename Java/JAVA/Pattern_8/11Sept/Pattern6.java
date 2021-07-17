

class Pattern6 {

	public static void main(String[] args) {

		char ch='A';
		int n=1;

		for(int i=1;i<=4;i++) {

			for(int j=4;j>=i;j--) {

				if(j==2 || j==4) {

					System.out.print(n+" ");
					n++;
				}
				else {
					System.out.print(ch+" ");
					ch++;
				}
			}
			System.out.println();
		}
	}
}
