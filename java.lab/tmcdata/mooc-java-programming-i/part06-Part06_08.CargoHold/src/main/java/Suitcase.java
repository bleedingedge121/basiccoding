import java.util.ArrayList;

public class Suitcase {

    private int maxWeight;
    private ArrayList<Item> items;

    public Suitcase(int maxWeight) {
        this.maxWeight = maxWeight;
        this.items = new ArrayList<>();
    }

    public void addItem(Item item) {
        if (totalWeight() + item.getWeight() <= maxWeight) {
            this.items.add(item);
        }
    }

    public int totalWeight() {
        int weight = 0;

        for (Item item : items) {
            weight += item.getWeight();
        }

        return weight;
    }

    public void printItems() {
        for (Item item : items) {
            System.out.println(item);
        }
    }

    public Item heaviestItem() {
        if (items.isEmpty()) {
            return null;
        }

        Item heaviest = items.get(0);

        for (Item item : items) {
            if (item.getWeight() > heaviest.getWeight()) {
                heaviest = item;
            }
        }

        return heaviest;
    }

    @Override
    public String toString() {
        if (items.size() == 0) {
            return "no items (" + totalWeight() + " kg)";
        } else if (items.size() == 1) {
            return "1 item (" + totalWeight() + " kg)";
        } else {
            return items.size() + " items (" + totalWeight() + " kg)";
        }
    }

}
