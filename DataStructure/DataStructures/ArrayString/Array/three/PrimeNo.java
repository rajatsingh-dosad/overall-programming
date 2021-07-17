
class PrimeNo {

    public static void main(String[] args) {
        
        int num = 24;

        int flag = 1;
        for(int i=2;i<num/2;i++) {

            if(num%i==0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            System.out.println("Number is prime");
        else
            System.out.println("Number is not prime");
    }
}