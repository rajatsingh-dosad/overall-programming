
//Methods of SortedMap

import java.util.*;

class SortedMapDemo {

    public static void main(String[] args) {
        
        SortedMap<String,String> s = new TreeMap<>();

        s.put("c++",".cpp");
        s.put("c",".c");
        s.put("python",".py");
        s.put("java",".java");

        System.out.println(s);

        //firstKey()
        System.out.println(s.firstKey());

        //lastKey()
        System.out.println(s.lastKey());


        //keySet()
        System.out.println(s.keySet());

        //values()
        System.out.println(s.values());

        //entrySet()
        System.out.println(s.entrySet());

        //headMap()
        System.out.println(s.headMap("python"));    //prints everything of its beginning excluding it

        //tailMap()
        System.out.println(s.tailMap("java"));      //prints everything after it including it

        //subMap()
        System.out.println(s.subMap("c","java"));   //prints the starting one and further excluding ending one
    }
    
}
