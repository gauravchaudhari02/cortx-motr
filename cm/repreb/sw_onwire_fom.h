/* -*- C -*- */
/*
 * Copyright (c) 2013-2020 Seagate Technology LLC and/or its Affiliates
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * For any questions about this software or licensing,
 * please email opensource@seagate.com or cortx-questions@seagate.com.
 *
 */


#pragma once

#ifndef __MOTR_CM_REPREB_SW_ONWIRE_FOM_H__
#define __MOTR_CM_REPREB_SW_ONWIRE_FOM_H__

/**
   @addtogroup XXX

   @{
 */

enum cm_repreb_sw_phases {
	SWOPH_START = M0_FOM_PHASE_INIT,
	SWOPH_FINI = M0_FOM_PHASE_FINISH,
};

M0_INTERNAL int m0_cm_repreb_sw_onwire_fom_create(struct m0_fop *fop,
						  struct m0_fop *r_fop,
						  struct m0_fom **out,
						  struct m0_reqh *reqh);

/** @} XXX */

#endif /* __MOTR_CM_REPREB_SW_ONWIRE_FOM_H__ */
/*
 *  Local variables:
 *  c-indentation-style: "K&R"
 *  c-basic-offset: 8
 *  tab-width: 8
 *  fill-column: 80
 *  scroll-step: 1
 *  End:
 */
