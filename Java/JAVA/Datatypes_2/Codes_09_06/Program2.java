

class ShortDemo {

	public static void main(String[] args) {

//		short x=32767;
//		System.out.println(x);		//32767
	
//		short x=32768;
//		System.out.println(x);		//Error:Incompatible types:possible lossy conversion from int to short
	
		short x=32767;
		System.out.println(x);		//32767
		++x;
		System.out.println(x);		//-32768
}
}
