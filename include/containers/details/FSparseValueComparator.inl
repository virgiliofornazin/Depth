/*!
 *  \file    FSparseValueComparator.inl Sparse array value comparator function
 *           class.
 *  \brief   Sparse array value comparator function class (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    26.09.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Sparse array value comparator function class (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers details
    VERSION:   1.0
    CREATED:   26.09.2007 02:17:58

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
#ifndef __FSPARSEVALUECOMPARATOR_INL__
#define __FSPARSEVALUECOMPARATOR_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*--------------------------------------------------------------------------*/
namespace NDetails {
/*==========================================================================*/
/* INLINE FUNCTION IMPLEMENTATIONS                                          */
/*==========================================================================*/
template <typename T_Type>
inline Tbool FSparseValueComparator<T_Type>::operator () (const CSparseValue<T_Type>& a_crArgument1, const CSparseValue<T_Type>& a_crArgument2) const
{ CALL
  return (a_crArgument1.getFirstIndex() < a_crArgument2.getFirstIndex());
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
template <class T_Archive>
inline Tbool FSparseValueComparator<T_Type>::serialize(T_Archive& a_rArchive)
{ CALL
  // Check T_Archive template template argument constraint to be a serialization archive.
  NConcept::MConstraint::requiresConcept<NConcept::NTypes::MConceptIArchive<T_Archive> >();

  Tuint version = 1;
  CHECK(a_rArchive.begin(version, STR("NDepth::NContainers::NDetails::FSparseValueComparator<T_Type>")));
  CHECK(a_rArchive.body());
  CHECK(a_rArchive.end());
  return true;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline void FSparseValueComparator<T_Type>::swap(FSparseValueComparator<T_Type>& a_rInstance)
{ CALL
  IGNORE_UNUSED(a_rInstance);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
