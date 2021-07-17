

class Cricket {

	public static void main(String[] args) {

		Cricket test=new Cricket();
		Cricket oneday=new Cricket();
		Cricket t20=new Cricket();
		Cricket Thirty5=null;

		boolean res;
		res= test instanceof Cricket;
		System.out.println(res);
		
		System.out.println(oneday instanceof Cricket);
		System.out.println(t20 instanceof Cricket);
		System.out.println(Thirty5 instanceof Cricket);


	}
}
