
class SachinTendulkar {

	void decision() {

		System.out.println("Sachin Tendulkar Choose to be a batsman");
	}

}

class ArjunTendulkar extends SachinTendulkar {


	void decision() {

		System.out.println("Arjun TendulkarChoose to be a All-rounder");
	}

}

class Career {

	public static void main(String[] args) {
		
		SachinTendulkar st = new SachinTendulkar();
		st.decision();

		ArjunTendulkar at = new ArjunTendulkar();
		at.decision();
	}
}
