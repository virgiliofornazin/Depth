/*!
 *  \file    MRemoveConstAndVolatile.hpp Traits meta-class that helps to remove
 *           'const volatile' qualifier from template parameter.
 *  \brief   Traits meta-class: removes 'const volatile' qualifier.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    09.03.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Traits meta-class: removes 'const volatile' qualifier.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Type traits
    VERSION:   1.0
    CREATED:   09.03.2006 00:03:28

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
#ifndef __MREMOVECONSTANDVOLATILE_HPP__
#define __MREMOVECONSTANDVOLATILE_HPP__
/*==========================================================================*/
#include <Depth/include/traits/MType.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NTraits {
/*==========================================================================*/
/* META-CLASS DECLARATIONS                                                  */
/*==========================================================================*/
//! Traits meta-class: removes 'const volatile' qualifier.
/*!
    Traits meta-class removes top level 'const volatile' qualifier from  given
    type and put transformed type to the result meta-class  type.  Here  comes
    some examples of transformations:

    Expression:                                            Result type:
    MRemoveConstAndVolatile<int>::type                     int
    MRemoveConstAndVolatile<int const>::type               int const
    MRemoveConstAndVolatile<int volatile>::type            int volatile
    MRemoveConstAndVolatile<int const volatile>::type      int
    MRemoveConstAndVolatile<int const&>::type              int const&
    MRemoveConstAndVolatile<int const*>::type              int const*
    MRemoveConstAndVolatile<int volatile&>::type           int volatile&
    MRemoveConstAndVolatile<int volatile*>::type           int volatile*
    MRemoveConstAndVolatile<int const volatile&>::type     int const volatile&
    MRemoveConstAndVolatile<int const volatile*>::type     int*
    MRemoveConstAndVolatile<int const volatile[]>::type    int[]
    MRemoveConstAndVolatile<int const volatile[12]>::type  int[12]
*/
template <typename T_Type>
class MRemoveConstAndVolatile :
  public MType<T_Type>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (constant volatile specialization).
template <typename T_Type>
class MRemoveConstAndVolatile<const volatile T_Type> :
  public MType<T_Type>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (constant volatile array specialization).
template <typename T_Type>
class MRemoveConstAndVolatile<const volatile T_Type[]> :
  public MType<T_Type[]>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (indexed constant volatile array specialization).
template <typename T_Type, Tuint t_N>
class MRemoveConstAndVolatile<const volatile T_Type[t_N]> :
  public MType<T_Type[t_N]>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (reference specialization).
template <typename T_Type>
class MRemoveConstAndVolatile<T_Type&> :
  public MType<T_Type&>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (pointer specialization).
template <typename T_Type>
class MRemoveConstAndVolatile<T_Type*> :
  public MType<T_Type*>
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: removes 'const volatile' qualifier (constant volatile pointer specialization).
template <typename T_Type>
class MRemoveConstAndVolatile<T_Type* const volatile> :
  public MType<T_Type*>
{

};
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
