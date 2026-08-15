
import java.util.ArrayList;

public class SimpleCollection {

    private String name;
    private ArrayList<String> elements;

    public SimpleCollection(String name) {
        this.name = name;
        this.elements = new ArrayList<>();
    }

    public void add(String element) {
        this.elements.add(element);
    }

    public ArrayList<String> getElements() {
        return this.elements;
    }

    public String longest() {
        // return null if the collection is empty
        if (this.elements.isEmpty()) {
            return null;
        }

        // assume the first string is the longest
        String returnObject = this.elements.get(0);

        // go through the collection
        for (String str : this.elements) {
            // compare the length of each string
            // to the current longest string
            if (returnObject.length() < str.length()) {
                // if this string is longer, make it
                // the new longest string
                returnObject = str;
            }
        }

        // return the longest string
        return returnObject;
    }

}
