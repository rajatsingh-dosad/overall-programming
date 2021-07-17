
class Pattern3 {

	public static void main(String[] args) {

		for(int row=1;row<=5;row++) {
			int num=1;
			for(int space=4; space>=row; space--) {

				System.out.print("   ");
				num++;
			}

			for(int col=1;col<=row;col++) {

				System.out.format("%3d",num*num);
				num++;
			}
			System.out.println() ;
		}
	}
}
