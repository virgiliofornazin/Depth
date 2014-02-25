/*!
 *  \file    FUnitTestLimit.hpp Helper function that checks if x is in the
 *           [a, b] limit.
 *  \brief   Unit test limit helper function.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    31.01.2009
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Unit test limit helper function.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Unit test details
    VERSION:   1.0
    CREATED:   31.01.2009 21:59:18

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
#ifndef __FUNITTESTLIMIT_HPP__
#define __FUNITTESTLIMIT_HPP__
/*==========================================================================*/
#include <Depth/include/unit.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NUnitTest {
/*--------------------------------------------------------------------------*/
namespace NDetails {
/*==========================================================================*/
/* FUNCTION DECLARATIONS                                                    */
/*==========================================================================*/
//! Unit test limit helper function.
/*!
    Function checks if x is in the [a, b] limit.

    \param a_crA - Constant reference to the a value.
    \param a_crB - Constant reference to the b value.
    \param a_crX - Constant reference to the x value.
    \return true  - if x is in the [a, b] limit. \n
            false - if x is outside the [a, b] limit. \n
*/
template <typename T_TypeA, typename T_TypeB, typename T_TypeX>
Tbool unitTestLimit(const T_TypeA& a_crA, const T_TypeB& a_crB, const T_TypeX& a_crX);
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#include <Depth/include/unit/details/FUnitTestLimit.inl>
/*==========================================================================*/
#endif