
class StringBufferDemo {

	public static void main(String[] args) {

		StringBuffer sb1 = new StringBuffer("Biencaps");
		StringBuffer sb2 = new StringBuffer("Shashi");
		
		//length
		System.out.println(sb2.length());	//6

		//capacity
		System.out.println(sb2.capacity());	//22

		//charAt
		System.out.println(sb2.charAt(3));	//s

		//append
		sb2.append("Bagal");
		System.out.println(sb2);		//ShashiBagal

		sb2.append(20);
		System.out.println(sb2);		//ShashiBagal20

		sb2.append(sb1);
		System.out.println(sb2);		//ShashiBagal20Biencaps

		//insert
		sb2.insert(13,"Core2Web");
		System.out.println(sb2);			//ShashiBagal20Core2WebBiencaps

		//deleteCharAt
		sb2.deleteCharAt(11);
		System.out.println(sb2);			//ShashiBagal0Core2WebBiencaps
		
		//delete
		sb2.delete(6,12);
		System.out.println(sb2);			//ShashiCore2WebBiencaps

		//reverse
		sb2.reverse();
		System.out.println(sb2);			//reversed
		sb2.reverse();

		//setLength
		sb2.setLength(6);
		System.out.println(sb2);			//Shashi

	}
}
