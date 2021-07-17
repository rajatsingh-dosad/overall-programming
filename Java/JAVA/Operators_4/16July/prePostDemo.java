

class PrePostDemo {

	public static void main(String[] args) {

		int num = 10;
		int ans = 0;

		ans= num--;
		System.out.println(ans);	
		System.out.println(num);	
		
		ans= ++num;
		System.out.println(ans);	
		System.out.println(num);	
		
		ans= --num;
		System.out.println(ans);	
		System.out.println(num);	
		
		ans= num++;
		System.out.println(ans);	
		System.out.println(num);	
	}
}
