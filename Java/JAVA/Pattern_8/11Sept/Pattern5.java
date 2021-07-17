
class Pattern5 {

	public static void main(String[] args) {
		
		int n=1;
		char ch='A';
		for(int i=1;i<=4;i++) {

			for(int j=4;j>=i;j--) {

				if(i==1 || i==3) {

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



