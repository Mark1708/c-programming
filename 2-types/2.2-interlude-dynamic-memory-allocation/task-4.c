// Вам доступны эти функции из прошлых заданий
size_t read_size();
void array_int_fill(int64_t* array, size_t size);

int64_t* array_int_read(size_t* size);

int64_t** marray_read(size_t* rows, size_t** sizes) {
    *rows = read_size();
    if (*rows > 0) {
        int64_t** marray = malloc(sizeof(int64_t*) * *rows);
        *sizes = malloc(sizeof( size_t ) * *rows);
        for (size_t i = 0; i < *rows; i++) {
            *(marray + i) = array_int_read((*sizes) + i);
        }
        return marray;
    }
  
    return NULL;
}

void marray_print(int64_t** marray, size_t* sizes, size_t rows) {
    for(size_t i = 0; i < rows; i++) {
        array_int_print(marray[i], sizes[i]);
        print_newline();
    }
}