#include <stddef.h>
#include <stdbool.h>

// Functions returning `static_##type##_heap_array*`s actually return the instance they're dealing with.

#define DECLARE_STATIC_HEAP_ARRAY_STRUCT(type)																															\
struct static_##type##_heap_array {																																		\
	type *end;        																																					\
	type *start;    																																					\
	size_t size;     																																					\
	type *last_item; 																																					\
};																																										\
																																										\
/**  */								 																																	\
bool static_##type##_heap_array_create(struct static_##type##_heap_array *array, size_t element_size, size_t initial_capacity);											\
																																										\
/**  */								 																																	\
bool static_##type##_heap_array_insert(struct static_##type##_heap_array *array, const type *element);																	\
																																										\
/**  */								 																																	\
type static_##type##_heap_array_remove(struct static_##type##_heap_array *array, const type *element);																	\
																																										\
/**  */								 																																	\
type static_##type##_heap_array_consume(struct static_##type##_heap_array *array, const type *element);																	\
																																										\
/**  */								 																																	\
type static_##type##_heap_array_supply(struct static_##type##_heap_array *array, const type *element);																	\
																																										\
/**  */								 																																	\
bool static_##type##_heap_array_resize(struct static_##type##_heap_array *array, size_t new_capacity);																	\
																																										\
/**  */								 																																	\
bool static_##type##_heap_array_free(struct static_##type##_heap_array *array);																							\
																																										\
/**  */								 																																	\
type static_##type##_heap_array_push(struct static_##type##_heap_array *array); 																						\
																																										\
/**  */								 																																	\
struct static_##type##_heap_array* static_##type##_heap_array_pop(struct static_##type##_heap_array *array); 															\
																																										\
/**  */								 																																	\
struct static_##type##_heap_array* static_##type##_heap_array_clear(struct static_##type##_heap_array *array); 															\
																																										\
/**  */								 																																	\
bool static_##type##_heap_array_empty(struct static_##type##_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_size(struct static_##type##_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_capacity(struct static_##type##_heap_array *array); 																					\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_reserve(struct static_##type##_heap_array *array); 																					\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_trim(struct static_##type##_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_sort(struct static_##type##_heap_array *array, bool (*comparison_function)(type *current_element, type *other_element));				\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_map(struct static_##type##_heap_array *array, void (*mapping_function)(type *element)); 												\
																																										\
/**  */								 																																	\
type* static_##type##_heap_array_find(struct static_##type##_heap_array *array); 																						\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_last_index_of(struct static_##type##_heap_array *array, type const *value); 															\
																																										\
/**  */								 																																	\
size_t static_##type##_heap_array_first_index_of(struct static_##type##_heap_array *array, type const *value); 															\
																																										\
/**  */								 																																	\
struct static_##type##_heap_array* static_##type##_heap_array_filter_after_copy(struct static_##type##_heap_array *array, bool (*filtering_function)(type *element));	\
																																										\
/**  */								 																																	\
void static_##type##_heap_array_filter(struct static_##type##_heap_array *array, bool (*filtering_function)(type *element)); 											\
																																										\
/**  */								 																																	\
struct static_##type##_heap_array* static_##type##_heap_array_reverse(struct static_##type##_heap_array *array);
