// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define STDAFX_H_
#define STRICT               // enable strict type checking
#define _USE_MATH_DEFINES    // Actually use the definitions in math.h
//#define WIN32_LEAN_AND_MEAN  // Exclude rarely-used stuff from Windows headers

// Default
#include "targetver.h"

// C
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <limits.h>          // Provides INT_MAX
#include <math.h>            // Provides math functions
#include <string.h>          // Provides string functions
#include <assert.h>
#include <direct.h>
#include <windows.h>         // Provides Win32 API
#include <windowsx.h>        // Provides GDI helper macros
#include <ocidl.h>           // IPicture
#include <OleCtl.h>          // Support for IPicture

// C++
#include <string>            // Standard String Library
#include <iostream>          // Standard IO Stream Library
#include <sstream>           // Standard String Stream Library
#include <vector>            // Added for BGI__WindowTable
#include <queue>             // Provides queue<POINTS>

using namespace std;

// Shims
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef min
#define min(a,b) ((a) < (b) ? (a) : (b))
#endif
#ifndef max
#define max(a,b) ((a) > (b) ? (a) : (b))
#endif

#ifndef SC_US
#define SC_US(value) static_cast<unsigned short>(value)
#endif

// Graphics
#include "dibapi.h"
#include "dibutil.h"
#include "winbgi.h"
#include "winbgitypes.h"

// TODO: reference additional headers your program requires here
