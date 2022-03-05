struct list* list_read() {
    struct list* l = NULL;
    struct list** plast = &l;

    for (;;) {
        const struct maybe_int64 i = maybe_read_int64();
        if (i.valid) {
            *plast = node_create(i.value);
            plast = &((**plast).next);
        } else {
            return l;
        }
    }

    return l;
}