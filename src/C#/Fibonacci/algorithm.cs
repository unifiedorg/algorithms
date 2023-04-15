using System;

public class algorithm {
    public int cal(int number) {
        int num1 = 0, num2 = 1, temp;
        while(number >= 0) {
            temp = num2;
            num2 = num2 + num1;
            num1 = temp;
            number--;
        }
        return num1;
    }
}