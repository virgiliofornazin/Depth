/*!
 *  \file    CDuoSingle.inl Duo template class represents data structure which
 *           contains two fields (v1, v2) with different data types. Duo with
 *           single value specialization.
 *  \brief   Duo template class (single value specialization) (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    06.03.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Duo template class (single value specialization) (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Tuple details
    VERSION:   1.0
    CREATED:   06.03.2006 23:11:17

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
#ifndef __CDUOSINGLE_INL__
#define __CDUOSINGLE_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NTuple {
/*--------------------------------------------------------------------------*/
namespace NDetails {
/*==========================================================================*/
/* INLINE CLASS IMPLEMENTATIONS                                             */
/*==========================================================================*/
template <typename T_Type>
inline CDuo<T_Type, void>::CDuo() :
  m_Value()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline CDuo<T_Type, void>::CDuo(const T_Type& a_crValue) :
  m_Value(a_crValue)
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
template <typename T_OtherType>
inline CDuo<T_Type, void>::CDuo(const CDuo<T_OtherType, void>& a_crInstance) :
  m_Value((T_Type)a_crInstance.getValue1())
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline CDuo<T_Type, void>::~CDuo()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
template <typename T_OtherType>
inline CDuo<T_Type, void>& CDuo<T_Type, void>::operator = (const CDuo<T_OtherType, void>& a_crInstance)
{ CALL
  set(a_crInstance);
  return *this;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline void CDuo<T_Type, void>::set(const T_Type& a_crValue)
{ CALL
  m_Value = a_crValue;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
template <typename T_OtherType>
inline void CDuo<T_Type, void>::set(const CDuo<T_OtherType, void>& a_crInstance)
{ CALL
  m_Value = (T_Type)a_crInstance.getValue1();
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline T_Type& CDuo<T_Type, void>::getValue1()
{ CALL
  return m_Value;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline const T_Type& CDuo<T_Type, void>::getValue1() const
{ CALL
  return m_Value;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline void CDuo<T_Type, void>::getValue2()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline void CDuo<T_Type, void>::getValue2() const
{ CALL

}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
template <class T_Archive>
inline Tbool CDuo<T_Type, void>::serialize(T_Archive& a_rArchive)
{ CALL
  // Check T_Archive template template argument constraint to be a serialization archive.
  NConcept::MConstraint::requiresConcept<NConcept::NTypes::MConceptIArchive<T_Archive> >();

  Tuint version = 1;
  CHECK(a_rArchive.begin(version, STR("NDepth::NTuple::NDetails::CDuo<T_Type, void>")));
  CHECK(a_rArchive.body());
    CHECK(a_rArchive.doValue(m_Value, STR("m_Value")));
  CHECK(a_rArchive.end());
  return true;
}
/*--------------------------------------------------------------------------*/
template <typename T_Type>
inline void CDuo<T_Type, void>::swap(CDuo<T_Type, void>& a_rInstance)
{ CALL
  NAlgorithms::NCommon::swap(m_Value, a_rInstance.m_Value);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif