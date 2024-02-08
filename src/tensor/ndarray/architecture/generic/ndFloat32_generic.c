#include "ndFloat32.h"

void ndFloat32_init(ndarray* target, int ndim, ... )
{
    target->elementProduct  = ndFloat32_elementProduct;
    target->elementAdd      = ndFloat32_elementAdd;
    target->elementSub      = ndFloat32_elementSub;
    target->elementDiv      = ndFloat32_elementDiv;
    target->dotProduct      = ndFloat32_doutProduct;
}

bool ndFloat32_genreic_elementProduct(struct ndFloat32 *self, struct ndFloat32 *operand )
{

}
bool ndFloat32_elementAdd(struct ndFloat32 *self, struct ndFloat32 *operand)
{

}
bool ndFloat32_elementSub(struct ndFloat32 *self, struct ndFloat32 *operand)
{

}
bool ndFloat32_elementDiv(struct ndFloat32 *self, struct ndFloat32 *operand)
{

}
bool ndFloat32_doutProduct(struct ndFloat32 *self, struct ndFloat32 *operand)
{

}
