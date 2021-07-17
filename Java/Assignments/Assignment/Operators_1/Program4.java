
class MixedIncDec {

	public static void main(String[] args) {

		int a= 10;
		int b= 20;
		int c= 50;
		int ans = 0;

		ans=--a + ++b + c--;

		System.out.println("a ="+a);		//9
		System.out.println("b ="+b);		//21
		System.out.println("c ="+c);		//49
		System.out.println("Ans ="+ans);	//--a -> 9 , ++b -> 21, c-- -> 50,  ans=9+21=30,  ans=30+50=80
	}
}


