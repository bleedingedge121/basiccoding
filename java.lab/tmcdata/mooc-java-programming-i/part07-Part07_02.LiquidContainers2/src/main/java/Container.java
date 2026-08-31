public class Container {

    private int water;

    public Container() {
        this.water = 0;

    }

    public int contains() {
        return this.water;
    }

    public void add(int amount) {
        if (amount > 0) {
            this.water += amount;

            if (this.water > 100) {
                this.water = 100;
            }
        }
    }

    public void remove(int amount) {
        if (amount > 0) {
            this.water -= amount;

            if (this.water < 0) {
                this.water = 0;
            }
        }
    }

    @Override
    public String toString() {
        return (this.water + "/100");
    }

}
