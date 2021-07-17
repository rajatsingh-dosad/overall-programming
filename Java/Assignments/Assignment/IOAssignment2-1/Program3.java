

import java.io.*;

class Vowel {

	public static void main(String[] args) throws IOException {

		InputStreamReader  isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		char ch;

		System.out.println("Enter a charcater: ");
		ch=(char) br.read();

		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			System.out.println(ch+" is a vowel");
		else
			System.out.println(ch+" is a consonant");
	}
}
