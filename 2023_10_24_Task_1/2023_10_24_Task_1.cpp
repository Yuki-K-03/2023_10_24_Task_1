#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int count = 0;
    int Divisor = 0;

    cin >> num;

    for (int j = 1; j <= num; j+=2) {
        for (int i = 1; i <= j; i++) {
            if (j % i == 0) {
                count++;
            }
        }
        if (count == 8) {
            printf("%d ", j);
            Divisor++;
        }
        count = 0;
    }
    printf("\n合計%d個\n", Divisor);
}