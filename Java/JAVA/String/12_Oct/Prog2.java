
class Prog2 {

	public static void main(String[] args) {

		String s5 = new String("Biencaps");
		String s6 = "Biencaps";

		System.out.println(s5);	
		System.out.println(s6);	

		System.out.println(s5==s6);	//false

		s5  = s5.intern();
		
		System.out.println(s5==s6);	//true

	}
}
