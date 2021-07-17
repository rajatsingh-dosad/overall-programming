

class Pattern5 {

	public static void main(String[] args) {

		int temp = 1;
		for(int i=1;i<=12;i++) {
			char ch ='A';
			if(i<=6) {

				for(int j=6;j>=i;j--) {

					System.out.print(ch+" ");
					ch++;
				}
				System.out.println();
			}
			else {
				ch = 'A';

				for(int k=1;k<=temp;k++) {

					System.out.print(ch+" ");
					ch++;
				}
				System.out.println();
				temp++;
				
			}
		}
	}
}


