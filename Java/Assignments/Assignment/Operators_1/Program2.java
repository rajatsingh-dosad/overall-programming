

class Operation {

	int num1=20;
	int num2=10;
	int ans=0;

	void add() {
		
		ans=num1+num2;
		System.out.println("Add ="+ans);
	}
	
	void sub() {
		
		ans=num1-num2;
		System.out.println("Sub ="+ans);
	}
	
	void mul() {
		
		ans=num1*num2;
		System.out.println("Mul="+ans);
	}
	
	void div() {
		
		ans=num1/num2;
		System.out.println("Div ="+ans);
	}
	
	void mod() {
		
		ans=num1%num2;
		System.out.println("Mod ="+ans);
	}

	public static void main(String[] args) {

		Operation cal=new Operation();
		cal.add();
		cal.sub();
		cal.mul();
		cal.div();
		cal.mod();
	}
}
