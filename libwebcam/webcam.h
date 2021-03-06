#pragma once
#ifdef WIN32
#include "device/os/win/win_enumerator.h"
#else
#include "device/os/lin/lin_enumerator.h"
#endif

#include "device/Device.h"
#include "error/enumerator_exception.h"
