

class Arithmetic {

	static int a =10;
	static int b=20;

	void operation() {

	
		System.out.println("Add= "+(a+b));
		System.out.println("Sub= "+(a-b));
		System.out.println("Mul= "+(a*b));
		System.out.println("Div= "+(a/b));
		System.out.println("Mod= "+(a%b));
	}

	static void result() {

		int result=(a+b)+(a-b)+(a*b)+(a/b)+(a%b);
		System.out.println("Addition of all result= "+(result));
}
}

class Logical {
	
	 static int x=10;
	 static int y=20;
	void operation1() {

		boolean ans1=(x>y) && (y>x);
		System.out.println("Ans1 = "+ans1);

		boolean ans2=(x<y) || (y<x);
		System.out.println("Ans2 = "+ans2);
	}

	static void result1() {
		
		
		boolean answer=((x>y) && (y>x) ) && ((x<y) || (y<x));
		System.out.println("Answer of Ans1 && Ans2= "+answer);
	
}
}


class Bitwise {

	static int a =10;
	static int b=20;

	void operation2() {

	
		System.out.println("a & b  = "+(a&b));
		System.out.println("a | b = "+(a|b));
		System.out.println("a ^ b  = "+(a^b));
		System.out.println("~a = "+(~a));
		System.out.println("a<<2= "+(a<<2));
		System.out.println("b>>3= "+(b>>3));
		System.out.println("a>>>2= "+(a>>>2));
		
	}
	
	static void result2() {

		int result=(a&b)+(a|b)+(a^b);
		System.out.println("Addition of &, | and ^ = "+(result));


		
}
}


class Operator {

	public static void main(String[] args) {
		System.out.println("*******************ARITHMETIC***********************");
		Arithmetic obj1=new Arithmetic();
		obj1.operation();
		Arithmetic.result();
		
		System.out.println("********************LOGICAL*************************");
		Logical obj2=new Logical();
		obj2.operation1();
		Logical.result1();
		
		System.out.println("********************BITWISE*************************");
		Bitwise obj3=new Bitwise();
		obj3.operation2();
		Bitwise.result2();

}
}
