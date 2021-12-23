
import java.util.*;

class OlympicGold {

	int numberGold = 0;
	String country = null;

	OlympicGold(int numberGold, String country) {

		this.numberGold = numberGold;
		this.country = country;
	}

	public String toString() {

		return "Country = "  + country + " : Gold= " + numberGold; 
	}
}

class SortByGold implements Comparator<OlympicGold> {

	public int compare(OlympicGold obj1,OlympicGold obj2) {

		if(obj1.numberGold> obj2.numberGold)
			return 1;
		else if(obj1.numberGold < obj2.numberGold)
			return -1;
		else
			return 0;
	}
}


class Olympic {

	public static void main(String[] args) {

		PriorityQueue<OlympicGold> pq = new PriorityQueue<>(new SortByGold());

		pq.offer(new OlympicGold(1,"India"));
		pq.offer(new OlympicGold(38,"China"));
		pq.offer(new OlympicGold(39,"USA"));
		pq.offer(new OlympicGold(27,"Japan"));

		System.out.println(pq);

		System.out.println(pq.poll());
		System.out.println(pq.poll());
		System.out.println(pq.poll());

		System.out.println(pq);
	}
}
