// janus.cpp
// usable as both a module interface unit and a header file

module;
#include "janus.h"

#ifdef EXPORTMODULE
export module mod;
#endif

namespace mod {
  EXPORTGROUP {
    struct mod {};
    mod baz;
  }

  mod bar;

  EXPORT mod foo() {
    return mod{};
  }

  mod qux() {
    return mod{};
  }
}
