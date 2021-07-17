
import java.util.*;

class Anagram {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string1: ");
		String str1 = sc.next();
		
		System.out.print("Enter the string2: ");
		String str2 = sc.next();
		
		int flag ;
		if(str1.length() != str2.length())
			System.out.println("Strings are not Anagram.");
		else {

			char ch1[] = new char[str1.length()];
			char ch2[] = new char[str1.length()];	
		
			for(int i=0;i<ch1.length;i++) {
				flag = 0;
				int j = 0;
				for(;j<ch2.length;j++) {

					if(ch1[i] == ch2[j]) {
						flag = 1;
						break;
					}
					else
						flag = 0;
	
				}
				if(flag == 1) {
					ch2[j] = '#' ;
				}
				else if(flag==0) {

					System.out.printf("Strings are not anagram\n");
					break;
				}

				
			}
			System.out.printf("String are anagram\n");
		}
					
		
	}
}
					
