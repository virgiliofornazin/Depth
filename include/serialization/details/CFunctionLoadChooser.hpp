/*!
 *  \file    CFunctionLoadChooser.hpp Serialization helper class that wraps
 *           'load()' free function call during the serialization splitting
 *           operation for the 'serialize()' free function.
 *  \brief   Serialization 'load()' free function chooser helper class.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    05.01.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Serialization 'load()' free function chooser helper class.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Serialization details
    VERSION:   1.0
    CREATED:   05.01.2007 23:14:53

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
#ifndef __CFUNCTIONLOADCHOOSER_HPP__
#define __CFUNCTIONLOADCHOOSER_HPP__
/*==========================================================================*/
#include <Depth/include/common/IStatic.hpp>
#include <Depth/include/serialization/FLoad.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NSerialization {
/*--------------------------------------------------------------------------*/
namespace NDetails {
/*==========================================================================*/
/* CLASS DECLARATIONS                                                       */
/*==========================================================================*/
//! Serialization 'load()' free function chooser helper class.
/*!
    Serialization 'load()' free function chooser helper class  wraps  'load()'
    function  call  during  the  serialization  splitting  operation  for  the
    'serialize()' free function.
*/
template <class T_Archive, typename T_Type>
class CFunctionLoadChooser :
  public NDepth::NCommon::IStatic
{
public:
  //! Invoke wrapped 'load()' free function.
  /*!
      \param a_rArchive - Reference to the serialization archive.
      \param a_rInstance - Reference to the serialized type instance.
      \return true  - if serialization has been successfully done. \n
              false - if serialization has not been successfully done. \n
  */
  static Tbool invoke(T_Archive& a_rArchive, T_Type& a_rInstance);
};
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#include <Depth/include/serialization/details/CFunctionLoadChooser.inl>
/*==========================================================================*/
#endif