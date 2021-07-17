
import java.util.*;

class Politics {

	String leaderName;
	String partyName;	
	int years;

	Politics(String leaderName,String partyName,int years) {

		this.leaderName = leaderName;
		this.partyName = partyName;
		this.years=years;
	}
	
		
	public String toString() {

		return leaderName+" "+partyName+" "+years;
	}
	
	void dispDetails() {

		System.out.println(leaderName+" "+partyName+" "+years);
	}
}

class sortByleaderName implements Comparator<Politics> {

	public int compare(Politics obj1,Politics obj2) {

		return obj1.leaderName.compareTo(obj2.leaderName);
	}
}

class ComparatorDemo {

	public static void main(String[] args) {

		TreeSet<Politics> ts = new TreeSet<>(new sortByleaderName());
		ts.add(new Politics("Sharad Pawar","NCP",60));
		ts.add(new Politics("Narayan Rane","BJP",52));
		ts.add(new Politics("Uddhav Thackeray","ShivSena",35));
		ts.add(new Politics("Ashok Chavan","Congress",40));

		System.out.println(ts);

		for(Politics o : ts) {

			o.dispDetails();
		}

		
	}
}	
