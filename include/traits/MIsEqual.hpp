/*!
 *  \file    MIsEqual.hpp Traits meta-class that applied equality operation
 *           to the given boolean values as a template arguments.
 *  \brief   Traits meta-class: equality trait.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    10.03.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Traits meta-class: equality trait.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Type traits
    VERSION:   1.0
    CREATED:   10.03.2006 02:09:42

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
#ifndef __MISEQUAL_HPP__
#define __MISEQUAL_HPP__
/*==========================================================================*/
#include <Depth/include/traits/MTypeTrue.hpp>
#include <Depth/include/traits/MTypeFalse.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NTraits {
/*==========================================================================*/
/* META-CLASS DECLARATIONS                                                  */
/*==========================================================================*/
//! Traits meta-class: equality trait.
/*!
    Traits meta-class applying equality operation to  given  template  boolean
    values. After it you  can  use  meta-class  attributes  to  determine  new
    boolean state. Here comes some examples of using this trait:

    Expression:                                                   Result type:
    MIsEqual<true, true>::yes                                     true
    MIsEqual<false, true>::yes                                    false
    MIsEqual<false, false>::no                                    false
    MIsEqual<true, false>::no                                     true

*/
template <Tbool t_Expression1, Tbool t_Expression2>
class MIsEqual :
  public MTypeFalse
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: equality trait (true == true specialization).
template <>
class MIsEqual<true, true> :
  public MTypeTrue
{

};
/*--------------------------------------------------------------------------*/
//! Traits meta-class: equality trait (false == false specialization).
template <>
class MIsEqual<false, false> :
  public MTypeTrue
{

};
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
