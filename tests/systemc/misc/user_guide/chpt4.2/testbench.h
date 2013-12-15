/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2014 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.accellera.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  testbench.h -- 

  Original Author: Martin Janssen, Synopsys, Inc., 2002-02-15

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/

/* Filename testbench.h */
/* This is the interface file for module `testbench' */

#include "systemc.h"

struct testbench : public sc_module { 
  numgen N; // component
  display D; // component

  //Constructor 
  testbench(sc_module_name NAME,
	    sc_clock& CLK,
	    const sc_signal<double>& IN_,
	    sc_signal<double>& OUT1,
	    sc_signal<double>& OUT2)
    : sc_module(NAME), 
      N("Numgen", CLK, OUT1, OUT2),
      D("Display", CLK, IN_)
  {
  }
};


