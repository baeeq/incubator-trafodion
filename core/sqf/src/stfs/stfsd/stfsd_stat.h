#ifndef STFSD_STAT_H
#define STFSD_STAT_H

///////////////////////////////////////////////////////////////////////////////
// 
/// \file    stfsd_stat.h
/// \brief  
///   
/// This file contains the declaration of the STFSd_createFragment() 
/// function.
//                                                                                 
// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
///////////////////////////////////////////////////////////////////////////////
namespace STFS {

int
STFSd_stat (stfs_nodeid_t            pv_Nid,
            char                    *pp_Path,
            struct STFS_StatSet     *pp_StatSet,
            stfs_statmask_t          pv_Mask);

} //namespace STFS
#endif //STFSD_STAT_H
