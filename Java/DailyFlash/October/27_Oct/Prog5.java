
class Prog5 {

	public static void main(String[] args) {

		for(int i=0;i<4;i++) {
			
			for(int j=3;j>i;j--) {

				System.out.print(" ");
			}

			int num = 1;
			for(int k=0;k<=i;k++) {
				  if (k==0)
         	      			 num=1;
				  else
        			       num = num * (i-k+1) / k;
		              	  System.out.print(" "+num);
			}

			System.out.println();
		}
	}
}


