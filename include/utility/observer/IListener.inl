/*!
 *  \file    IListener.inl Listener interface receives notifications form
 *           IConnector interface.
 *  \brief   Listener interface (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    03.07.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Listener interface (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Utilities observer
    VERSION:   1.0
    CREATED:   03.07.2007 00:01:44

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
#ifndef __ILISTENER_INL__
#define __ILISTENER_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NUtility {
/*--------------------------------------------------------------------------*/
namespace NObserver {
/*==========================================================================*/
/* INLINE INTERFACE IMPLEMENTATIONS                                         */
/*==========================================================================*/
inline IListener::IListener()
{ CALL

}
/*--------------------------------------------------------------------------*/
inline IListener::~IListener()
{ CALL

}
/*--------------------------------------------------------------------------*/
inline Tbool IListener::onConnect(const IConnector& a_crIConnector)
{ CALL
  IGNORE_UNUSED(a_crIConnector);
  return true;
}
/*--------------------------------------------------------------------------*/
inline Tbool IListener::onDisconnect(const IConnector& a_crIConnector)
{ CALL
  IGNORE_UNUSED(a_crIConnector);

  return true;
}
/*--------------------------------------------------------------------------*/
inline void IListener::onNotify(const IConnector& a_crIConnector)
{ CALL
  IGNORE_UNUSED(a_crIConnector);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif