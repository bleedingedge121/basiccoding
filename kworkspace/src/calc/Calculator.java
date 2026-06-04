package calc;

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // number input

        System.out.println("Give the first number:");
        int n1 = Integer.valueOf(scanner.nextLine());

        System.out.println("Give the second number:");
        int n2 = Integer.valueOf(scanner.nextLine());

        // Operator

        System.out.println("Give the operator");
        String op = scanner.nextLine();
        // System.out.println("your op is " + op);

        // if else statement

        if (op.equals("+") | op.equals("add")) {
            System.out.println(n1 + " + " + n2 + " = " + (n1 + n2));
        }

        if (op.equals("-") | op.equals("subtract")) {
            System.out.println(n1 + " - " + n2 + " = " + (n1 - n2));
        }

        if (op.equals("/") | op.equals("divide")) {
            System.out.println(n1 + " / " + n2 + " = " + ((double) n1 / n2));

        }

        if (op.equals("*") | op.equals("multiply")) {
            System.out.println(n1 + " * " + n2 + " = " + (n1 * n2));

        }

        else {
            System.out.println("No correct operator");
        }

    }
}
