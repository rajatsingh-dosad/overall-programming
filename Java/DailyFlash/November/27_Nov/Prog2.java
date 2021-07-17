
class Company {

	void totalPartners(String n1, String n2) {

		System.out.println("Partners of Company: "+n1+" and "+n2);
	}

	void totalPartners(String n1, String n2, String n3) {

		System.out.println("Partners of Company: "+n1+", "+n2+" and "+n3);
	}

	public static void main(String[] args) {

		Company c = new Company();

		c.totalPartners("Rajat","Priyanshu");
		
		c.totalPartners("Rajat","Priyanshu","Shruti");
	}
}

