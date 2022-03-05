size_t list_length(const struct list* list) {
    size_t length = 0;
    while (list) {
        struct list* next = list->next;
        list = next;
        length = length + 1;
    }
    return length;
}