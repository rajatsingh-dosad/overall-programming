
class Admission {

	Admission(String field) {
		
		if(field == "Medical")
			NEET();
		else if(field == "Engineering")
			JEE();
	}

	void NEET() {

		class Gov {

			void College() {
				System.out.println("AIIMS");
			}
		}

		class Private {
			
			void College() {
				System.out.println("Bharti");
			}
		}
	
		Gov gvt = new Gov();
		gvt.College();
	}

	void JEE() {

		class Gov {
			
			void College() {
				System.out.println("COEP");
			}
		}

		class Private {
			
			void College() {
				System.out.println("Sinhgad/Jspm/Zeal");
			}
		}

		Private pvt = new Private();
		pvt.College();
	}
}

class Decision {

	public static void main(String[] args) {

		Admission adm = new Admission("Medical");
		Admission adms = new Admission("Engineering");
	}
}
