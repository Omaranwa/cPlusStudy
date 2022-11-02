#pragma once
/// <summary>
/// 1. this is Header file used for:
///		Function definitions
///		Data type definitions
///		Macros
/// 2.using #pragma once 
///		used to prevent The PreCompiler From Copying the Code twice 
///	3. Including Multiple Header Files:
///		#ifndef HEADER_FILE_NAME
///		#define HEADER_FILE_NAME
///
///		the entire header file
///
///		#endif
///		2.Include several diverse header files
///		#if SYSTEM_ONE
///		#include "system1.h"
///		#elif SYSTEM_TWO
///		#include "system2.h"
///		#elif SYSTEM_THREE
///		....
///		#endif
/// 
/// 
/// 
/// 
/// </summary>
/// <param name="message"></param>
void log(const char* message);
void intlog();