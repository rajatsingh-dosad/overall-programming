

class Pattern5 {

	public static void main(String[] args) {
		
		
		for(int row=1; row<=5; row++) {
			int num = 2*row-1;
			for(int col=5;col>=row; col--) {

				System.out.print(num+" ");
				num++;
			}
		
			System.out.println();
		}
	}
}


