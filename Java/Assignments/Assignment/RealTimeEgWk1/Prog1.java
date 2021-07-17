
/*
	Program 1. Army is composed of cavalry and infantry. Write a class called Army, in
	class Army create and store object of infantry.
	While creating infantry object, write infantry class' parametrised constructor to
	accept quantity of infantry soldiers.
	Create the infantry object and access the number of soldiers.
*/

class Infantry {
	
	int count;
	Infantry(int noOfSoldiers) {
		
		count = noOfSoldiers;
	}
}

class Army {
	
	public static void main(String[] args) {
	
		Infantry i = new Infantry(1237117);

		System.out.println("Numbers of Infantry soldiers are: "+i.count);
	}
}
