
class motherFamily {

	static int noOfMembers=20;
	int income=50000;

	void displayincome() {

		System.out.println("Mother's family income="+income);
	}

	static void membersCount() {

		System.out.println("Mother's family members count="+noOfMembers);
		
	}
}


class fatherFamily {
	
	static int noOfMembers=15;
	int income=80000;

	void displayincome() {

		System.out.println("Father's family income="+income);
	}

	static void membersCount() {

		System.out.println("Father's family members count="+noOfMembers);
		
	}
}
	

class totalFamily {

	public static void main(String[] args) {

	motherFamily mama=new motherFamily();
	mama.income=30000;
	mama.displayincome();
	mama.membersCount();

	motherFamily mausi=new motherFamily();
	mausi.income=20000;
	mausi.displayincome();
	mausi.membersCount();

	fatherFamily chacha=new fatherFamily();
	chacha.income=50000;
	chacha.displayincome();
	chacha.membersCount();

	fatherFamily tauji=new fatherFamily();
	tauji.income=30000;
	tauji.displayincome();
	tauji.membersCount();

	
}
}

