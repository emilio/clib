#ifndef __LIB_H
// TODO: constant name soooo generic, must change
#define __LIB_H


#ifdef __cplusplus
#define CPP_START extern "C" {
#define CPP_END }
#else
#define CPP_START
#define CPP_END
#endif


// To include c files automatically, for easy 1-file projects
#ifndef __LIB_AUTO_INCLUDE
#define __LIB_AUTO_INCLUDE 0
#endif

#ifndef __LIB_DEBUG_MODE
#define __LIB_DEBUG_MODE 1
#endif


// Just include the core, or include the whole library?
#ifndef __LIB_JUST_CORE
#define __LIB_JUST_CORE 0
#endif

#ifndef __LIB_INCLUDE_DB
#define __LIB_INCLUDE_DB 0
#endif

#ifndef __LIB_INCLUDE_UI
#define __LIB_INCLUDE_UI 0
#endif

#ifndef __LIB_INCLUDE_VMATH
#define __LIB_INCLUDE_VMATH 0
#endif

#include "core/core.h"

#if __LIB_AUTO_INCLUDE == 1
#include "core/types.c"
#include "core/utils.c"
#include "core/rand.c"
#endif

#if __LIB_JUST_CORE == 0

#include "common/Array.h"
#include "common/Map.h"
#include "common/Date.h"
#include "common/array.h"
#include "common/str.h"
#include "common/file.h"
#include "common/I18n.h"


#if __LIB_AUTO_INCLUDE == 1

#include "common/Array.c"
#include "common/Map.c"
#include "common/Date.c"
#include "common/array.c"
#include "common/str.c"
#include "common/file.c"
#include "common/I18n.c"
// #include "date.c"


#endif
// __LIB_AUTO_INCLUDE

#if __LIB_INCLUDE_UI == 1

#include "ui/Menu.h"
#include "ui/Progress.h"
#include "ui/message.h"

#if __LIB_AUTO_INCLUDE == 1

#include "ui/Menu.c"
#include "ui/Progress.c"
#include "ui/message.c"

#endif
// __LIB_AUTO_INCLUDE

#endif
// __LIB_INCLUDE_UI == 1


#if __LIB_INCLUDE_DB == 1

#include "db/Model.h"
#include "db/Object.h"

#if __LIB_AUTO_INCLUDE == 1

#include "db/Model.c"
#include "db/Object.c"

#endif
// __LIB_AUTO_INCLUDE

#endif
// __LIB_INCLUDE_DB == 1

#if __LIB_INCLUDE_VMATH == 1

#include "vmath/vmath.h"

#if __LIB_AUTO_INCLUDE == 1

#include "vmath/vmath.c"

#endif
// __LIB_AUTO_INCLUDE

#endif
// __LIB_INCLUDE_DB == 1

#endif



#endif
