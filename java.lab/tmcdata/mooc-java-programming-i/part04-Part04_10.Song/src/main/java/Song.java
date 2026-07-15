public class Song {

    private String name;
    private int lengthSeconds;

    public Song(String name, int length) {
        this.name = name;
        this.lengthSeconds = length;
    }

    public String name() {
        return name;
    }

    public int length() {
        return lengthSeconds;
    }

}
