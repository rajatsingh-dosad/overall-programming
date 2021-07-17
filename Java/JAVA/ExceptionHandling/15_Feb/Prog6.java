
class MyException extends RuntimeException {

	String msg = null;
	MyException(String str) {

		msg = str;
	}

	public String toString() {

		return msg;
	}
}

class  CustomizedException {

	static void checking(int weight) {
		
		if(weight > 50)
			throw new MyException("Weight jara jastach aahe");
	}	

	public static void main(String[] args) {

		try{
			
			checking(60);
		}catch(MyException obj) {
			
			System.out.println("In catch");
			System.out.println("MyException : "+obj.toString());
		}
	}	
}
