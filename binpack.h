/* (C) Copyright 2003 Jens Lysgaard. All rights reserved. */
/* OSI Certified Open Source Software */
/* This software is licensed under the Common Public License Version 1.0 */

#ifndef _H_BINPACK
#define _H_BINPACK

void BP_ExactBinPacking(int CAP,
                        int *ItemSize,
                        int n,
                        int *LB,
                        int *UB,
                        int *Bin);

#endif

