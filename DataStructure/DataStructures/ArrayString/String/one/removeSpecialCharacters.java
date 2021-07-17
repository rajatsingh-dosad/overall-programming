public class removeSpecialCharacters {
    public static void main(String[] args) {

        String s = "$ja!va$12st%ar";

        // first way to remove using ascii value
        // String res = "";
        // for(int i=0;i<s.length();i++) {
        // if(((s.charAt(i)>=65 && s.charAt(i)<=90) ||
        // (s.charAt(i)>=97 && s.charAt(i)<=122) || (s.charAt(i)>=48 &&
        // s.charAt(i)<=57)))
        // res = res + s.charAt(i);
        // }
        // System.out.println(res);



        // Second way is to use replaceAll() method of string class
        s = s.replaceAll("[^a-zA-Z0-9]","");
        System.out.println(s);

    }
}
