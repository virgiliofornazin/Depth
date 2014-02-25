/*!
 *  \file    MConceptIteratorNonConstAssociative.inl Template checking
 *           conception. Checks if template argument is a non constant
 *           associative iterator type.
 *  \brief   Non constant associative iterator template checking conception (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    30.07.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Non constant associative iterator template checking conception (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Iterators conception checking
    VERSION:   1.0
    CREATED:   30.07.2006 21:16:37

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
#ifndef __MCONCEPTITERATORNONCONSTASSOCIATIVE_INL__
#define __MCONCEPTITERATORNONCONSTASSOCIATIVE_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NConcept {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* INLINE META-CLASS IMPLEMENTATIONS                                        */
/*==========================================================================*/
template <class T_Class>
inline MConceptIteratorNonConstAssociative<T_Class>::MConceptIteratorNonConstAssociative() :
  MConcept()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_Class>
inline MConceptIteratorNonConstAssociative<T_Class>::~MConceptIteratorNonConstAssociative()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_Class>
inline void MConceptIteratorNonConstAssociative<T_Class>::constraints()
{ CALL
  MConstraint::requiresConcept<MConceptIteratorNonConst<T_Class> >();
  MConstraint::requiresConcept<MConceptIteratorInsertAssociative<T_Class> >();
  MConstraint::requiresConcept<MConceptIteratorMoveAssociative<T_Class> >();
  MConstraint::requiresConcept<MConceptIteratorRemoveAssociative<T_Class> >();
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif