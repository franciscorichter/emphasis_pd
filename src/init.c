#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

void init(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, NULL, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
