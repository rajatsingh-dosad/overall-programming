public class replaceCharWIthItsOccurence {

    public static void main(String[] args) {

        String s = "OPENTEXT";
        char var = 'T';
        
        
        
        //Using for loop and using ascii value
        // int temp = 49;
        // char [] arr = s.toCharArray();
        // for(int i=0;i<arr.length;i++) {

        //         if(arr[i]==var) {
        //             arr[i] = (char)temp;
        //      
        //             temp++;
        //         }
        // }
        // System.out.println(new String(arr));


        
        //Using for loop and replace method
        int cnt = 1;
        for(int i=0;i<s.length();i++) {

            char ch = s.charAt(i);
            if(ch==var) {
                s = s.replace(String.valueOf(var),String.valueOf(cnt));
                cnt++;
            }
        }
        System.out.println(s);
    }
}
