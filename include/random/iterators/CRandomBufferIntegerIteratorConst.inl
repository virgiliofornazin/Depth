/*!
 *  \file    CRandomBufferIntegerIteratorConst.inl Random integer numbers
 *           buffer constant iterator definitions. It gives ability to get
 *           random integer numbers buffer items and to do forward and
 *           backward moving through the random integer numbers buffer items.
 *  \brief   Random integer numbers buffer constant iterator class (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    02.03.2009
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Random integer numbers buffer constant iterator class (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Random iterators
    VERSION:   1.0
    CREATED:   02.03.2009 02:15:30

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
#ifndef __CRANDOMBUFFERINTEGERITERATORCONST_INL__
#define __CRANDOMBUFFERINTEGERITERATORCONST_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NRandom {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* INLINE CLASS IMPLEMENTATIONS                                             */
/*==========================================================================*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::CRandomBufferIntegerIteratorConst() :
  NCommon::NIterators::IIteratorConst<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  NCommon::NIterators::IIteratorMoveBackward<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  m_cpContainer(NULL),
  m_Iterator()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::CRandomBufferIntegerIteratorConst(const CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator>* a_cpContainer) :
  NCommon::NIterators::IIteratorConst<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  NCommon::NIterators::IIteratorMoveBackward<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  m_cpContainer(a_cpContainer),
  m_Iterator()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::CRandomBufferIntegerIteratorConst(const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance) :
  NCommon::NIterators::IIteratorConst<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  NCommon::NIterators::IIteratorMoveBackward<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  m_cpContainer(NULL),
  m_Iterator()
{ CALL
  set(a_crInstance);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::CRandomBufferIntegerIteratorConst(const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance) :
  NCommon::NIterators::IIteratorConst<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  NCommon::NIterators::IIteratorMoveBackward<CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>, Tuint, Tuint, CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator> >(),
  m_cpContainer(NULL),
  m_Iterator()
{ CALL
  set(a_crInstance);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::~CRandomBufferIntegerIteratorConst()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator == (const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_pContainer == a_crInstance2.m_cpContainer) && (a_crInstance1.m_Iterator == a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator == (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_cpContainer == a_crInstance2.m_pContainer) && (a_crInstance1.m_Iterator == a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator == (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_cpContainer == a_crInstance2.m_cpContainer) && (a_crInstance1.m_Iterator == a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator != (const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_pContainer != a_crInstance2.m_cpContainer) || (a_crInstance1.m_Iterator != a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator != (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_cpContainer != a_crInstance2.m_pContainer) || (a_crInstance1.m_Iterator != a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool operator != (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance1, const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance2)
{ CALL
  return ((a_crInstance1.m_cpContainer != a_crInstance2.m_cpContainer) || (a_crInstance1.m_Iterator != a_crInstance2.m_Iterator));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator = (const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance)
{ CALL
  set(a_crInstance);
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator = (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance)
{ CALL
  set(a_crInstance);
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator += (const Tuint a_cStepCount/* = 1 */)
{ CALL
  stepForward(a_cStepCount);
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator -= (const Tuint a_cStepCount/* = 1 */)
{ CALL
  stepBackward(a_cStepCount);
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator ++ ()
{ CALL
  stepForward();
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator -- ()
{ CALL
  stepBackward();
  return *this;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator ++ (int)
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> temp(*this);

  stepForward();
  return temp;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::operator -- (int)
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> temp(*this);

  stepBackward();
  return temp;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> operator + (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance, const Tuint a_cStepCount)
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> temp(a_crInstance);

  temp.stepForward(a_cStepCount);
  return temp;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> operator - (const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance, const Tuint a_cStepCount)
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> temp(a_crInstance);

  temp.stepBackward(a_cStepCount);
  return temp;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline void CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::set(const CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance)
{ CALL
  m_cpContainer = a_crInstance.m_pContainer;
  m_Iterator = a_crInstance.m_Iterator;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline void CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::set(const CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_crInstance)
{ CALL
  m_cpContainer = a_crInstance.m_cpContainer;
  m_Iterator = a_crInstance.m_Iterator;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getForward() const
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> it(*this);
  // Perform forward step and return forward iterator instance or invalid one.
  return ((it.stepForward() == 1) ? it : CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>(m_cpContainer));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getBackward() const
{ CALL
  CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator> it(*this);
  // Perform backward step and return backward iterator instance or invalid one.
  return ((it.stepBackward() == 1) ? it : CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>(m_cpContainer));
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::isValid() const
{ CALL
  return (isValidContainer() && m_Iterator.isValid());
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tbool CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::isValidContainer() const
{ CALL
  return (m_cpContainer != NULL);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline const CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator>& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getContainerRef() const
{ CALL
  // Verify the iterator container to be the valid one.
  VERIFY(isValidContainer(), STR("Taking reference to the invalid iterator container value leads to the error."));

  return *m_cpContainer;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline const CRandomBufferInteger<T_RandomGenerator, T_DequeContainer, T_Allocator>* CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getContainerPtr() const
{ CALL
  return m_cpContainer;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline const Tuint& CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getValueRef() const
{ CALL
  // Verify the iterator to be the valid one.
  VERIFY(isValid(), STR("Taking reference to the iterator value for invalid iterator leads to the error."));

  return m_Iterator.getValueRef();
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline const Tuint* CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::getValuePtr() const
{ CALL
  if (isValid())
    return m_Iterator.getValuePtr();
  else
    return NULL;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tuint CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::stepForward(const Tuint a_cStepCount/* = 1 */)
{ CALL
  // Check if the iterator is in the valid state.
  ASSERT(isValid(), STR("Cannot step forward with the invalid random integer numbers buffer iterator."))
  {
    return 0;
  }

  return m_Iterator.stepForward(a_cStepCount);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline Tuint CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::stepBackward(const Tuint a_cStepCount/* = 1 */)
{ CALL
  // Check if the iterator is in the valid state.
  ASSERT(isValid(), STR("Cannot step backward with the invalid random integer numbers buffer iterator."))
  {
    return 0;
  }

  return m_Iterator.stepBackward(a_cStepCount);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
template <class T_Archive>
inline Tbool CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::load(T_Archive& a_rArchive)
{ CALL
  // Check T_Archive template template argument constraint to be a serialization archive.
  NConcept::MConstraint::requiresConcept<NConcept::NTypes::MConceptIArchive<T_Archive> >();

  WARNING(STR("Constant iterator value cannot be loaded."));
  return false;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
template <class T_Archive>
inline Tbool CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::save(T_Archive& a_rArchive) const
{ CALL
  // Check T_Archive template template argument constraint to be a serialization archive.
  NConcept::MConstraint::requiresConcept<NConcept::NTypes::MConceptIArchive<T_Archive> >();

  // Check if the iterator is in the valid state.
  ASSERT(isValid(), STR("The iterator should be in the valid state to perform a serialization."))
  {
    return false;
  }

  Tuint version = 1;
  CHECK(a_rArchive.begin(version, STR("NDepth::NRandom::NIterators::CRandomBufferIntegerIterator<T_RandomGenerator, T_DequeContainer, T_Allocator>")));
  CHECK(a_rArchive.body());
    CHECK(a_rArchive.doValue(getValueRef(), STR("value")));
  CHECK(a_rArchive.end());
  return true;
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
template <class T_Archive>
inline Tbool CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::serialize(T_Archive& a_rArchive)
{ CALL
  // Split 'serialize()' class method into 'load()' and 'save()' ones.
  return serializeSplitMethod(a_rArchive, *this);
}
/*--------------------------------------------------------------------------*/
template <class T_RandomGenerator, template <typename, class> class T_DequeContainer, class T_Allocator>
inline void CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>::swap(CRandomBufferIntegerIteratorConst<T_RandomGenerator, T_DequeContainer, T_Allocator>& a_rInstance)
{ CALL
  NAlgorithms::NCommon::swap(m_cpContainer, a_rInstance.m_cpContainer);
  NAlgorithms::NCommon::swap(m_Iterator, a_rInstance.m_Iterator);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
