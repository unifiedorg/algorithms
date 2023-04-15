public class algorithm {
    public static void main(String[] args) {
        int num,
            num1 = 0,
            num2 = 1,
            temp;
        num = Integer.parseInt(args[0]);

        System.out.println("Fibonacci :");

        for(int i = 1; i <= num; i++) {
            System.out.println(num1 + " ");
            temp = num1 + num2;
            num1 = num2;
            num2 = temp;
        }
    }
}