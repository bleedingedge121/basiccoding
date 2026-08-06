
import java.util.Objects;

public class Person {

    private String name;
    private SimpleDate birthday;
    private int height;
    private int weight;

    public Person(String name, SimpleDate birthday, int height, int weight) {
        this.name = name;
        this.birthday = birthday;
        this.height = height;
        this.weight = weight;
    }

    @Override

    // public boolean equals(Object compared) {
    // // if the variables are located in the same place, they are the same.
    // if (this == compared) {
    // return true;
    // }

    // // if the object is not instance of SimpleDate, the objects are not the same
    // if (!(compared instanceof Person)) {
    // return false;
    // }

    // // let's cast the object to SimpleDate
    // Person comparePerson = (Person) compared;

    // // if the object's values are the same, the objects are the same
    // if (Objects.equals(this.name, comparePerson.name)
    // && Objects.equals(this.birthday, comparePerson.birthday)
    // && this.height == comparePerson.height
    // && this.weight == comparePerson.weight) {

    // return true;
    // }

    // // other wise, the objects are not the same
    // return false;
    // }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Person other = (Person) obj;
        if (this.height != other.height) {
            return false;
        }
        if (this.weight != other.weight) {
            return false;
        }
        if (!Objects.equals(this.name, other.name)) {
            return false;
        }
        if (!Objects.equals(this.birthday, other.birthday)) {
            return false;
        }
        return true;
    }

}
