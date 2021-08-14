
//Methods of TreeMap

import java.util.*;

class OlympicHost {

    public static void main(String[] args) {
        
        TreeMap<Integer,String> host = new TreeMap<>();

        host.put(2000,"Australia");     //sydney
        host.put(2016,"Brazil");        //Rio
        host.put(2004,"Greece");        //Athens
        host.put(2012,"UK");            //London
        host.put(2008,"China");         //Beijing

        System.out.println(host);

        //putIfAbsent()
        host.putIfAbsent(2020, "Japan");    //Tokyo

        System.out.println(host);

        // //entrySet()
        // System.out.println(host.entrySet());

        // //keySet()
        // System.out.println(host.keySet());

        // //values()
        // System.out.println(host.values());

        //get()
        System.out.println(host.get(2020));

        //getOrDefault
        System.out.println(host.getOrDefault(2012, "France"));  //o/p: UK
        System.out.println(host.getOrDefault(2024, "France"));  //o/p: France   (if key is not present it returns the default value given)

        //remove
        System.out.println(host.remove(2008));
        System.out.println(host);

        //replace
        System.out.println(host.replace(2012, "London"));
        System.out.println(host);

        //replace(key,oldVal,newVal)        // replaces oldval with new Value
        System.out.println(host.replace(2012, "London","UK"));
        System.out.println(host);

    }
}
