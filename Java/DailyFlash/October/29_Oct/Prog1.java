
class TV {

	void turnOn(boolean tvRemote) {
		
		if(tvRemote)
			System.out.println("TV is on");
		else 
			System.out.println("TV is off");
	}

	void turnOn(boolean tvRemote, boolean setupBox) {

		if(tvRemote && setupBox) 
			System.out.println("TV is on");
		else 
			System.out.println("TV is off");
	}

	public static void main(String[] args) {
		
		System.out.println("OUTPUT:");
		TV obj = new TV();
		
		obj.turnOn(true);
		obj.turnOn(true,false);
	}
}	
