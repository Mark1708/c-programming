struct heap_string {
  char* addr;
};

// скопировать в кучу
struct heap_string halloc(const char* s) {
    size_t length = 0;
    const char* ptr = s;
    while(*ptr != NULL) {
        length = length + 1;
        ptr++;
    }
    char* copy = malloc(sizeof(char) * (length + 1));
    for (size_t i = 0; i < length; i = i + 1) {
        copy[i] = s[i];
    }
    return (struct heap_string) {.addr = copy};
}

// освободить память
void heap_string_free(struct heap_string h){
  free(h.addr);
}