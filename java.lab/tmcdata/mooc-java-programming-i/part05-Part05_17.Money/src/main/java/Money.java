
public class Money {

    private final int euros;
    private final int cents;

    public Money(int euros, int cents) {

        if (cents > 99) {
            euros = euros + cents / 100;
            cents = cents % 100;
        }

        this.euros = euros;
        this.cents = cents;
    }

    public int euros() {
        return this.euros;
    }

    public int cents() {
        return this.cents;
    }

    public Money plus(Money addition) {

        int euroSum = addition.euros + this.euros;
        int centsSum = addition.cents + this.cents;

        Money newMoney = new Money(euroSum, centsSum);
        return newMoney;
    }

    public Money minus(Money decreaser) {
        // int euroDiff = this.euros - decreaser.euros;
        // int centsDiff = this.cents - decreaser.cents;

        // if (centsDiff < 0) {
        // if (euroDiff > 0) {
        // euroDiff--;
        // centsDiff = 100 + centsDiff;
        // }
        // if (euroDiff <= 0) {
        // euroDiff = 0;
        // centsDiff = 0;
        // }
        // }
        // if (euroDiff < 0) {
        // euroDiff = 0;
        // centsDiff = 0;
        // }

        // Money newMoney = new Money(euroDiff, centsDiff);
        // return newMoney;
        int euros = this.euros - decreaser.euros();
        int cents = this.cents - decreaser.cents();

        if (cents < 0) {
            cents = cents + 100;
            euros = euros - 1;
        }

        // if the value becomes negative, return zero
        if (euros < 0) {
            return new Money(0, 0);
        }

        return new Money(euros, cents);
    }

    public boolean lessThan(Money compared) {

        // if (this.euros < compared.euros) {
        // return true;
        // } else if (this.euros > compared.euros) {
        // return false;
        // } else if (this.cents < compared.cents) {
        // return true;
        // }
        // return false;

        return (100 * this.euros + this.cents) < (100 * compared.euros() + compared.cents());
    }

    @Override
    public String toString() {
        String zero = "";
        if (this.cents < 10) {
            zero = "0";
        }

        return this.euros + "." + zero + this.cents + "e";
    }

}
