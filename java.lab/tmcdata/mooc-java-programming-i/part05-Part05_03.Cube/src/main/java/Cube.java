public class Cube {
    private int a;

    public Cube(int edgeLength) {
        this.a = edgeLength;

    }

    public int volume() {
        return a * a * a;
    }

    public String toString() {
        return "The length of the edge is" + this.a + "and the volume " + this.volume();
    }

}
