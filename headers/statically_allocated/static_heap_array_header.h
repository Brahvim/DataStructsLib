#include <stddef.h>
#include <stdbool.h>

#define DECLARE_STATIC_HEAP_ARRAY_STRUCT(type)	\
struct type##_static_heap_array;

#define DEFINE_STATIC_HEAP_ARRAY_STRUCT(type)	\
struct type##_static_heap_array {				\
	type *end;        							\
	type *start;    							\
	size_t size;     							\
	type *last_item; 							\
};												\

// Functions returning `type##_static_heap_array*`s return the instance they're passed.

#define DECLARE_STATIC_HEAP_ARRAY_FUNCTIONS(type)																														\
																																										\
/**  */								 																																	\
bool type##_static_heap_array_create(struct type##_static_heap_array *array, size_t element_size, size_t initial_capacity);												\
																																										\
/**  */								 																																	\
bool type##_static_heap_array_insert(struct type##_static_heap_array *array, const type *element);																		\
																																										\
/**  */								 																																	\
type type##_static_heap_array_remove(struct type##_static_heap_array *array, const type *element);																		\
																																										\
/**  */								 																																	\
type type##_static_heap_array_consume(struct type##_static_heap_array *array, const type *element);																		\
																																										\
/**  */								 																																	\
type type##_static_heap_array_supply(struct type##_static_heap_array *array, const type *element);																		\
																																										\
/**  */								 																																	\
bool type##_static_heap_array_resize(struct type##_static_heap_array *array, size_t new_capacity);																		\
																																										\
/**  */								 																																	\
bool type##_static_heap_array_free(struct type##_static_heap_array *array);																								\
																																										\
/**  */								 																																	\
type type##_static_heap_array_push(struct type##_static_heap_array *array); 																							\
																																										\
/**  */								 																																	\
struct type##_static_heap_array* type##_static_heap_array_pop(struct type##_static_heap_array *array); 																	\
																																										\
/**  */								 																																	\
struct type##_static_heap_array* type##_static_heap_array_clear(struct type##_static_heap_array *array); 																\
																																										\
/**  */								 																																	\
bool type##_static_heap_array_empty(struct type##_static_heap_array *array); 																							\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_size(struct type##_static_heap_array *array); 																							\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_capacity(struct type##_static_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_reserve(struct type##_static_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_trim(struct type##_static_heap_array *array); 																							\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_sort(struct type##_static_heap_array *array, bool (*comparison_function)(type *current_element, type *other_element));					\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_map(struct type##_static_heap_array *array, void (*mapping_function)(type *element)); 													\
																																										\
/**  */								 																																	\
type* type##_static_heap_array_find(struct type##_static_heap_array *array); 																							\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_last_index_of(struct type##_static_heap_array *array, type const *value); 																\
																																										\
/**  */								 																																	\
size_t type##_static_heap_array_first_index_of(struct type##_static_heap_array *array, type const *value); 																\
																																										\
/**  */								 																																	\
struct type##_static_heap_array* type##_static_heap_array_filter_after_copy(struct type##_static_heap_array *array, bool (*filtering_function)(type *element));			\
																																										\
/**  */								 																																	\
void type##_static_heap_array_filter(struct type##_static_heap_array *array, bool (*filtering_function)(type *element)); 												\
																																										\
/**  */								 																																	\
struct type##_static_heap_array* type##_static_heap_array_reverse(struct type##_static_heap_array *array);

