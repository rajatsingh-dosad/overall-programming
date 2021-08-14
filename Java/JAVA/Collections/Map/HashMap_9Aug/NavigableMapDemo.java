
import java.util.*;

class NavigableMapDemo {
    
    public static void main(String[] args) {
        
        TreeMap<Integer,String> host = new TreeMap<>();

        // host.put(2000,"Australia");     //sydney
        // host.put(2016,"Brazil");        //Rio
        // host.put(2004,"Greece");        //Athens
        // host.put(2012,"UK");            //London
        // host.put(2008,"China");         //Beijing

        // System.out.println(host);

        // //firstKey
        // System.out.println(host.firstKey());

        // //firstEntry
        // System.out.println(host.firstEntry());

        // //lastKey
        // System.out.println(host.lastKey());

        // //lastEntry
        // System.out.println(host.lastEntry());

        // //higherKey
        // System.out.println(host.higherKey(2008));   //returns only one key after the given key

        // //higherEntry
        // System.out.println(host.higherEntry(2008)); //returns only one key with value after the given key

        // //lowerKey
        // System.out.println(host.lowerKey(2008));    //returns only one key before the given key

        // //lowerEntry
        // System.out.println(host.lowerEntry(2008));

        // //ceilingKey                                
        // System.out.println(host.ceilingKey(2010));

        // //floorKey
        // System.out.println(host.floorKey(2008));

        // //pollFirstEntry
        // System.out.println(host.pollFirstEntry());
        // System.out.println(host);

        // //pollLastEntry
        // System.out.println(host.pollLastEntry());
        // System.out.println(host);


        host.put(2000,"Australia");     //sydney
        host.put(2016,"Brazil");        //Rio
        // host.put(2004,"Greece");        //Athens
        // host.put(2012,"UK");            //London
        host.put(2008,"China");         //Beijing

        System.out.println(host);

        //firstKey
        System.out.println(host.firstKey());

        //firstEntry
        System.out.println(host.firstEntry());

        //lastKey
        System.out.println(host.lastKey());

        //lastEntry
        System.out.println(host.lastEntry());

        //higherKey
        System.out.println(host.higherKey(2008));   //returns only one key after the given key

        //higherEntry
        System.out.println(host.higherEntry(2008)); //returns only one key with value after the given key

        //lowerKey
        System.out.println(host.lowerKey(2016));    //returns only one key before the given key

        //lowerEntry
        System.out.println(host.lowerEntry(2016));

        //ceilingKey                                
        System.out.println(host.ceilingKey(2010));

        //floorKey
        System.out.println(host.floorKey(2010));

        //pollFirstEntry
        System.out.println(host.pollFirstEntry());
        System.out.println(host);

        //pollLastEntry
        System.out.println(host.pollLastEntry());
        System.out.println(host);
    }
}
