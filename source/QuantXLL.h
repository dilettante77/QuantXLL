//
//
//                                                                    Test.h
//

#ifndef TEST_H
#define TEST_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>

#include "nrutil_nr.h"

using namespace xlw;

//<xlw:libraryname=MyTestLibrary
#define DLLEXPORT
#ifdef DLLEXPORT
#define EXPORT __declspec(dllexport) 
#else
#undef EXPORT
#endif

short // echoes a short
EchoShort(short x // number to be echoed
       );

std::string // echoes a string
EchoString(std::string x // string to be echoed
);

EXPORT
int 
mysum(int a, int b);  

EXPORT
DP rtbis(DP func(const DP), const DP x1, const DP x2, const DP xacc);

#endif
