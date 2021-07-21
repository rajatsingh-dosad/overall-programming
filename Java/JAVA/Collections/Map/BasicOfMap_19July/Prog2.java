
// Writing user defined class with Map

import java.util.*;

class Company {
    
    String compName;
    double salary;

    Company(String compName,double salary) {

        this.compName = compName;
        this.salary = salary;
    }

    public String toString() {

        return "(" + compName+" "+salary + ")";
    }

}

class Friends {

    public static void main(String[] args) {
        
        Map<String,Company> map = new HashMap<String,Company>();

        map.put("Ashish",new Company("GSLab",1000000));
        map.put("Rahul",new Company("BMC Software",1200000));
        map.put("Kanha",new Company("Infosys",1300000));
        map.put("Badhe",new Company("CarPro",800000));

        System.out.println(map);

    }
}
