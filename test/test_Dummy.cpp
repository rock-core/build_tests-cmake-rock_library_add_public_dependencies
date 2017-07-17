#include <boost/test/unit_test.hpp>
#include <rock_library_add_public_dependencies/Dummy.hpp>

using namespace rock_library_add_public_dependencies;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_library_add_public_dependencies::DummyClass dummy;
    dummy.welcome();
}
