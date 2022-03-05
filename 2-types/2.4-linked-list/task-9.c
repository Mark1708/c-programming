void list_add_front(struct list** old, int64_t value);

// создать перевернутую копию списка
struct list* list_reverse(const struct list* list) {
    struct list* reverse = NULL;
    while (list != NULL) {
        list_add_front(&reverse, list->value);
        list = list->next;
    }
    return reverse;
}