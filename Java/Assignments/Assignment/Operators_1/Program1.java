

class dominos {

	int price;
	int quantity;
	static int total;

	static void bill() {


		System.out.println("Total cost ="+total);


	}

public static void main(String[] args) {

	dominos pizza=new dominos();
	pizza.price=200;
	pizza.quantity=2;
	
	dominos fries=new dominos();
	fries.price=210;
	pizza.quantity=3;
	
	total=pizza.price+fries.price;
	bill();


}
}
