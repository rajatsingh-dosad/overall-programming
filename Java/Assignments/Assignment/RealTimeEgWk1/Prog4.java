
/*
	Program 4. A country is composed of states, states are composed of cities. Write a
	real time example to accommodate 2 state class objects in country class.
	Those two state class objects will accommodate 2 objects(each) of city class.
	Example
	Class USA stores objects of North Carolina and North Dakota
	North Carolina stores objects of 'Elizabeth city' and Rocky mount
	North Dakota stores objects of 'Watford city' and 'valley city'.
	Fit names of states and cities using parametrised constructor of state class and city
	class.
	Later access and print those names
	You can write your own example
*/


class City {
	
	City(String city) {

		System.out.println("Name of the city is: "+city);
	}

}

class State {
	
	int sNum;
	State(String state, int sNum) {

		System.out.println("Name of state is "+state);		
		this.sNum = sNum;
	}
	
	void getCity() {
		if(sNum == 1) {
			
			City c1 = new City("Pune");
			City c2 = new City("Mumbai");
		}

		else if (sNum == 2) {

			City c1 = new City("Ludhian");
			City c2 = new City("Patiala");
		}
	}
}
			
class Country {

	Country() {

		System.out.println("Country is India");
	}
	
	public static void main(String[] args) {
		State s1 = new State("Maharashtra",1);
		s1.getCity();
		System.out.println();
		State s2 = new State("Punjab",2);
		s2.getCity();
	}
}


