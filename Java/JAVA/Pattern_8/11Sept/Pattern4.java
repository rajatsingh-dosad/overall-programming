
class Pattern4 {

	public static void main(String[] args) {
		int n=1;
		char ch = 'A';
		for(int i=1;i<=4;i++) {

			for(int j=4;j>=i;j--) {

				if(j==3 || j==1) {

					System.out.print(ch+" ");
					ch++;n++;
				}
				else
				{
					System.out.print(n+" ");
					n++;
				}
			}
			System.out.println();
		}
	}
}


