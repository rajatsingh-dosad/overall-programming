

class OddNo {

	public static void main(String[] args) {
		
		int count=1;
		for(int i=1; count<=50; i++) {

			if(i%2!=0 ) {

				System.out.print(i+" ");
				count++;
			}
		}
		System.out.println();
	}
}
