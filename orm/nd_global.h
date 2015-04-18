#ifndef ND_GLOBAL_H
#define ND_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ND_LIBRARY)
#  define NDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ND_GLOBAL_H
