#include <stddef.h>

struct heap_array {

    /**  @brief Pointer to the end of the array. */
    void *end;

    /**  @brief Pointer to the start of the array. */
    void *start;

    /**  @brief The size of the array, which can be derived from `heap_array::end - heap_array::start`. */
    size_t size;

    /**
     * @brief Pointer to the last item in the array.
     * This is here as just cache for `heap_array::end - heap_array::element_size`.
     */
    void *last_item;

    // /**  @brief Pointer to the first item in the array. */
    // void *first_item;

};
