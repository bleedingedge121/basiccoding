
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

    public String toString() {
        if (elements.isEmpty()) {
            return "The collection " + name + " is empty.";
        }

        String result = "The collection " + name + " has "
                + elements.size()
                + (elements.size() == 1 ? " element:\n" : " elements:\n");

        for (String element : elements) {
            result = result + element + "\n";
        }

        return result.trim();
    }

}
