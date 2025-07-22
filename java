public class Calculator {
    public static double calculator(double a, double b, String operation) {
        switch (operation) {
            case "add":
                return a + b;
            case "subtract":
                return a - b;
            case "multiply":
                return a * b;
            case "divide":
                if (b == 0) throw new IllegalArgumentException("Cannot divide by zero");
                return a / b;
            default:
                throw new IllegalArgumentException("Unsupported operation");
        }
    }
    public static void main(String[] args) {
        try {
            System.out.println("Test 1 (Multiply): " + calculator(4, 5, "multiply")); // Expected: 20
            System.out.println("Test 2 (Subtract): " + calculator(9, 2, "subtract")); // Expected: 7
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
