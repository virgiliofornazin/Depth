/*!
 *  \file    CBinTreeIteratorConst.hpp Binary tree constant iterator
 *           definitions. It gives ability to get binary tree items.
 *  \brief   Binary tree constant iterator class.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    31.07.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Binary tree constant iterator class.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers iterators
    VERSION:   1.0
    CREATED:   31.07.2006 23:48:27

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
#ifndef __CBINTREEITERATORCONST_HPP__
#define __CBINTREEITERATORCONST_HPP__
/*==========================================================================*/
#include <Depth/include/common/iterators/IIteratorConst.hpp>
#include <Depth/include/common/iterators/IIteratorMoveAssociative.hpp>
#include <Depth/include/common/iterators/IIteratorMoveTree.hpp>
#include <Depth/include/containers/CBinTree.hpp>
#include <Depth/include/traits/MTraitsIterator.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* CLASS DECLARATIONS                                                       */
/*==========================================================================*/
//! Binary tree constant iterator class.
/*!
    Binary tree constant iterator represents binary  tree  iterations  method.
    With this iterator you can perform looking into binary  tree  items.  Note
    that you cannot  modify binary tree items with constant iterator. In  that
    case use non constant binary tree iterator.

    Serialization: Binary tree constant iterator cannot be loaded.
*/
template <typename T_Type, typename T_BinaryPredicate, class T_Allocator>
class CBinTreeIteratorConst :
  public NCommon::NIterators::IIteratorConst<CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>, T_Type, const T_Type, const CBinTree<T_Type, T_BinaryPredicate, T_Allocator> >,
  public NCommon::NIterators::IIteratorMoveAssociative<CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>, T_Type, T_Type, T_Type, const T_Type, const CBinTree<T_Type, T_BinaryPredicate, T_Allocator> >,
  public NCommon::NIterators::IIteratorMoveTree<CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>, T_Type, const T_Type, const CBinTree<T_Type, T_BinaryPredicate, T_Allocator> >
{
  // Friend class: Binary tree class (CBinTree).
  friend class CBinTree<T_Type, T_BinaryPredicate, T_Allocator>;
  // Friend structure: Binary tree node structure (CBinTree::SBinTreeNode).
  friend struct CBinTree<T_Type, T_BinaryPredicate, T_Allocator>::SBinTreeNode;

  //! Type for MConceptPredicate2 argument constraint checking.
  typedef const T_Type& TPredicate2ArgumentCheckType;
  //! Type for MConceptPredicate2 constraint checking.
  typedef T_BinaryPredicate TPredicate2CheckType;
  //! Type for MConceptIAllocator constraint checking.
  typedef T_Allocator TAllocatorCheckType;
  //! Type for MConceptDepthType constraint checking.
  typedef CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> TDepthCheckType;

  // Check T_BinaryPredicate template argument constraint to be a suitable binary predicate.
  REQUIRES_CONCEPT3(NConcept::NFunctions, MConceptPredicate2, TPredicate2CheckType, TPredicate2ArgumentCheckType, TPredicate2ArgumentCheckType);
  // Check T_Allocator template argument constraint to be a memory allocator.
  REQUIRES_CONCEPT1(NConcept::NTypes, MConceptIAllocator, TAllocatorCheckType);
  // Check CBinTreeIteratorConst class constraint to be a real Depth type.
  REQUIRES_CONCEPT1(NConcept::NTypes, MConceptDepthType, TDepthCheckType);

public:
  //! Iterator associative key type.
  typedef T_Type TKey;
  //! Iterator associative value type.
  typedef T_Type TValue;

  //! Iterator value type.
  typedef T_Type TType;
  //! Iterator return type.
  typedef const T_Type TReturn;
  //! Iterator container type.
  typedef const CBinTree<T_Type, T_BinaryPredicate, T_Allocator> TContainer;
  //! Iterator base type.
  typedef CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> TIterator;

  //! Container binary predicate type.
  typedef T_BinaryPredicate TLessThanPredicate;
  //! Iterator allocator type.
  typedef T_Allocator TAllocator;

  //! Default class constructor.
  CBinTreeIteratorConst();
  //! Initialize with non constant binary tree iterator.
  /*!
      \param a_crInstance - Constant reference to the instance of the CBinTreeIterator class.
  */
  CBinTreeIteratorConst(const CBinTreeIterator<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);
  //! Class copy constructor.
  /*!
      \param a_crInstance - Constant reference to another instance of the CBinTreeIteratorConst class.
  */
  CBinTreeIteratorConst(const CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);
  //! Class virtual destructor.
  virtual ~CBinTreeIteratorConst();

  //! Operator: Equal to another iterator instance with the non constant type.
  /*!
      \param a_crInstance1 - Another instance of the iterator class.
      \param a_crInstance2 - Current instance of the iterator class.
      \return true  - if class instances are equal. \n
              false - if class instances are not equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator == (const CBinTreeIterator<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);
  //! Operator: Equal to another iterator instance with the non constant type.
  /*!
      \param a_crInstance1 - Current instance of the iterator class.
      \param a_crInstance2 - Another instance of the iterator class.
      \return true  - if class instances are equal. \n
              false - if class instances are not equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator == (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIterator<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);
  //! Operator: Equal to another iterator instance with the same type.
  /*!
      \param a_crInstance1 - Current instance of the iterator class.
      \param a_crInstance2 - Another instance of the iterator class.
      \return true  - if class instances are equal. \n
              false - if class instances are not equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator == (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);
  //! Operator: Not equal to another iterator instance with the non constant type.
  /*!
      \param a_crInstance1 - Another instance of the iterator class.
      \param a_crInstance2 - Current instance of the iterator class.
      \return true  - if class instances are not equal. \n
              false - if class instances are equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator != (const CBinTreeIterator<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);
  //! Operator: Not equal to another iterator instance with the non constant type.
  /*!
      \param a_crInstance1 - Current instance of the iterator class.
      \param a_crInstance2 - Another instance of the iterator class.
      \return true  - if class instances are not equal. \n
              false - if class instances are equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator != (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIterator<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);
  //! Operator: Not equal to another iterator instance with the same type.
  /*!
      \param a_crInstance1 - Current instance of the iterator class.
      \param a_crInstance2 - Another instance of the iterator class.
      \return true  - if class instances are not equal. \n
              false - if class instances are equal. \n
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend Tbool operator != (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance1, const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance2);

  //! Operator: Assign another non constant iterator class instance.
  /*!
      \param a_crInstance - Another instance of the non constant iterator class.
      \return Reference to the current iterator class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator = (const CBinTreeIterator<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);
  //! Operator: Assign another constant iterator class instance.
  /*!
      \param a_crInstance - Another instance of the constant iterator class.
      \return Reference to the current iterator class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator = (const CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);

  //! Operator: Step forward by given steps.
  /*!
      \param a_cStepCount - Steps count to iteration.
      \return Reference to the current class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator += (const Tuint a_cStepCount);
  //! Operator: Step backward by given steps.
  /*!
      \param a_cStepCount - Steps count to iteration.
      \return Reference to the current class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator -= (const Tuint a_cStepCount);
  //! Operator: Step forward once. Prefix version.
  /*!
      \return Reference to the current class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator ++ ();
  //! Operator: Step backward once. Prefix version.
  /*!
      \return Reference to the current class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& operator -- ();
  //! Operator: Step forward once. Postfix version.
  /*!
      \return New class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> operator ++ (int);
  //! Operator: Step backward once. Postfix version.
  /*!
      \return New class instance.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> operator -- (int);

  //! Operator: Step forward by given steps.
  /*!
      \param a_crInstance - Current instance of the iterator class.
      \param a_cStepCount - Steps count to iteration.
      \return New class instance.
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator> operator + (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance, const Tuint a_cStepCount);
  //! Operator: Step backward by given steps.
  /*!
      \param a_crInstance - Current instance of the iterator class.
      \param a_cStepCount - Steps count to iteration.
      \return New class instance.
  */
  template <typename T_OtherType, typename T_OtherBinaryPredicate, class T_OtherAllocator>
  friend CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator> operator - (const CBinTreeIteratorConst<T_OtherType, T_OtherBinaryPredicate, T_OtherAllocator>& a_crInstance, const Tuint a_cStepCount);

  //! Operator: Find iterator with given value in binary tree.
  /*!
      \param a_crItem - Constant reference to the searching item.
      \return Iterator with given value or invalid empty iterator.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> operator [] (const T_Type& a_crItem) const;

  //! Set CBinTreeIterator class instance.
  /*!
      \param a_crInstance - Constant reference to instance of the CBinTreeIterator class.
  */
  void set(const CBinTreeIterator<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);
  //! Set another CBinTreeIteratorConst class instance.
  /*!
      \param a_crInstance - Constant reference to another instance of the CBinTreeIteratorConst class.
  */
  void set(const CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& a_crInstance);

  //! Get forward iterator.
  /*!
      Method  uses 'stepForward()' iterator method to get a  forward  iterator
      instance. If forward iteration cannot be  done  method  returns  invalid
      iterator.

      \return Forward iterator.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getForward() const;
  //! Get backward iterator.
  /*!
      Method  uses 'stepBackward()' iterator method to get a backward iterator
      instance. If forward iteration cannot be  done  method  returns  invalid
      iterator.

      \return Backward iterator.
  */
  CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getBackward() const;

  // IIteratorConst interface overriding methods.
  virtual Tbool isValid() const;
  virtual Tbool isValidContainer() const;
  virtual const CBinTree<T_Type, T_BinaryPredicate, T_Allocator>& getContainerRef() const;
  virtual const CBinTree<T_Type, T_BinaryPredicate, T_Allocator>* getContainerPtr() const;
  virtual const T_Type& getValueRef() const;
  virtual const T_Type* getValuePtr() const;

  // IIteratorMoveAssociative interface overriding methods.
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> find(const T_Type& a_crItem) const;

  // IIteratorMoveTree interface overriding methods.
  virtual Tuint stepForward(const Tuint a_cStepCount = 1);
  virtual Tuint stepBackward(const Tuint a_cStepCount = 1);
  virtual Tbool isRoot() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getRoot() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getParent() const;
  virtual Tuint getSiblingIndex() const;
  virtual Tuint getSiblingsCount() const;
  virtual Tuint getPrevSiblingsCount() const;
  virtual Tuint getNextSiblingsCount() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getFirstSibling() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getLastSibling() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getPrevSibling() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getNextSibling() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getIndexSibling(const Tuint a_cIndex) const;
  virtual Tuint getChildCount() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getFirstChild() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getLastChild() const;
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getIndexChild(const Tuint a_cIndex) const;

  //! Get current same node index.
  /*!
      Method returns index of the current node in same node list.

      \return Current same index.
  */
  virtual Tuint getSameIndex() const;
  //! Get count of nodes in same list of the current binary tree node.
  /*!
      Method returns count of nodes in same list of the  current  binary  tree
      node.

      \return Count of nodes in same list.
  */
  virtual Tuint getSameCount() const;
  //! Get count of previous nodes to the current one in same list.
  /*!
      Method returns count of previous nodes to the current one in same list.

      \return Count of previous nodes to the current one in same list.
  */
  virtual Tuint getPrevSameCount() const;
  //! Get count of next nodes to the current one in same list.
  /*!
      Method returns count of next nodes to the current one in same list.

      \return Count of next nodes to the current one in same list.
  */
  virtual Tuint getNextSameCount() const;
  //! Get iterator to the first same node linked to the current binary tree node.
  /*!
      Method returns iterator to the first same node  linked  to  the  current
      binary tree node.

      \return Iterator to the first same node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getFirstSame() const;
  //! Get iterator to the last same node linked to the current binary tree node.
  /*!
      Method returns iterator to the last same  node  linked  to  the  current
      binary tree node.

      \return Iterator to the last same node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getLastSame() const;
  //! Get iterator to the previous same node linked to the current binary tree node.
  /*!
      Method returns iterator to the previous same node linked to the  current
      binary tree node. Otherwise, method returns invalid empty iterator.

      \return Iterator to the previous same node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getPrevSame() const;
  //! Get iterator to the next same node linked to the current binary tree node.
  /*!
      Method returns iterator to the next same  node  linked  to  the  current
      binary tree node. Otherwise, method returns invalid empty iterator.

      \return Iterator to the next same node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getNextSame() const;
  //! Get iterator to the indexed same node linked to the current binary tree node.
  /*!
      Method returns iterator to the indexed same node linked to  the  current
      binary tree node. Otherwise, method returns invalid empty iterator.

      \param a_cIndex - Index to the same node.
      \return Iterator to the indexed same node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getIndexSame(const Tuint a_cIndex) const;

  //! Get count of nodes in left child same list of the current binary tree node.
  /*!
      Method returns count of nodes in left child same  list  of  the  current
      binary tree node.

      \return Count of nodes in left child same list.
  */
  virtual Tuint getLeftChildCount() const;
  //! Get iterator to the left first child node linked to the current binary tree node.
  /*!
      If current node has left child nodes, method  returns  iterator  to  the
      left first child node linked to the current binary tree node. Otherwise,
      method returns invalid empty iterator.

      \return Iterator to the left first child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getLeftChildFirst() const;
  //! Get iterator to the left last child node linked to the current binary tree node.
  /*!
      If current node has left child nodes, method  returns  iterator  to  the
      left last child node linked to the current binary tree node.  Otherwise,
      method returns invalid empty iterator.

      \return Iterator to the left last child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getLeftChildLast() const;
  //! Get iterator to the indexed left child node linked to the current binary tree node.
  /*!
      If current node has left child nodes, method  returns  iterator  to  the
      indexed left  child  node  linked  to  the  current  binary  tree  node.
      Otherwise, method returns invalid empty iterator.

      \param a_cIndex - Index to the left child node.
      \return Iterator to the indexed left child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getIndexLeftChild(const Tuint a_cIndex) const;

  //! Get count of nodes in right child same list of the current binary tree node.
  /*!
      Method returns count of nodes in right child same list  of  the  current
      binary tree node.

      \return Count of nodes in right child same list.
  */
  virtual Tuint getRightChildCount() const;
  //! Get iterator to the right first child node linked to the current binary tree node.
  /*!
      If current node has right child nodes, method returns  iterator  to  the
      right  first  child  node  linked  to  the  current  binary  tree  node.
      Otherwise, method returns invalid empty iterator.

      \return Iterator to the right first child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getRightChildFirst() const;
  //! Get iterator to the right last child node linked to the current binary tree node.
  /*!
      If current node has right child nodes, method returns  iterator  to  the
      right last child node linked to the current binary tree node. Otherwise,
      method returns invalid empty iterator.

      \return Iterator to the right last child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getRightChildLast() const;
  //! Get iterator to the indexed right child node linked to the current binary tree node.
  /*!
      If current node has right child nodes, method returns  iterator  to  the
      indexed right child  node  linked  to  the  current  binary  tree  node.
      Otherwise, method returns invalid empty iterator.

      \param a_cIndex - Index to the right child node.
      \return Iterator to the indexed right child node linked to the current binary tree node.
  */
  virtual CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> getIndexRightChild(const Tuint a_cIndex) const;

  //! Serialization load CBinTreeIteratorConst class instance.
  /*!
      \param a_rArchive - Reference to the serialization archive.
      \return true  - if serialization has been successfully done. \n
              false - if serialization has not been successfully done. \n
  */
  template <class T_Archive>
  Tbool load(T_Archive& a_rArchive);
  //! Serialization save CBinTreeIteratorConst class instance.
  /*!
      \param a_rArchive - Reference to the serialization archive.
      \return true  - if serialization has been successfully done. \n
              false - if serialization has not been successfully done. \n
  */
  template <class T_Archive>
  Tbool save(T_Archive& a_rArchive) const;
  //! Serialize CBinTreeIteratorConst class instance.
  /*!
      \param a_rArchive - Reference to the serialization archive.
      \return true  - if serialization has been successfully done. \n
              false - if serialization has not been successfully done. \n
  */
  template <class T_Archive>
  Tbool serialize(T_Archive& a_rArchive);

  //! Swap two CBinTreeIteratorConst class instances.
  /*!
      \param a_rInstance - Reference to another CBinTreeIteratorConst class instance.
  */
  void swap(CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>& a_rInstance);

private:
  const CBinTree<T_Type, T_BinaryPredicate, T_Allocator>* m_cpContainer;                   //!< Constant pointer to the iterator container.
  const typename CBinTree<T_Type, T_BinaryPredicate, T_Allocator>::SBinTreeNode* m_cpNode; //!< Constant pointer to the current binary tree node.
  const typename CBinTree<T_Type, T_BinaryPredicate, T_Allocator>::SBinTreeItem* m_cpItem; //!< Constant pointer to the current binary tree item.

  //! Initialize iterator with the container value.
  /*!
      \param a_cpContainer - Constant pointer to the iterator container value.
  */
  CBinTreeIteratorConst(const CBinTree<T_Type, T_BinaryPredicate, T_Allocator>* a_cpContainer);
};
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
/* ITERATOR TRAITS SPECIALIZATION DECLARATIONS                              */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NTraits {
/*--------------------------------------------------------------------------*/
//! Traits meta-class: binary tree constant iterator's traits specialization.
template <typename T_Type, typename T_BinaryPredicate, class T_Allocator>
class MTraitsIterator<NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> > :
  public MType<NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator> >
{
public:
  //! Iterator value type.
  typedef typename NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>::TType value;
  //! Iterator return type.
  typedef typename NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>::TReturn result;
  //! Iterator container type.
  typedef typename NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>::TContainer container;
  //! Iterator base type.
  typedef typename NContainers::NIterators::CBinTreeIteratorConst<T_Type, T_BinaryPredicate, T_Allocator>::TIterator iterator;

  static const Tbool isConst             = true;  //!< Is iterator constant?
  static const Tbool isCircled           = false; //!< Is iterator container circled?
  static const Tbool isMoveForward       = true;  //!< Is iterator supports forward moving?
  static const Tbool isMoveBackward      = true;  //!< Is iterator supports forward and backward moving?
  static const Tbool isMoveRandom        = false; //!< Is iterator supports random moving?
  static const Tbool isMoveAssociative   = true;  //!< Is iterator supports associative moving?
  static const Tbool isMoveTree          = true;  //!< Is iterator supports tree moving?
  static const Tbool isMoveGraph         = false; //!< Is iterator supports graph moving?
  static const Tbool isInsertForward     = false; //!< Is iterator supports forward inserting?
  static const Tbool isInsertBackward    = false; //!< Is iterator supports forward and backward inserting?
  static const Tbool isInsertRandom      = false; //!< Is iterator supports random inserting?
  static const Tbool isInsertAssociative = false; //!< Is iterator supports associative inserting?
  static const Tbool isInsertTree        = false; //!< Is iterator supports tree inserting?
  static const Tbool isInsertGraph       = false; //!< Is iterator supports graph inserting?
  static const Tbool isRemoveForward     = false; //!< Is iterator supports forward removing?
  static const Tbool isRemoveBackward    = false; //!< Is iterator supports forward and backward removing?
  static const Tbool isRemoveRandom      = false; //!< Is iterator supports random removing?
  static const Tbool isRemoveAssociative = false; //!< Is iterator supports associative removing?
  static const Tbool isRemoveTree        = false; //!< Is iterator supports tree removing?
  static const Tbool isRemoveGraph       = false; //!< Is iterator supports graph removing?
};
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#include <Depth/include/containers/iterators/CBinTreeIteratorConst.inl>
/*==========================================================================*/
#endif
