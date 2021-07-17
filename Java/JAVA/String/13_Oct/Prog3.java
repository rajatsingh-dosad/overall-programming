
class StringDemo {

	public static void main(String[] args) {

		String s1 = "shashi";
		String s2 = new String("shashi");
		String s3 = new String("shashi");

		System.out.println(s1==s2);	//false
		System.out.println(s2==s3);	//false

		System.out.println(s1.equals(s2));	//true
		System.out.println(s2.equals(s3));		//true

		
	}
}
