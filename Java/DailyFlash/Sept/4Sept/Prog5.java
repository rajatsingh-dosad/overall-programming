

import java.io.*;

class ValidDate {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the date month and year: ");
		int date = Integer.parseInt(br.readLine());
		int month = Integer.parseInt(br.readLine());
		int year = Integer.parseInt(br.readLine());

		switch(month)  {

		case 1:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;

		case 2:
			if(date>28) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		
		case 3:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		
		case 4:
			if(date>30) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 5:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 6:
			if(date>30) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 7:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 8:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 9:
			if(date>30) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 10:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;
		case 11:
			if(date>30) 
				System.out.println("Date exist!");
			break;
		case 12:
			if(date>31) 
				System.out.println("Date doesn't exist!");
			else
				System.out.println("Date exist!");
			break;

		default:
			System.out.println("You enetered a wrong month!");
	
		}
	}
}
	
