
class Pattern {

	public static void main(String[] args) {

		for(int i=0;i<5;i++) {

			for(int j=4;j>i;j--) {

				System.out.print(" ");
			}
			
			int n= 1;
			for(int k=0;k<=i;k++) {

				System.out.print(n+" ");

				if(n==1)
					n--;
				else
					n++;
			}

			System.out.println();
		}
	}
}
