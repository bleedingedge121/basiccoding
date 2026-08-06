
public class PaymentCard {

    private double balance;

    public PaymentCard(double balance) {
        this.balance = balance;
    }

    public double balance() {
        return this.balance;
    }

    public void addMoney(double increase) {
        this.balance += increase;
    }

    public boolean takeMoney(double amount) {
        // implement the method so that it only takes money from the card if

        if (balance >= amount) {
            // the balance is at least the amount parameter.
            balance = balance - amount;
            return true;
        } else {
            return false;
        }

        // returns true if successful and false otherwise

    }
}
