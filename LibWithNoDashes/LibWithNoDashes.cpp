#include "LibWithNoDashes.h"
#include <string>

class LibWithNoDashesClass
{
    int         m_int = 42;
    std::string m_string;
};

LibWithNoDashesClass* GetLibWithNoDashesClass()
{
    // Dummy static allocation for accessing the class defined in the DLL
    static LibWithNoDashesClass s;
    return &s;

    //// This is a dummy allocation
    //return new LibWithNoDashesClass;
}