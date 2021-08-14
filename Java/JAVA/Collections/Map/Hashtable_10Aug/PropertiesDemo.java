
import java.util.*;
import java.io.*;

class PropertiesDemo {

    public static void main(String[] args) throws IOException {
        
        Properties p = new Properties();
        
        FileInputStream fis = new FileInputStream("carNumber.properties");

        p.load(fis);

        System.out.println(p);

        p.setProperty("Akshay", "6958");

        FileOutputStream fos = new FileOutputStream("carNumber.properties");
        p.store(fos,"Updated by Shashi");

        System.out.println(p);

        // p.setProperty("Rajat", "6802");
        // p.store(fos,"Updated by Rajat");

        // System.out.println(p);
    }
}
