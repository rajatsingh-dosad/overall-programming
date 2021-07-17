
class Pattern4 {

	public static void main(String[] args) {

		for(int i=1;i<=5;i++) {
			int n=1;
			for(int j=1;j<=i;j++) {

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
