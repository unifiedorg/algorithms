#include <stdio.h>
#include <iostream>
using namespace std;

int i, v, num1 = 0, num2 = 1, temp;

int main() {
    cout<<"Enter the number of Fibonacci numbers you want :"<<endl;
    scanf("%d", &v);
    printf("Fibonacci nums : ");

    for(i; i <= v; i++) {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        cout<<num1<<" ,";
    }

    return 0;
}