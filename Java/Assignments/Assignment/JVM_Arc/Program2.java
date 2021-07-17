
class IndianArmy {

	static int totalArmyCount=1237117;	//Total Army count
	int noOfOperation=10;			//Numbers of operations performed by Indian Army

	static void dispArmyCount() {

		System.out.println("TotalArmyCount= "+totalArmyCount);
	}

	void dispOperation() {

		System.out.println("Number of Operations performed "+noOfOperation);
	}
}


class IndianNavy {

	static int totalNavyCount=167228;	//Total Navy count
	int noOfShips=295;			//Numbers of Ships that Navy has 

	static void dispNavyCount() {

		System.out.println("TotalnavyCount= "+totalNavyCount);
	}

	void dispShips() {

		System.out.println("Number of Ships Navy has ="+noOfShips);
	}
	

}


class IndianAirForce {


	static int totalAirForceCount=139576;	//Total Airforce soldiers count
	int noOfAircraft=900;			//Numbers of Aircraft Indian Air Force has

	static void dispAirForceCount() {

		System.out.println("TotalAirForceCount= "+totalAirForceCount);
	}

	void dispAircraft() {

		System.out.println("Number of Aircraft Air Force has "+noOfAircraft);
	}


}



class India {

	public static void main(String[] args) {
		
		IndianArmy RajputanaRifles=new IndianArmy();		//RajputaRifles is an regiment
		RajputanaRifles.noOfOperation=6;
		RajputanaRifles.dispArmyCount();
		RajputanaRifles.dispOperation();

		IndianArmy GorkhaRifles=new IndianArmy();		//GorkhaRifles is an regiment
		GorkhaRifles.noOfOperation=4;
		GorkhaRifles.dispArmyCount();
		GorkhaRifles.dispOperation();

		IndianNavy InsVikrant=new IndianNavy();
		InsVikrant.noOfShips=5;
		InsVikrant.dispNavyCount();
		InsVikrant.dispShips();

		IndianAirForce Mig_21=new IndianAirForce();
		Mig_21.noOfAircraft=113;
		Mig_21.dispAirForceCount();
		Mig_21.dispAircraft();



	}
}
