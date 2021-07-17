
class Pattern3 {

	public static void main(String[] args) {

		int num=2;
		int n=2;
		for(int i=1;i<=4;i++) {

			for(int j=1;j<=i;j++) {

				System.out.print(num+" ") ;
				num+=n*2-1;
				n++;
			}
			System.out.println();
		}
	}
}
