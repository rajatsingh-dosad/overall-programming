
class Prog1 {

	public static void main(String[] args) {

		int my_array[] = {1789,2035,1899,2013,1458,2458,1254,1472,2365};
		
		int m=0,n=0;
		for(int i=0;i<my_array.length;i++) {
			
			if(my_array[i] == 2013) 
				m = 1;
			if(my_array[i] == 2015) 
				n = 1;
		}

		if(m==1)
			System.out.println("2013 is present in array.");
		else
			System.out.println("2013 is not present in array.");
			
		if(n==1)
			System.out.println("2015 is present in array.");
		else
			System.out.println("2015 is not present in array.");


			
		
	}
}
			
