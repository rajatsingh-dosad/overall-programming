
class Pattern {

	public static void main(String[] args) {

		
		for(int i=1; i<=16; i++) {

			if(i%4==0) 
				System.out.println(i);
			else if(i<10)
				System.out.print(i+"  ");
			else if(i<100)
				System.out.print(i+" ");
		}
	}
}

			
