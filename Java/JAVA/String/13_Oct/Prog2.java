
class StringConstDemo1 {

	public static void main(String[] args) {

		char[] name = {'s','h','a','s','h','i'};

		String obj = new String(name);

		System.out.println(obj);

		byte[] barr = {100,101,102,103,104};
		
		String obj1 = new String(barr);

		System.out.println(obj1);
	}
}
