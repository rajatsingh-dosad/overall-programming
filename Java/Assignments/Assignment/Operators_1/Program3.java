
class MixedIncDec {

	public static void main(String[] args) {

		int a= 10;
		int b= 20;
		int c= 50;
		int ans = 0;

		ans=a++ + ++b + ++c;

		System.out.println("Ans ="+ans);	//a++ -> 10 , ++b -> 21, ++c -> 51,  ans=10+21=31,  ans=31+51=82
		System.out.println("a ="+a);		//11
		System.out.println("b ="+b);		//21
		System.out.println("c ="+c);		//51
	}
}


