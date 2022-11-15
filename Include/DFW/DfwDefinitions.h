#pragma once
#include "DSL/DslDefinitions.h"

//Handmade definitions
//	#define DFW_EXCLUDE_TESTS

#define DFW

#ifdef D_DEV
	#define DFW_DEV
#endif
#ifdef D_RELEASE
	#define DFW_RELEASE
#endif
