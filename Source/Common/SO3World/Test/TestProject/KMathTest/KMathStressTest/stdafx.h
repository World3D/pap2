// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#ifndef _WIN32_WINNT		// 允许使用特定于 Windows XP 或更高版本的功能。
#define _WIN32_WINNT 0x0501	// 将此值更改为相应的值，以适用于 Windows 的其他版本。
#endif						

#define	_USE_32BIT_TIME_T

#include <stdio.h>
#include <winsock2.h>
#include <windows.h>
#include <Windows.h>

#include "KGPublic.h"
#include "SO3GlobalDef.h"
#include "Engine.h"

#include "../include/KMathStressTestDef.h"
#include "Test.h"

// TODO: 要测试的版本

#ifdef TEST_NEW_VERSION

#include "KMath.1.20.h"
#define VERSION NEW_VERSION
#pragma comment(lib, "SO3WorldServerD.1.53.lib")

#else

#include "KMath.1.16.h"
#define VERSION OLD_VERSION 
#pragma comment(lib, "SO3WorldServerD.1.46.lib")

#endif
