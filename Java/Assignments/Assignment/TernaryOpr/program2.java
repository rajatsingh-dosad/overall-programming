

class Instagram {

	static void checkObject(Instagram insta) {

		System.out.println((insta instanceof Instagram) ? "Object belongs to Instagram class" : "Object not belong to Instagram class");
	}

	void print() {

		System.out.println("Rajat");
	}
}




class Facebook {

	public static void main(String[] args) {

		Instagram i=new Instagram();
		Instagram.checkObject(i);
	}
}
