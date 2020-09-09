#include <iostream>
#include <cmath>
#include "vector"

double processArray(double array[15], const int n, int a1, int d);

double taskOne();

using namespace std;



int main() {
    taskOne();
    return 0;
}

#pragma region Task One
//Объявить массив из n=15 целых чисел, проинициализируйте нулями. Функция
//processArray() должна заполнить массив членами арифметической прогрессии с
//начальным элементом a1 и шагом d (ввести с клавиатуры), подсчитать и вернуть cnt –
//количество всех двузначных элементов массива, а также сформировать выходной
//массив, который содержит все элементы исходного, кроме тех, сумма цифр которых
//равна 10. Вывести на экран массивы.
double taskOne() {
    const int n = 15;
    double a[n] = { 0.0 };
    srand(0);
    int a1, d;
    printf("a1: ");
    scanf("%d", &a1);
    printf("d: ");
    scanf("%d", &d);
    double result = processArray(a, n, a1, d);
    return result;
}
double processArray(double array[], int n, int a1, int d) {
    int cnt = 0;
    int smallerArrayLength = 0;
    printf("first array:\n");
    for(int i = 0; i<=n; ++i){
        array[i] = a1+d*i;
        printf("%g ", array[i]);
        if(array[i]>9)
            ++cnt;
        int num = (fmod(array[i],10)+array[i]/10);
        if(num!=10)
            smallerArrayLength++;
    }
    printf("\ntwo digit nums: %i\n", cnt);
    printf("second array:\n");
    static const int array_size = smallerArrayLength;
    int smallerArray[array_size ];
    for(int i = 0, j = 0; i<=n; ++i){
        int num = (fmod(array[i],10)+array[i]/10);
        if(num!=10){
            smallerArray[j] = array[i];
            printf("%i ", smallerArray[j]);
            ++j;
        }
    }
   printf("\n%s\n", "end");
}
#pragma endregion
#pragma region Task Two
#pragma endregion