/*!
 *  \file    CResizePolicyAdditiveGrow.cpp Growing additive resize policy
 *           class. It uses additive resize factor allocation strategy.
 *  \brief   Growing additive resize policy class (source).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    15.03.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Growing additive resize policy class (source).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers policy
    VERSION:   1.0
    CREATED:   15.03.2006 23:36:31

    EMAIL:     chronoxor@gmail.com
    WWW:       http://code.google.com/p/depth

    COPYRIGHT: (C) 2005-2010 The NULL workgroup. All Rights Reserved.
*/
/*--------------------------------------------------------------------------*/
/*
    Copyright (C) 2005-2010 The NULL workgroup.

    This program is free software; you can redistribute it  and/or  modify  it
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

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
#include <Depth/include/base.hpp>
/*--------------------------------------------------------------------------*/
#include <Depth/include/containers/policy/CResizePolicyAdditiveGrow.hpp>
/*==========================================================================*/
#ifndef __CRESIZEPOLICYADDITIVEGROW_CPP__
#define __CRESIZEPOLICYADDITIVEGROW_CPP__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*--------------------------------------------------------------------------*/
namespace NPolicy {
/*==========================================================================*/
/* CLASS IMPLEMENTATIONS                                                    */
/*==========================================================================*/
Tbool CResizePolicyAdditiveGrow::setResizeFactor(const Tuint a_cResizeFactor)
{ CALL
  if (a_cResizeFactor < 1)
  {
    m_ResizeFactor = 1;
    return false;
  }
  else
  {
    m_ResizeFactor = a_cResizeFactor;
    return true;
  }
}
/*--------------------------------------------------------------------------*/
Tuint CResizePolicyAdditiveGrow::resize(const Tuint a_cSize)
{ CALL
  // For growing resize policy lower capacity bound is always 0.
  m_LoCapacity = 0;

  // Check if we need to make a reallocation.
  if ((a_cSize < m_LoCapacity) || (a_cSize > m_HiCapacity))
    m_HiCapacity = (a_cSize / m_ResizeFactor) * m_ResizeFactor + (((a_cSize % m_ResizeFactor) == 0) ? 0 : m_ResizeFactor);
  return m_HiCapacity;
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
