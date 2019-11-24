#ifdef module
// use it as header file
#  undef module
#  define EXPORT
#  define EXPORTGROUP extern "C++"

#else

#  if !defined(__cpp_modules) || defined(JANUS_BACKWARDS)
// use it as header file
#    define module static_assert(true,"")
#  else
// use it as module interface unit
#    define EXPORT export
#    define EXPORTGROUP export
#    define EXPORTMODULE
#  endif

#endif
