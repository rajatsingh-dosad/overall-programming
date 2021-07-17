

class Pattern4 {

	public static void main(String[] args) {

		for(int row=1; row<=5; row++) {
			int num=1;
			for(int space=1; space<row ; space++) {

				System.out.print("   ");
				num++;
			}
			
			for(int col=5;col>=row; col--) {

				System.out.printf("%3d",row*num);
				num++;
			}
			System.out.println();
		}
	}
}

