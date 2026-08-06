
public class Apartment {

    private int rooms;
    private int squares;
    private int princePerSquare;

    public Apartment(int rooms, int squares, int pricePerSquare) {
        this.rooms = rooms;
        this.squares = squares;
        this.princePerSquare = pricePerSquare;
    }

    private int price() {
        return princePerSquare * squares;
    }

    public boolean largerThan(Apartment compared) {
        return this.squares > compared.squares;
    }

    public boolean moreExpensiveThan(Apartment compared) {
        return this.price() > compared.price();

    }

    public int priceDifference(Apartment compared) {
        // Math.abs returns the absolute value
        return Math.abs(this.price() - compared.price());

    }

}
