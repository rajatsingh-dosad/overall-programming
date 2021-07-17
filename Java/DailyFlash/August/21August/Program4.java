

class Pattern {

	public static void main(String[] args) {
		
		int num=1;
		for(int i=1;i<=16;i++) {

			if(i%4==0) {

				System.out.println(2*num);
				num=1;
			}
			else {
				System.out.print(2*num+" ");
				num++;
			}
		}
	}
}



