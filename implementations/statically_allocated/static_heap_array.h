#include "data_structs_macros.h"
#include "statically_allocated/static_heap_array_header.h"

#ifdef __cplusplus
extern "C" {
#endif

#define USE_STATIC_HEAP_ARRAY_TYPE(t) CONCAT_TOKENS(int, t)

#ifdef STATIC_HEAP_ARRAY_TYPE

    bool STATIC_HEAP_ARRAY_TYPE_static_heap_array_create(
        struct USE_STATIC_HEAP_ARRAY_TYPE(_static_heap_array) *p_array
        , const size_t p_el_size
        , const size_t p_init_size) {

    }

#endif

#ifdef __cplusplus
}
#endif
