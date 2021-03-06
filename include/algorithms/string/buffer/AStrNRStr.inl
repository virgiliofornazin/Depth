/*!
 *  \file    AStrNRStr.inl Contains general template implementation of the
 *           find last occurrence of the substring in the fixed-size string.
 *  \brief   Find last occurrence of the substring in the fixed-size string algorithm (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    28.03.2008
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Find last occurrence of the substring in the fixed-size string algorithm (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      String buffer algorithms
    VERSION:   1.0
    CREATED:   28.03.2008 21:01:37

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
#ifndef __ASTRNRSTR_INL__
#define __ASTRNRSTR_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NAlgorithms {
/*--------------------------------------------------------------------------*/
namespace NString {
/*--------------------------------------------------------------------------*/
namespace NBuffer {
/*==========================================================================*/
/* INLINE ALGORITHM IMPLEMENTATIONS                                         */
/*==========================================================================*/
template <typename T_StringType1, typename T_StringType2>
inline Tsint strNRStr(const T_StringType1& a_crString, const Tuint a_cMaxLength, const T_StringType2& a_crSubstring)
{ CALL
  // Check T_StringType1 template argument constraint to be a constant string.
  NConcept::MConstraint::requiresConcept<NConcept::NBase::MConceptStringConst<T_StringType1> >();
  // Check T_StringType2 template argument constraint to be a constant string.
  NConcept::MConstraint::requiresConcept<NConcept::NBase::MConceptStringConst<T_StringType2> >();

  // Check the given string not to be NULL.
  ASSERT(((Tcptr)a_crString != NULL), STR("Algorithm 'strnrstr()' cannot work with a NULL string."))
  {
    return -1;
  }
  // Check the given substring not to be NULL.
  ASSERT(((Tcptr)a_crSubstring != NULL), STR("Algorithm 'strnrstr()' cannot work with a NULL substring."))
  {
    return 0;
  }

  Tuint index = 0;
  Tuint indexCur = 0;
  Tuint indexSub = 0;
  Tsint result = -1;

  while ((a_crString[index] != 0) && (index < a_cMaxLength))
  {
    indexCur = index;
    indexSub = 0;
    while ((a_crString[indexCur] != 0) && (indexCur < a_cMaxLength) && (a_crSubstring[indexSub] != 0) && (((typename NTraits::MTraitsString<T_StringType1>::ucharacter)a_crString[indexCur]) == ((typename NTraits::MTraitsString<T_StringType2>::ucharacter)a_crSubstring[indexSub])))
    {
      ++indexCur;
      ++indexSub;
    }
    if (a_crSubstring[indexSub] == 0)
    {
      result = (Tsint)index;
      index = indexCur + ((index == indexCur) ? 1 : 0);
    }
    else
      ++index;
  }
  return result;
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
