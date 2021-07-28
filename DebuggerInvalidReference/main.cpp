#include "LibWithDashes.h"
#include "LibWithNoDashes.h"
#include "Lib-9.0d.h"

int main()
{
    LibWithNoDashesClass* pNoDashes = GetLibWithNoDashesClass();
    LibWithDashesClass* pDashes     = GetLibWithDashesClass();
    LibVersion9* pLibVersion9       = GetLibVersion9();
    return 0;
}