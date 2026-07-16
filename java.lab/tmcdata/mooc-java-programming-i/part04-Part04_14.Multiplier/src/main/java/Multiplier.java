public class Multiplier {

    private int initialNumber;

    public Multiplier(int number) {
        this.initialNumber = number;
    }

    public int multiply(int number) {
        number = initialNumber * number;
        return number;
    }
}
