
import java.util.*;

class LangData {

	public static void main(String[] args) {


		SortedSet s = new TreeSet();
		
		s.add("Cpp");
		s.add("C");
		s.add("React");
		s.add("Python");
		s.add("Android");
		s.add("Java");

		//First()
		System.out.println(s.first());

		//last()
		System.out.println(s.last());

		//headSet(object)
		System.out.println(s.headSet("Cpp"));

		//tailSet(object)
		System.out.println(s.tailSet("Cpp"));

		//subSet(object1,object2)
		System.out.println(s.subSet("C","Python"));

	}
}
