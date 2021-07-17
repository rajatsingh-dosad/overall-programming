

class LogicalDemo {

	public static void main(String[] args) {

		int num1 = 10;
		int num2 = 20;
		boolean ans;

		ans = (num1 != num2) && (num1<num2);
		System.out.println(ans);		//true		
	
		ans = (num1 < num2)  || (num1>num2);
		System.out.println(ans);		//true


	}
}
