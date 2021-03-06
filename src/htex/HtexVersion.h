#ifndef HtexVersion_h
#define HtexVersion_h

/*
PTEX SOFTWARE
Copyright 2014 Disney Enterprises, Inc.  All rights reserved

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in
    the documentation and/or other materials provided with the
    distribution.

  * The names "Disney", "Walt Disney Pictures", "Walt Disney Animation
    Studios" or the names of its contributors may NOT be used to
    endorse or promote products derived from this software without
    specific prior written permission from Walt Disney Pictures.

Disclaimer: THIS SOFTWARE IS PROVIDED BY WALT DISNEY PICTURES AND
CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE, NONINFRINGEMENT AND TITLE ARE DISCLAIMED.
IN NO EVENT SHALL WALT DISNEY PICTURES, THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND BASED ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
*/

#define HtexAPIVersion 4
#define HtexFileMajorVersion 1
#define HtexFileMinorVersion 4
#define HtexLibraryMajorVersion 2
#define HtexLibraryMinorVersion 4

#define HTEX_NAMESPACE Htex
#ifdef PTEX_VENDOR
#  define make_version_ns_(major,minor,vendor) v##major##_##minor##_##vendor
#  define make_version_ns(major,minor,vendor) make_version_ns_(major,minor,vendor)
#  define HTEX_VERSION_NAMESPACE make_version_ns(HtexLibraryMajorVersion,HtexLibraryMinorVersion,HTEX_VENDOR)
#else
#  define make_version_ns_(major,minor) v##major##_##minor
#  define make_version_ns(major,minor) make_version_ns_(major,minor)
#  define HTEX_VERSION_NAMESPACE make_version_ns(HtexLibraryMajorVersion,HtexLibraryMinorVersion)
#endif

#define HTEX_NAMESPACE_BEGIN \
namespace HTEX_NAMESPACE { \
namespace HTEX_VERSION_NAMESPACE {} \
using namespace HTEX_VERSION_NAMESPACE; \
namespace HTEX_VERSION_NAMESPACE {

#define HTEX_NAMESPACE_END }}
#endif
