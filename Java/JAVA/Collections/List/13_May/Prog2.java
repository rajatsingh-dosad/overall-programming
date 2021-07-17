
import java.util.*;

class IteratorCursor {

	public static void main(String[] args) {

		Vector v = new Vector();
		v.addElement(10);
		v.addElement(20);
		v.addElement(30);
		v.addElement(40);
		v.addElement(50);
		
		ListIterator i = v.listIterator();

		System.out.println(v);

		while(i.hasNext()) {

			Integer val = (Integer)i.next();

			if(val == 30) 
				i.set(60);

		}

		while(i.hasPrevious()) {

			System.out.println(i.previous());
		}
	

	}
}
