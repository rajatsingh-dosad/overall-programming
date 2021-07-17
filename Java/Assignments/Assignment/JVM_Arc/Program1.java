

class China {

	static int economy=14;		//14 trillion
	int unemployment=785469;	//Because of Ban the unemployment in china will increase

	static void totalEconomy() {

		System.out.println("TotalEconomy= "+economy);
	}

	void totalUnemployed() {

		System.out.println("TotalUnemployed= "+unemployment);
}
}


class India {

	static int economy=10;		//10 trillion
	int unemployment=1546897;	//Because of the Ban There will be more employment in India as more products will be made in India

	static void totalEconomy() {

		System.out.println("TotalEconomy= "+economy);
	}

	void totalUnemployed() {

		System.out.println("TotalUnemployed= "+unemployment);
}

}


class banChineseProducts {

	public static void main(String[] args) {

		China productBan=new China();
		productBan.totalEconomy();
		productBan.economy=13;			//There will be loss in economy and it will affect directly to China that's why it is static
		productBan.totalUnemployed();

		China Tiktok=new China();
		Tiktok.unemployment=8844;		//Unemployment will also increase
		Tiktok.totalEconomy();
		Tiktok.totalUnemployed();

		India MakeInIndia=new India();
		MakeInIndia.economy=11;			//Economy will increase as more things will be India made only
		MakeInIndia.unemployment=14257;		//As More products will be MadeInIndia so our Employment will increase
		MakeInIndia.totalEconomy();
		MakeInIndia.totalUnemployed();
	}
}




