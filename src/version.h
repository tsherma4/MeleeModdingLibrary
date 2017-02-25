/**
 * @file version.h
 * @brief Store the library version.
 *
 */

#ifndef MML_VERSION_H
#define MML_VERSION_H

#include "gctypes.h"

#define MAJOR_MASK      0xFF000000
#define MINOR_MASK      0x00FF0000
#define REVISION_MASK   0x0000FFFF

extern u32 _mml_version;

#define MML_VERSION_MAJOR       ((_mml_version & MAJOR_MASK) >> 24)
#define MML_VERSION_MINOR       ((_mml_version & MINOR_MASK) >> 16)
#define MML_VERSION_REVISION    (_mml_version & REVISION_MASK)

#define MML_VERSION_CHECK(maj, min)) \
    ((maj == MML_VERSION_MAJOR) \
    && (min <= MML_VERSION_MINOR))

#endif
