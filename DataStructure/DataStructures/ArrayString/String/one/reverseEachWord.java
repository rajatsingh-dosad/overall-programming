public class reverseEachWord {
    
    public static void main(String[] args) {
        
        String s = "java code";


        //Using split method
        // String arr[] = s.split(" ");
        // for(int i=0;i<arr.length;i++) {
        //     String tmp = arr[i];
        //     for(int j=tmp.length()-1;j>=0;j--) {
        //         System.out.print(tmp.charAt(j));
        //     }
        //     System.out.print(" ");
        // }
        // System.out.println();


        
        //Using method StringBuffer
        String arr[] = s.split(" ");
        String s2 = " ";
        for(int i=0;i<arr.length;i++) {

            StringBuilder sb = new StringBuilder(arr[i]);
            sb.reverse();
            s2 += sb.toString()+" ";

        }

        System.out.println(s2.trim());
    }
}


