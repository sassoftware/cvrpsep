/* (C) Copyright 2003 Jens Lysgaard. All rights reserved. */
/* OSI Certified Open Source Software */
/* This software is licensed under the Common Public License Version 1.0 */

#ifndef _H_FCITS
#define _H_FCITS

void FCITS_MainCutGen(ReachPtr SupportPtr,
                      int NoOfCustomers,
                      int *Demand,
                      int CAP,
                      double **XMatrix,
                      ReachPtr InitSuperNodesRPtr,
                      ReachPtr InitSAdjRPtr,
                      int *InitSuperDemand,
                      int InitShrunkGraphCustNodes,
                      int MaxFCITSLoops,
                      int MaxNoOfCuts,
                      double *MaxViolation,
                      int *NoOfGeneratedCuts,
                      CnstrMgrPointer CutsCMP);

#endif

