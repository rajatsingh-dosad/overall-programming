
/*
	Program 6. A building is composed of iron rod, cement and bricks.
	Your dad has assigned you a task to store prices for various materials brought for
	your new house construction.
	Create a class called Material(String materialName, double price). Create 3 objects of
	material class called
	ironRod, cement and bricks. And pass suitable arguments to each constructor. Later
	find out total cost in house construction.
*/



class Material {
	
	static double total = 0;
	Material(String materialName, double price) {
		
		System.out.println("Material name is: "+materialName);
		System.out.println("Material cost is: "+price+"\n");
		total = total + price;
	}

	public static void main(String[] args) {
		
		Material one = new Material("Ironrod",21.5);
		Material two = new Material("Cement",18.78);
		Material three = new Material("Bricks",17.25);

		System.out.println("Total cost to build the house is: "+total+" Lakhs");
	}
}
