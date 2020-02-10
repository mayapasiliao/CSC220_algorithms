// A mergesort function which makes three recursive calls of length n/3 on an array of size n, and then merges three sorted
// arrays into one.

#include <iostream>

void merge_sort(int *a, int *aux, int length);

int main() {
    return 0;
}

void merge_sort(int *a, int *aux, int length) {
    int i = 0, j1, j2, j3, temp;
    if(length > 1) {
        if(length == 2) {
            if(*a > *(a+1)) {
                temp = *a;
                *a = *(a+1);
                *(a+1) = temp;
            }
            return;
        }
        merge_sort(a, aux, length/3);
        merge_sort(a + (length/3), aux, length/3);
        merge_sort(a + (2*(length/3)), aux, length - (2 * (length/3)));
        for(i = 0, j1 = 0, j2 = (length/3), j3 = (2*(length/3)); i < length; ) {
            if(j1 < (length/3) && j2 < (2*(length/3)) && j3 < length) {
                if(a[j1] < a[j2]) {
                    if(a[j1] < a[j3]) aux[i++] = a[j1++];
                    else aux[i++] = a[j3++];
                }
                else {
                    if(a[j2] < a[j3]) aux[i++] = a[j2++];
                    else aux[i++] = a[j3++];
                }
            }
            if(j1 == (length/3) && j2 < (2*(length/3)) && j3 < length) {
                if(a[j2] < a[j3]) aux[i++] = a[j2++];
                else aux[i++] = a[j3++];
            }
            if(j1 < (length/3) && j2 == (2*(length/3)) && j3 < length) {
                if (a[j1] < a[j3]) aux[i++] = a[j1++];
                else aux[i++] = a[j3++];
            }
            if(j1 < (length/3) && j2 < (2*(length/3)) && j3 == length) {
                if (a[j1] < a[j2]) aux[i++] = a[j1++];
                else aux[i++] = a[j2++];
            }
            if(j1 < (length/3) && j2 == (2*(length/3)) && j3 == length) {
                aux[i++] = a[j1++];
            }
            if(j1 == (length/3) && j2 < (2*(length/3)) && j3 == length) {
                aux[i++] = a[j2++];
            }
            if(j1 == (length/3) && j2 == (2*(length/3)) && j3 < length) {
                aux[i++] = a[j3++];
            }
        }
        for(i = 0; i < length; i++) {a[i] = aux[i];}
    }
}
