#include "Dummy.hpp"
#include <plain_package/Dummy.hpp>
#include <another_plain_package/Dummy.hpp>
#include <iostream>

using namespace std;
using namespace rock_library_add_public_dependencies;

void DummyClass::welcome()
{
    plain_package::DummyClass plain;
    plain.welcome();
    another_plain_package::DummyClass another;
    another.welcome();

    cout << "You successfully compiled and executed DummyProject. Welcome!" << endl;
}
