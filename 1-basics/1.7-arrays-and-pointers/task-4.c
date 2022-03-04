void array_reverse(int* array, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void array_reverse_ptr(int* array, int* limit) {
    for (int *first = array, *last = limit - 1; first < last; first++, last--) {
        int storage_prt = *first;
        *first = *last;
        *last = storage_prt;
    }
}