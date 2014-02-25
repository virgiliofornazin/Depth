/*!
 *  \file    ISharedLibrary.inl Shared library interface provides OS
 *           independent functionality to handle shared libraries
 *           load/unload procedures.
 *  \brief   Shared library interface (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    02.05.2008
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Shared library interface (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Shared library interface
    VERSION:   1.0
    CREATED:   02.05.2008 22:27:48

    EMAIL:     chronoxor@gmail.com
    WWW:       http://code.google.com/p/depth

    COPYRIGHT: (C) 2005-2010 The NULL workgroup. All Rights Reserved.
*/
/*--------------------------------------------------------------------------*/
/*
    Copyright (C) 2005-2010 The NULL workgroup.

    This program is free software; you can redistribute it  and/or  modify  it
    under the terms of the GNU General Public License as published by the Free
    Software Foundation; either version 2 of the License, or (at your  option)
    any later version.

    This program is distributed in the  hope  that  it  will  be  useful,  but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General  Public  License
    for more details.

    You should have received a copy of the GNU General  Public  License  along
    with this program; if not, write to the Free Software Foundation, Inc., 59
    Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
/*--------------------------------------------------------------------------*/
/*
    FILE ID: $Id$

    CHANGE LOG:

    $Log$
*/
/*==========================================================================*/
#ifndef __ISHAREDLIBRARY_INL__
#define __ISHAREDLIBRARY_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NShared {
/*==========================================================================*/
/* INLINE INTERFACE IMPLEMENTATIONS                                         */
/*==========================================================================*/
inline ISharedLibrary::ISharedLibrary()
{ CALL

}
/*--------------------------------------------------------------------------*/
inline ISharedLibrary::~ISharedLibrary()
{ CALL

}
/*--------------------------------------------------------------------------*/
inline Tbool ISharedLibrary::onLoad()
{ CALL
  return true;
}
/*--------------------------------------------------------------------------*/
inline Tbool ISharedLibrary::onUnload()
{ CALL
  return true;
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif