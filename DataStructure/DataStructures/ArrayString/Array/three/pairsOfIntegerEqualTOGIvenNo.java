public class PairsOfInteger {
    
    public static void main(String[] args) {
        
        int arr[] = {2,6,3,9,11,-2,11};
        int sum = 9;

        for(int i=0;i<arr.length;i++) {

            for(int j=i+1;j<arr.length;j++) {

                if(arr[i]+arr[j]==sum) {
                    System.out.println("The elements are "+arr[i]+" and "+arr[j]);
                }
            }
        }
    }

}

