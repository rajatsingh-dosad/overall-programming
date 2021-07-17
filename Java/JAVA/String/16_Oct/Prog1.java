
class StringBufferDemo {

	public static void main(String[] args) {

		StringBuffer s1 = new StringBuffer();
		
		System.out.println(s1);			//empty
		System.out.println(s1.capacity());	//16

		s1.append("Core2web");

		System.out.println(s1);			//Core2web
		System.out.println(s1.capacity());	//16

		s1.append("Technologies");		
		System.out.println(s1);			//Core2webTechnologies

		System.out.println(s1.capacity());	//34

		StringBuffer sb1 = new StringBuffer("Shashi");
		System.out.println(sb1);			//Shashi
		System.out.println(sb1.capacity());	//22

		
	}
}
