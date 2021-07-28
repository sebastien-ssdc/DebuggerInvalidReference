#include "LibWithDashes.h"
#include <string>

class LibWithDashesClass
{
    int         m_int = 42;
    std::string m_string;
};

LibWithDashesClass* GetLibWithDashesClass()
{
    // Dummy static allocation for accessing the class defined in the DLL
    static LibWithDashesClass s;
    return &s;

    //// This is a dummy allocation
    //return new LibWithDashesClass;
}