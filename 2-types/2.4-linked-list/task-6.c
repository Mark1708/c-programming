void list_add_back(struct list** old, int64_t value) {
    struct list* new = node_create(value);
    struct list* penult = list_last(*old);
    if (penult) {
        penult->next = new;
    } else {
        *old = new;
    }
}