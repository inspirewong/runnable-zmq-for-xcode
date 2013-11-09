/*
    Copyright (c) 2007-2011 iMatix Corporation
    Copyright (c) 2007-2011 Other contributors as noted in the AUTHORS file

    This file is part of 0MQ.

    0MQ is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    0MQ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __ZMQ_PLATFORM_HPP_INCLUDED__
#define __ZMQ_PLATFORM_HPP_INCLUDED__

//  This is the platform definition for the MSVC platform.
//  As a first step of the build process it is copied to
//  zmq directory to take place of platform.hpp generated from
//  platform.hpp.in on platforms supported by GNU autotools.
//  Place any MSVC-specific definitions here.

#define ZMQ_HAVE_OSX 1

#define ZMQ_HAVE_UIO 1

///* Define to 1 if you have the `clock_gettime' function. */
//#undef HAVE_CLOCK_GETTIME
//
///* Define to 1 if you have the `fork' function. */
//#undef HAVE_FORK
//
///* Define to 1 if you have the `gethrtime' function. */
//#undef HAVE_GETHRTIME
///* Force to use mutexes */
//#undef ZMQ_FORCE_MUTEXES
//
///* Have AIX OS */
//#undef ZMQ_HAVE_AIX

//
///* Have Android OS */
//#undef ZMQ_HAVE_ANDROID
//
///* Have Cygwin */
//#undef ZMQ_HAVE_CYGWIN
//
///* Have eventfd extension. */
//#undef ZMQ_HAVE_EVENTFD
//
///* Have FreeBSD OS */
//#undef ZMQ_HAVE_FREEBSD
//
///* Have HPUX OS */
//#undef ZMQ_HAVE_HPUX
//
///* Have ifaddrs.h header. */
//#undef ZMQ_HAVE_IFADDRS
//
///* Have Linux OS */
//#undef ZMQ_HAVE_LINUX
//
///* Have MinGW32 */
//#undef ZMQ_HAVE_MINGW32
//
///* Have NetBSD OS */
//#undef ZMQ_HAVE_NETBSD
//
///* Have OpenBSD OS */
//#undef ZMQ_HAVE_OPENBSD
//
///* Have OpenPGM extension */
//#undef ZMQ_HAVE_OPENPGM
//
///* Have DarwinOSX OS */
//#undef ZMQ_HAVE_OSX
//
///* Have QNX Neutrino OS */
//#undef ZMQ_HAVE_QNXNTO
//
///* Whether SOCK_CLOEXEC is defined and functioning. */
//#undef ZMQ_HAVE_SOCK_CLOEXEC
//
///* Have Solaris OS */
//#undef ZMQ_HAVE_SOLARIS
//
///* Whether SO_KEEPALIVE is supported. */
//#undef ZMQ_HAVE_SO_KEEPALIVE
//
///* Whether TCP_KEEPALIVE is supported. */
//#undef ZMQ_HAVE_TCP_KEEPALIVE
//
///* Whether TCP_KEEPCNT is supported. */
//#undef ZMQ_HAVE_TCP_KEEPCNT
//
///* Whether TCP_KEEPIDLE is supported. */
//#undef ZMQ_HAVE_TCP_KEEPIDLE
//
///* Whether TCP_KEEPINTVL is supported. */
//#undef ZMQ_HAVE_TCP_KEEPINTVL
//
///* Have uio.h header. */
//#undef ZMQ_HAVE_UIO
//
///* Have Windows OS */
//#undef ZMQ_HAVE_WINDOWS


///* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
// <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
// #define below would cause a syntax error. */
//#undef _UINT32_T
//
///* Define to empty if `const' does not conform to ANSI C. */
//#undef const
//
///* Define to `__inline__' or `__inline' if that's what the C compiler
// calls it, or to nothing if 'inline' is not supported under any name.  */
//#ifndef __cplusplus
//#undef inline
//#endif
//
///* Define to `unsigned int' if <sys/types.h> does not define. */
//#undef size_t
//
///* Define to `int' if <sys/types.h> does not define. */
//#undef ssize_t
//
///* Define to the type of an unsigned integer type of width exactly 32 bits if
// such a type exists and the standard includes do not define it. */
//#undef uint32_t
//
///* Define to empty if the keyword `volatile' does not work. Warning: valid
// code using `volatile' can become incorrect without. Disable with care. */
//#undef volatile
//

#endif
