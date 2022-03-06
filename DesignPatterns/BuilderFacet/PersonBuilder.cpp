#include "BuilderFacet/PersonBuilder.h"
#include "BuilderFacet/PersonAddressBuilder.h"
#include "BuilderFacet/PersonJobBuilder.h"

PersonAddressBuilder PersonBuilderBase::lives() const
{
    return PersonAddressBuilder{ person };
}

PersonJobBuilder PersonBuilderBase::works() const
{
    return PersonJobBuilder{ person };
}
