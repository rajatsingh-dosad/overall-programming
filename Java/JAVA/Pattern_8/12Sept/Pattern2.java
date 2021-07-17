
class Pattern2 {

	public static void main(String[] args) {

		for(int i=1;i<=4;i++) {
			int num=1;
			for(int j=3;j>=i;j--) {

				System.out.print("  ");
			}
			
			for(int k=1;k<=i;k++) {

				System.out.print(num+" ");
				num++;
			}
			System.out.println();
		}
	}
}

