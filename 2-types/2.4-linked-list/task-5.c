struct list* list_last(struct list* list) {
    struct list* res = NULL;
    while (list != NULL) {
        res = list;
        list = list->next;
    }
    return res;
}