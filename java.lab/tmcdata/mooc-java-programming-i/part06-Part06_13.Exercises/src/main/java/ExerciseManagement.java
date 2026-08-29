import java.util.ArrayList;

public class ExerciseManagement {

    private ArrayList<Exercise> exercises;

    public ExerciseManagement() {
        this.exercises = new ArrayList<>();
    }

    public ArrayList<Exercise> exerciseList() {
        return this.exercises;
    }

    public void add(String name) {
        this.exercises.add(new Exercise(name));
    }

    public void markAsCompleted(String name) {
        for (Exercise exercise : this.exercises) {
            if (exercise.getName().equals(name)) {
                exercise.markCompleted();
            }
        }
    }

    public boolean isCompleted(String name) {
        for (Exercise exercise : this.exercises) {
            if (exercise.getName().equals(name)) {
                return exercise.isCompleted();
            }
        }
        return false;
    }
}