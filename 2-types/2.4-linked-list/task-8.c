struct maybe_int64 list_at(const struct list* list, size_t idx) {
    if (idx < 0 || idx >= list_length(list)) {
        return none_int64;
    } else {
        for (size_t i = 0; i < idx; i = i + 1) {
            list = list -> next;
        }
        return some_int64(list->value);
    }
}