
class FindSubString {


	static int mySubStr(String s1,String pat) {
		
		int m = s1.length();
		int n = pat.length();
		
		int cnt = 0;
		for(int i=0;i<=m-n;i++) {
			int j;
			for(j=0;j<n;j++) {

				if(s1.charAt(i+j) != pat.charAt(j))
					break;
			}
			if(j==n)
				cnt++;
		}
		
	return cnt;
	}	

	public static void main(String[] args) {
		
		String s1 = "Weltocome to Cotoreto2Wtoetob";
		String pat = "to";

		int index = mySubStr(s1,pat);
		System.out.println(index);
	}
}
