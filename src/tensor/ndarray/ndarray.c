
#include "ndarray.h"

bool ndalloc(struct ndarray* self)
{
    root_ = aligned_alloc((size_t)16*sizeof(char), (size_t)self->size*sizeof( float ));
}


bool at(struct ndarray* self)
{
    root_ = aligned_alloc((size_t)16*sizeof(char), (size_t)self->size*sizeof( float ));
}