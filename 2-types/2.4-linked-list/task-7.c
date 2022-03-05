int64_t list_sum(const struct list* list) {
    int64_t sum = 0;
    while (list) {
        sum += list->value;
        list = list->next;
    }
    return sum;
}