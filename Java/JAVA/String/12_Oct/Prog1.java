
class Prog1 {

	public static void main(String[] args) {

		String s1 = "Core2web";
		String s2 = new String("Core2web");
		String s3 = "Core2web";
		String s4 = new String("Core2web");

		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		System.out.println(s4);

		System.out.println(s1==s2);	//false
		System.out.println(s1==s3);	//true
		System.out.println(s2==s4);	//false
	}
}
