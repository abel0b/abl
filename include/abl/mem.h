#ifndef ABLMEMORY__H
#define ABLMEMORY__H

#include <stdlib.h>

#if DEBUG
void* abl_malloc_aux(size_t size, const char* file, int line, const char* func);
void* abl_realloc_aux(void * ptr, size_t newsize, const char* file, int line, const char* func);
void abl_free_aux(void * ptr, const char* file, int line, const char* func);
#define abl_malloc(SIZE) abl_malloc_aux(SIZE, __FILE__, __LINE__, __func__)
#define abl_realloc(PTR, SIZE)  abl_realloc_aux(PTR, SIZE, __FILE__, __LINE__, __func__)
#define abl_free(PTR) abl_free_aux(PTR, __FILE__, __LINE__, __func__)
#else
void* abl_malloc_aux(size_t size);
void* abl_realloc_aux(void * ptr, size_t newsize);
void abl_free_aux(void * ptr);
#define abl_malloc abl_malloc_aux
#define abl_realloc abl_realloc_aux
#define abl_free abl_free_aux
#endif

#endif
