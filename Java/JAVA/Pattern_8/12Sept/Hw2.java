

class HW2 {

	public static void main(String[] args) {
		int n =1;
		char ch = 'A';
		for(int i=1;i<=5;i++) {

			for(int j=4; j>=i; j--) {

				System.out.print("  ");
			}

			for(int k=1; k<=i*2-1; k++) {
				if(i%2!=0)
					System.out.print(n+" ");
				else
					System.out.print(ch+" ");
			}
			System.out.println();
			n++;
			if(i==2)
				ch++;
			
		}
	}
}

