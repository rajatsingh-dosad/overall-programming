class ReplacewholeString {

    public static void main(String[] args) {
        String s1 = "Hello";

        // FIrst way using toArray()
        // char [] arr = s1.toCharArray();
        
        // String s2 = new String(arr);
        // System.out.println(s2);
        

        
        
        // Second way using charAt()
        // for(int i=s1.length()-1;i>=0;i--) {

        // System.out.print(s1.charAt(i));
        // }
        // System.out.println();

        
        
        //Using stringBuffer or stringBuilder
        StringBuffer sb = new StringBuffer(s1);
        
        System.out.println(sb.reverse());
        s1 = sb.toString();
        System.out.println(s1);
    }
        
}