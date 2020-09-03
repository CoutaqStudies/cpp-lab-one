#include <iostream>
#include <math.h>

double processArray(double pDouble[15], const int n, int i, int i1);

using namespace std;

//Объявить массив из n=15 целых чисел, проинициализируйте нулями. Функция
//processArray() должна заполнить массив членами арифметической прогрессии с
//начальным элементом a1 и шагом d (ввести с клавиатуры), подсчитать и вернуть cnt –
//количество всех двузначных элементов массива, а также сформировать выходной
//массив, который содержит все элементы исходного, кроме тех, сумма цифр которых
//равна 10. Вывести на экран массивы.

int main() {
    const int n = 15;
    double a[n] = { 0.0 };
    srand(0);
    double result = processArray(a, n, 10, 9);
    return 0;
}

double processArray(double array[], const int n, int a1, int d) {
    int cnt = 0;
    int smallerArrayLength;
    printf("%s\n", "first array: ");
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
    printf("%s\n", "second array: ");
    int smallerArray[smallerArrayLength];
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