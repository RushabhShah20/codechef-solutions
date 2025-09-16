
// Problem: Grades of Student
// Link to the problem: https://www.codechef.com/problems/LJAAS60
import java.util.Scanner;

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;
        num = scanner.nextInt(); // input first number
        if (num > 90) {
            System.out.println("A");
        } else if (num > 70) {
            System.out.println("B");
        } else if (num >= 40) {
            System.out.println("C");
        } else {
            System.out.println("F");
        }

        num = scanner.nextInt(); // input second number
        if (num > 90) {
            System.out.println("A");
        } else if (num > 70) {
            System.out.println("B");
        } else if (num >= 40) {
            System.out.println("C");
        } else {
            System.out.println("F");
        }

        num = scanner.nextInt(); // input third number
        if (num > 90) {
            System.out.println("A");
        } else if (num > 70) {
            System.out.println("B");
        } else if (num >= 40) {
            System.out.println("C");
        } else {
            System.out.println("F");
        }
    }
}
