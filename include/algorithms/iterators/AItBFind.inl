/*!
 *  \file    AItBFind.inl Contains general template implementation of the
 *           binary find algorithm.
 *  \brief   Binary find algorithm (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    30.09.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Binary find algorithm (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common iterators algorithms
    VERSION:   1.0
    CREATED:   30.09.2006 20:56:39

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
#ifndef __AITBFIND_INL__
#define __AITBFIND_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NAlgorithms {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* INLINE ALGORITHM IMPLEMENTATIONS                                         */
/*==========================================================================*/
template <class T_Iterator, typename T_ValueType>
inline T_Iterator bfindNext(const T_Iterator& a_crIterator, const T_ValueType& a_crValue)
{ CALL
  return bfindNext(a_crIterator, a_crValue, NFunctions::FBoolLessThan<const T_ValueType&, const typename T_Iterator::TReturn&>());
}
/*--------------------------------------------------------------------------*/
template <class T_Iterator, typename T_ValueType, typename T_BinaryPredicate>
inline T_Iterator bfindNext(const T_Iterator& a_crIterator, const T_ValueType& a_crValue, T_BinaryPredicate a_fLessThan)
{ CALL
  // Check T_Iterator class constraint to be an any iterator.
  NConcept::MConstraint::requiresConcept<NConcept::NIterators::MConceptIteratorAny<T_Iterator> >();
  // Check T_BinaryPredicate type constraint to be a suitable binary predicate.
  NConcept::MConstraint::requiresConcept<NConcept::NFunctions::MConceptPredicate2<T_BinaryPredicate, const T_ValueType&, const typename T_Iterator::TReturn&> >();

  T_Iterator it(lowerBoundNext(a_crIterator, a_crValue, a_fLessThan));

  if (it.isValid() && !a_fLessThan(a_crValue, it.getValueRef()))
    return it;
  else
    return T_Iterator();
}
/*--------------------------------------------------------------------------*/
template <class T_Iterator, typename T_ValueType>
inline T_Iterator bfindPrev(const T_Iterator& a_crIterator, const T_ValueType& a_crValue)
{ CALL
  return bfindPrev(a_crIterator, a_crValue, NFunctions::FBoolLessThan<const T_ValueType&, const typename T_Iterator::TReturn&>());
}
/*--------------------------------------------------------------------------*/
template <class T_Iterator, typename T_ValueType, typename T_BinaryPredicate>
inline T_Iterator bfindPrev(const T_Iterator& a_crIterator, const T_ValueType& a_crValue, T_BinaryPredicate a_fLessThan)
{ CALL
  // Check T_Iterator class constraint to be an any iterator.
  NConcept::MConstraint::requiresConcept<NConcept::NIterators::MConceptIteratorAny<T_Iterator> >();
  // Check T_BinaryPredicate type constraint to be a suitable binary predicate.
  NConcept::MConstraint::requiresConcept<NConcept::NFunctions::MConceptPredicate2<T_BinaryPredicate, const T_ValueType&, const typename T_Iterator::TReturn&> >();

  T_Iterator it(lowerBoundPrev(a_crIterator, a_crValue, a_fLessThan));

  if (it.isValid() && !a_fLessThan(a_crValue, it.getValueRef()))
    return it;
  else
    return T_Iterator();
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
