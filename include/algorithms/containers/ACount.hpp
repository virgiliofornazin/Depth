/*!
 *  \file    ACount.hpp Contains general template implementation of the
 *           container elements counting algorithm.
 *  \brief   Container elements counting algorithm.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    30.03.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Container elements counting algorithm.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers algorithms
    VERSION:   1.0
    CREATED:   30.03.2007 23:14:23

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
#ifndef __ACOUNT_HPP__
#define __ACOUNT_HPP__
/*==========================================================================*/
#include <Depth/include/algorithms/containers/AGetItFirst.hpp>
#include <Depth/include/algorithms/iterators/AItCount.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NAlgorithms {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*==========================================================================*/
/* ALGORITHM DECLARATIONS                                                   */
/*==========================================================================*/
//! Algorithm: Container elements counting.
/*!
    \param a_rContainer - Reference to the container.
    \return Count of elements in the given container.
    \see NDepth::NAlgorithms::NIterators::countNext()
    \see NDepth::NAlgorithms::NIterators::countPrev()
*/
template <class T_Container>
Tuint count(T_Container& a_rContainer);
/*--------------------------------------------------------------------------*/
//! Algorithm: Container elements counting with given value.
/*!
    \param a_rContainer - Reference to the container.
    \param a_crValue - Constant reference to the counting value.
    \return Count of elements with given value in the given container.
    \see NDepth::NAlgorithms::NIterators::countNext()
    \see NDepth::NAlgorithms::NIterators::countPrev()
*/
template <class T_Container, typename T_ValueType>
Tuint count(T_Container& a_rContainer, const T_ValueType& a_crValue);
/*--------------------------------------------------------------------------*/
//! Algorithm: Container elements counting with given value using 'Equal' predicate.
/*!
    \param a_rContainer - Reference to the container.
    \param a_crValue - Constant reference to the counting value.
    \param a_fEqual - 'Equal' binary predicate.
    \return Count of elements with given value in the given container.
    \see NDepth::NAlgorithms::NIterators::countNext()
    \see NDepth::NAlgorithms::NIterators::countPrev()
*/
template <class T_Container, typename T_ValueType, typename T_BinaryPredicate>
Tuint count(T_Container& a_rContainer, const T_ValueType& a_crValue, T_BinaryPredicate a_fEqual);
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#include <Depth/include/algorithms/containers/ACount.inl>
/*==========================================================================*/
//! \example example-algorithms-ACount.cpp
/*--------------------------------------------------------------------------*/
//! \test test-algorithms-ACount.cpp
/*==========================================================================*/
#endif
