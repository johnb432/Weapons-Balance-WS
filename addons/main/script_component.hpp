#define COMPONENT main
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_WS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_WS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_WS
#endif

#include "\x\cba\addons\main\script_macros_common.hpp"
