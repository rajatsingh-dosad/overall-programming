
class FindSubString {


	static int mySubStr(String s1,String pat) {
		
		int m = s1.length();
		int n = pat.length();

		for(int i=0;i<=m-n;i++) {
			int j;
			for(j=0;j<n;j++) {

				if(s1.charAt(i+j) != pat.charAt(j))
					break;
			}
			if(j==n)
				return i;
		}
		
	return -1;
	}	

	public static void main(String[] args) {
		
		String s1 = "Welcome to Core2Web";
		String pat = "to";

		int index = mySubStr(s1,pat);

		if(index>=0)
			System.out.println("Substring is present at index : "+index);
		else
			System.out.println("Substring is not present");
	}
}
