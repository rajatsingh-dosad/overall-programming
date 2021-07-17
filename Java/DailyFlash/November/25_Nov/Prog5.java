
class University {
	
	static String uName = "SavitriBai Phule Pune University";
	int totalColleges = 30;

	class Department {

		String dName = "Department of Technology";
		int types = 10;

		void info() {

			System.out.println("Name of University: "+uName);
			System.out.println("Total colleges under "+uName+": "+totalColleges);
			System.out.println("Name of Department: "+dName);
			System.out.println("Different types: "+types);
		}
	}
}

class Demo {

	public static void main(String[] args) {

		University u = new University();

		University.Department d = u.new Department();
		d.info();
	}
}

				


