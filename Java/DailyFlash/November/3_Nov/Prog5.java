
import java.util.*;

class Prog5 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the date in the format DD/MM/YYYY: ");
		String date = sc.next();

		StringTokenizer st = new StringTokenizer(date,"/");

		int day = Integer.parseInt(st.nextToken().trim());
		int month = Integer.parseInt(st.nextToken().trim());
		String year = st.nextToken().trim();
	
		int flag = 0;
		System.out.println("OUTPUT:");
		if(day>31 || month>12 || year.length() > 4)
			flag = 1;

		else {

			switch(month) {

				case 1:
					if(day>31)
						flag = 1;
					break;
				case 2:
					if(day>29)
						flag = 1;
					break;
				case 3:
					if(day>31)
						flag = 1;
					break;
				case 4:
					if(day>30)
						flag = 1;
					break;
				case 5:
					if(day>31)
						flag = 1;
					break;
				case 6:
					if(day>30)
						flag = 1;
					break;
				case 7:
					if(day>31)
						flag = 1;
					break;
				case 8:
					if(day>31)
						flag = 1;
					break;
				case 9:
					if(day>30)
						flag = 1;
					break;
				case 10:
					if(day>31)
						flag = 1;
					break;
				case 11:
					if(day>30)
						flag = 1;
					break;
				case 12:
					if(day>31)
						flag = 1;
					break;
			}
		}

		if(flag == 0)
			System.out.println(date+ " -> VALID DATE");
		else
			System.out.println(date+ " -> INVALID DATE");

	}
}
		



