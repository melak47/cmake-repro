#include <a.hpp>
#include <b.hpp>

namespace A {
    void f() {
        B::f();
    }
}
