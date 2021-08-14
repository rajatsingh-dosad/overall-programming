
// Dictionary class and it's methods

import java.util.*;

class SpaceRide {

    public static void main(String[] args) {
        
        Dictionary<String,String> dict = new Hashtable<>();

        dict.put("Virgin Galentic", "Richard Branson");
        dict.put("Blue Origin", "Jeff Bezos");
        dict.put("SpaceX", "Elon Musk");

        System.out.println(dict);

        //size()
        System.out.println(dict.size());

        //isEmpty()
        System.out.println(dict.isEmpty());

        //get()
        System.out.println(dict.get("Blue Origin"));    
        System.out.println(dict.get("Blue"));   // if key is not present it returns null

        //remove()
        System.out.println(dict.remove("SpaceX"));
        System.out.println(dict);

        //elements()
        Enumeration itr1 = dict.elements();
        while(itr1.hasMoreElements()) {
            System.out.println(itr1.nextElement());
        }

         //keys()
         Enumeration itr2 = dict.keys();
         while(itr2.hasMoreElements()) {
             System.out.println(itr2.nextElement());
         }
 


    }
}
