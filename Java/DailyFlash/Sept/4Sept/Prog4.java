

class Pattern {

	public static void main(String[] args) {

		for(int i=0;i<4; i++) {
			
			int num = 3-i;
			for(int j=0;j<=i;j++) {

				System.out.print(num+" ");
				num++;
			}
			System.out.println();
		}
	}
}

