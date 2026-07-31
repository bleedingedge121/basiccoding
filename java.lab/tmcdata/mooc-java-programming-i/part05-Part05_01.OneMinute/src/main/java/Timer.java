public class Timer {
    private ClockHand hthSeconds;
    private ClockHand seconds;

    public Timer() {
        this.hthSeconds = new ClockHand(100);
        this.seconds = new ClockHand(60);

    }

    public void advance() {
        this.hthSeconds.advance();

        if (this.hthSeconds.value() == 0) {
            this.seconds.advance();
        }

    }

    public String toString() {
        return seconds + ":" + hthSeconds;

    }

}
