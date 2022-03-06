#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <string>
#include "BuilderFacet/Person.h"
#include "BuilderFacet/PersonBuilder.h"
#include "BuilderFacet/PersonAddressBuilder.h"
#include "BuilderFacet/PersonJobBuilder.h"

using namespace std;

int main(void)
{
    Person p = Person::create()
        .lives()
        .at("123 London Road")
        .with_postcode("SW1 1GB")
        .in("London")
        .works()
        .at("PragmaSoft")
        .as_a("Consultant")
        .earning(10e6);

    cout << p << endl;
    getchar();
    return 0;
}