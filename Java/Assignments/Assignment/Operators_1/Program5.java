
class MixedIncDec {

	public static void main(String[] args) {

		int a= 10;
		int b= 20;
		int c= 50;
		int ans = 0;

		ans=a++ + --b + c--;

		System.out.println("a ="+a);		//11
		System.out.println("b ="+b);		//19
		System.out.println("c ="+c);		//49
		System.out.println("Ans ="+ans);	//a++ -> 10 , --b -> 19, c-- -> 50,  ans=10+19=29,  ans=29+50=79
	}
}


