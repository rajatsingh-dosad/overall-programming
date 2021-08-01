
// Methods of Map.Entry

import java.util.*;

class Prog2 {
    
    public static void main(String[] args) {
        
        Map<String,String> m = new HashMap<>();

        m.put("Amazon","Jeff Bezos");
        m.put("Microsoft","Bill Gates");
        m.put("Apple","Steve Jobs");
        m.put("SpaceX","Elon Musk");
        m.put("Facebook","Mark Zuckerburg");

        System.out.println(m);

        Set<Map.Entry<String,String>> entry = m.entrySet();

        Iterator<Map.Entry<String,String>> itr = entry.iterator();

        while(itr.hasNext()) {

            Map.Entry<String,String> actuaEntry = itr.next();
            
            System.out.println(actuaEntry.getKey()+" - "+actuaEntry.getValue());            

            if(actuaEntry.getKey().equals("Apple")) {
                actuaEntry.setValue("Tim Cook");
            }
        }

        System.out.println(m);

    }

}
