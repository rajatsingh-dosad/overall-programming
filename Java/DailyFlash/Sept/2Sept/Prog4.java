

class Pattern {

	public static void main(String[] args) {

		int num = 1;

		for(int i=1; i<=4; i++) {

			for(int j=1; j<=i; j++) {
				if(num*num <10)
					System.out.print((num*num)+"  ");
				else if(num*num>=10)
					System.out.print((num*num)+" ");
				num++;
			}
			System.out.println();
		}
	}
}

