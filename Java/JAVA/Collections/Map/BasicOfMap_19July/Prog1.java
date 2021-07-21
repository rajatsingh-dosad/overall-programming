
import java.util.*;

class Employee {

    public static void main(String[] args) {
        
        Map<Integer,String> map = new HashMap<>();

        map.put(108,"Ashish");
        map.put(128,"Kanha");
        map.put(78,"Rahul");
        map.put(128,"Badhe");
        map.put(199,"Rahul");

        System.out.println(map);

    }
}

//We cannot insert a duplicate key in the Map but we can insert a duplicate value in it
//It doesn't give any error if we insert a duplicate key but what it does is it replaces the element of the corresponding key.