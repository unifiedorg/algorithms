#include <stdio.h>>
#include <assert.h>

int algorithm(int num) {
    int i, num1 = 0, num2 = 1, temp;
    for(i = 0; i < num; i++) {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
}

int main() {
    int num_test_5 = algorithm(5);
    int num_test_69 = algorithm(69);

    assert(num_test_5 == 8);
    assert(num_test_69 == 117669030460994);
    
    return 0;
}