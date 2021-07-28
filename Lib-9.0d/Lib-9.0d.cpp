#include "Lib-9.0d.h"
#include <string>

class LibVersion9
{
    int         m_int = 42;
    std::string m_string;
};

LibVersion9* GetLibVersion9()
{
    // Dummy static allocation for accessing the class defined in the DLL
    static LibVersion9 s;
    return &s;

    //// This is a dummy allocation
    //return new LibVersion9;
}