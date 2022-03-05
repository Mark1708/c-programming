struct maybe_int64 maybe_read_int64() {
    int64_t res;
    if (scanf("%" SCNd64, &res) == 1) {
        return some_int64(res);
    } else {
        return none_int64;
    }
}