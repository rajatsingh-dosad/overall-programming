

class Divisible {

	public static void main(String[] args ) {

		int count = 1;
		int i = 1;
	
		while(count<=10) {

			if(i%32 ==0 && i%7==0) {
				System.out.print(i+" ");
				count++;
				if(i%6==0) {
					System.out.println("\nBreaking loop");
					System.out.println(i+" is divisible by "+6);
					break;
				}
			}
				i++;

		}
	}
}



			
