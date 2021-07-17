
class Pattern {

	public static void main(String[] args) {
		int n=7;
		for(int i=0;i<4;i++) {

			for(int j=0;j<=i;j++) {

				System.out.print(n+" ");
				n--;
			}
			System.out.println();
			n++;
		}
	}
}
