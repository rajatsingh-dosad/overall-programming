
import java.util.*;

public class sortString {
    
    public static void main(String[] args) {
        
        String s  = "rock";


        //1) Using sort method
        // char []arr = s.toCharArray();
        // Arrays.sort(arr);
        // String s2 = new String(arr);
        // System.out.println(s2);




        //2) Without using sort method
        char [] arr  = s.toCharArray();
        for(int i=0;i<arr.length;i++) {

            for(int j=i+1;j<arr.length;j++) {

                if(arr[i] > arr[j]) {

                    char temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                }
            }
        }
 
        System.out.println(new String(arr));

    }
}
