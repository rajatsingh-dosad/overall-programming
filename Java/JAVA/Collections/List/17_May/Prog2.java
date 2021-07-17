
import java.util.*;

class ITCompany {
	
	String name;
	int count;

	ITCompany(String name,int count) {

		this.name = name;
		this.count = count;
	}

	void display() {
		
		System.out.println("Company name = "+name);
	       	System.out.println("Company count = "+count+"\n");	
	}
}

class ArrayListDemo {

	public static void main(String[] args) {

		ArrayList al = new ArrayList();

		al.add(new ITCompany("Biencaps",25));
		al.add(new ITCompany("Bitwise",250));
		al.add(new ITCompany("Microsoft",700));

		ListIterator li = al.listIterator();

		while(li.hasNext()) {

			ITCompany obj= (ITCompany)li.next();
			obj.display();

		}

	}
}
