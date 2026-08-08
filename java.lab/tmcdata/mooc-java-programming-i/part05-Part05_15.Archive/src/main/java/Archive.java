import java.util.Objects;

public class Archive {

    private String name;
    private String identifier;

    public Archive(String name, String identifier) {
        this.name = name;
        this.identifier = identifier;
    }

    public String getName() {
        return this.name;
    }

    public String getIdentifier() {
        return this.identifier;
    }

    @Override
    public boolean equals(Object compared) {
        // if the variables are located in the same position, they are equal
        if (this == compared) {
            return true;
        }

        // if the compared object is not of type Bird, the objects are not equal
        if (!(compared instanceof Archive)) {
            return false;
        }

        // convert the object to a Bird object
        Archive comparedArchive = (Archive) compared;

        // if the values of the object variables are equal, the objects are, too
        return this.identifier.equals(comparedArchive.identifier);

        /*
         * // the comparison of names above is equal to
         * // the following code
         * 
         * if (this.name.equals(comparedBird.name)) {
         * return true;
         * }
         * 
         * // otherwise the objects are not equal
         * return false;
         */
    }

    // // This method was automatically created with the "insert code" function of
    // // Netbeans
    // @Override
    // public boolean equals(Object obj) {
    // if (this == obj) {
    // return true;
    // }
    // if (obj == null) {
    // return false;
    // }
    // if (getClass() != obj.getClass()) {
    // return false;
    // }
    // final Item other = (Item) obj;
    // if (!Objects.equals(this.identifier, other.identifier)) {
    // return false;
    // }
    // return true;
    // }

    public String toString() {

        return this.identifier + ":" + " " + this.name;
    }
}
