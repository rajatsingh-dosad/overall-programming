

class Pattern2 {

	public static void main(String[] args) {

		for(int i=1;i<=5;i++) {
			int num =i;
			for(int j=1;j<=5;j++) {
				
				System.out.print(num+" ");
				num++;
				if(num>5)
					num=1;
			}
			System.out.println();
		}
	}

}

