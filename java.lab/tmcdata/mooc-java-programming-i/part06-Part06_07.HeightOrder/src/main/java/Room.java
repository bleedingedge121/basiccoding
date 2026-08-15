import java.util.ArrayList;

public class Room {

    private ArrayList<Person> persons;

    public Room() {
        this.persons = new ArrayList<>();
    }

    public void add(Person person) {
        this.persons.add(person);
    }

    public boolean isEmpty() {
        return this.persons.isEmpty();
    }

    public ArrayList<Person> getPersons() {
        return this.persons;
    }

    public Person shortest() {
        if (this.persons.isEmpty()) {
            return null;
        }

        Person ReturnObject = this.persons.get(0);

        for (Person person : this.persons) {
            if (person.getHeight() < ReturnObject.getHeight()) {
                ReturnObject = person;
            }
        }

        return ReturnObject;
    }

    public Person take() {
        if (this.persons.isEmpty()) {
            return null;
        }

        Person shortest = this.shortest();
        this.persons.remove(shortest);
        return shortest;
    }
}
