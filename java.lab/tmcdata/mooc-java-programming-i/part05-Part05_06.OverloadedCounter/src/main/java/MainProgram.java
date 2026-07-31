
public class MainProgram {

    public static void main(String[] args) {

        Counter counter1 = new Counter();
        Counter counter2 = new Counter(2);

        System.out.println(counter1.value());
        System.out.println(counter2.value());

        counter1.increase();
        counter1.increase(3);
        counter2.decrease();
        System.out.println(counter1.value());
        System.out.println(counter2.value());

    }
}
