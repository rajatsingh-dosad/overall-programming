public class Anagram {

    public static void main(String[] args) {

        String s1 = "aab$%";
        String s2 = "$%aba";


        // Using two for LOop
        // boolean isAnagram = false;
        // boolean visited[] = new boolean[s2.length()];

        // if (s1.length() != s2.length()) {
        //     System.out.println("Not anagram");
        // } else {

        //     for (int i = 0; i < s1.length(); i++) {
        //         char c = s1.charAt(i);
        //         isAnagram = false;

        //         for (int j = 0; j < s2.length(); j++) {

        //             if (s2.charAt(j) == c && !visited[j]) {
        //                 visited[j] = true;
        //                 isAnagram = true;
        //                 break;
        //             }

        //         }
        //         if (!isAnagram) {
        //             break;
        //         }
        //     }
            
        //     if (isAnagram) {
        //         System.out.println("Strings are anagram of each other");
        //     } else
        //         System.out.println("Not Anagram");
        // }
        




        

        //Using Ascii Table
        
        // int flag = 1;
        // int al[] = new int[256];

        // for(char c: s1.toCharArray()) {

        //     int index = (int)c;
        //     al[index]++;

        // }

        // for(char c: s2.toCharArray()) {

        //     int index = (int)c;
        //     al[index]--;

        // }

        // for(int i=0;i<256;i++) {

        //     if(al[i] != 0) {
        //         flag = 0;
        //         break;
        //     }
        // }
        // if(flag ==1) {
        //     System.out.println("Strings are anagram");
        // }
        // else
        //     System.out.println("Strings are not anagram");

    }

}
