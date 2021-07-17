
import java.util.*;

class BigBazaar {

	String prodName = null;
	float price;

	BigBazaar(String prodName,float price) {

		this.prodName = prodName;
		this.price = price;
	}

	void display() {

		System.out.print("Product : "+prodName);
		System.out.println(" Price : "+price);
	}
}

class LinkedListConst {

	public static void main(String[] args) {

		LinkedList ll = new LinkedList();
		ll.add(new BigBazaar("Gahu",45.50f));
		ll.add(new BigBazaar("Tandool",50f));
		ll.add(new BigBazaar("Bajari",65f));
		ll.add(new BigBazaar("Jwari",45f));

		ListIterator li = ll.listIterator();

		while(li.hasNext()) {

			BigBazaar obj = (BigBazaar)li.next();
			obj.display();
		}
	}
}	
