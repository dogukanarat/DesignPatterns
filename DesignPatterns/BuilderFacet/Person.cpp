#include "BuilderFacet/Person.h"
#include "BuilderFacet/PersonBuilder.h"

PersonBuilder Person::create()
{
    return PersonBuilder{};
}