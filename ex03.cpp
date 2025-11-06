#include<iostream>

using namespace std;

void min_max(int* tab, int size, int* min, int* max) {

    *min = tab[0];

    *max = tab[0];

    for (int i = 0; i < size; i++) {

        if (tab[i] < *min) *min = tab[i];

        if (tab[i] > *max) *max = tab[i];

    }

    cout << "min " << *min << endl;

    cout << "max " << *max << endl;

}

int main() {

    int t[] = { 2, 5, 1, 0, 7, 6, 9, 12 };

    int p;

    int d;

    min_max(t, 8, &p, &d);

    return 0;

}
 