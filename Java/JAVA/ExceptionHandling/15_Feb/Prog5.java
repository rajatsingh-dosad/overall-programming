
class MyException extends Exception {

	String msg = null;
	MyException(String str) {

		msg = str;
	}

	public String toString() {

		return msg;
	}
}

class CustomizedException {

	public static void main(String[] args) {

		try{
			
			System.out.println("In try");
			throw new MyException("customized Exception");
		}catch(MyException obj) {
			
			System.out.println("In catch");
			System.out.println("MyException : "+obj.toString());
		}
	}	
}
