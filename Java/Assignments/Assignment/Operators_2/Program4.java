

class Pune {

	static int covidActiveCase = 30000;
	int totalCase= 60000;
	int increase=0;

	static void noCorona() {

		System.out.println("CovidActiveCase in Pune = "+covidActiveCase);

	}

	void lockdown() {

		
		increase= ++covidActiveCase;
		System.out.println(" CovidActiveCase= "+increase);

		increase= ++totalCase;
		System.out.println(" TotalCase= "+increase);

	}

	void noLockdown() {
		increase= ++covidActiveCase;
		System.out.println(" CovidActiveCase= "+increase);

		increase= ++totalCase;
		System.out.println(" TotalCase= "+increase);

	}


}


class Mumbai {

	static int covidActiveCase = 84000;
	int totalCase = 120000;
	int increase =0;

	static void noCorona() {

		System.out.println("CovidActiveCase in Mumbai= "+covidActiveCase);

	}

	void lockdown() {


		increase= ++covidActiveCase;
		System.out.println(" CovidActiveCase= "+increase);

		increase= ++totalCase;
		System.out.println(" TotalCase= "+increase);

	}

	void noLockdown() {
		increase= ++covidActiveCase;
		System.out.println(" CovidActiveCase= "+increase);

		increase= ++totalCase;
		System.out.println(" TotalCase= "+increase);

	}

	

}

class Maharashtra {

	public static void main(String[] args) {
			
		Pune count1=new Pune();
		Pune.noCorona();
		count1.lockdown();
		count1.noLockdown();
		count1.lockdown();
		count1.noLockdown();
		System.out.println("");

		Mumbai count2=new Mumbai();
		Mumbai.noCorona();
		count2.lockdown();
		count2.noLockdown();
		count2.lockdown();
		count2.noLockdown();
	}
}
