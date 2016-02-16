/*
 * Copyright (c) 2016 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef YOTTA_CONFIG_H
#define YOTTA_CONFIG_H

#ifndef YOTTA_CFG_BORDER_ROUTER
#error No yotta configuration defined!
#endif

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

static const char psk_key[] = YOTTA_CFG_BORDER_ROUTER_PSK_KEY;
static const char tls_psk_key[] = YOTTA_CFG_BORDER_ROUTER_TLS_PSK_KEY;

static conf_t yotta_config[] = {
	/* NAME, STRING_VALUE, INT_VALUE */
    {"NAME", STR(YOTTA_CFG_BORDER_ROUTER_NAME), 0},
	{"MODEL", STR(YOTTA_CFG_BORDER_ROUTER_MODEL), 0},
	{"MANUFACTURER", STR(YOTTA_CFG_BORDER_ROUTER_MANUFACTURER), 0},
	{"NETWORK_MODE", STR(YOTTA_CFG_BORDER_ROUTER_NETWORK_MODE), 0 },
	{"SECURITY_MODE", STR(YOTTA_CFG_BORDER_ROUTER_SECURITY_MODE), 0},
	{"PANA_MODE", STR(YOTTA_CFG_BORDER_ROUTER_PANA_MODE), 0},
	{"PSK_KEY", psk_key, 0},
	{"PSK_KEY_ID", NULL, YOTTA_CFG_BORDER_ROUTER_PSK_KEY_ID},
	{"BR_PAN_ID", NULL, YOTTA_CFG_BORDER_ROUTER_BR_PAN_ID},
	{"NETWORKID", STR(YOTTA_CFG_BORDER_ROUTER_NETWORKID), 0},
	{"PREFIX", STR(YOTTA_CFG_BORDER_ROUTER_PREFIX), 0},
	{"BACKHAUL_PREFIX", STR(YOTTA_CFG_BORDER_ROUTER_BACKHAUL_PREFIX), 0},
	{"BACKHAUL_DEFAULT_ROUTE", STR(YOTTA_CFG_BORDER_ROUTER_BACKHAUL_DEFAULT_ROUTE), 0},
	{"BACKHAUL_NEXT_HOP", STR(YOTTA_CFG_BORDER_ROUTER_BACKHAUL_NEXT_HOP), 0},
	{"RF_CHANNEL", NULL, YOTTA_CFG_BORDER_ROUTER_RF_CHANNEL},
	{"BR_RPL_FLAGS", NULL, YOTTA_CFG_BORDER_ROUTER_BR_RPL_FLAGS},
	{"BR_RPL_INSTANCE_ID", NULL, YOTTA_CFG_BORDER_ROUTER_BR_RPL_INSTANCE_ID},
	{"BR_ND_ROUTE_LIFETIME", NULL, YOTTA_CFG_BORDER_ROUTER_BR_ND_ROUTE_LIFETIME},
	{"BR_BEACON_PROTOCOL_ID", NULL, YOTTA_CFG_BORDER_ROUTER_BR_BEACON_PROTOCOL_ID},
	{"BR_DAG_DIO_INT_DOUB", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_DIO_INT_DOUB},
	{"BR_DAG_DIO_INT_MIN", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_DIO_INT_MIN},
	{"BR_DAG_DIO_REDU", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_DIO_REDU},
	{"BR_DAG_MAX_RANK_INC", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_MAX_RANK_INC},
	{"BR_DAG_MIN_HOP_RANK_INC", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_MIN_HOP_RANK_INC},
	{"BR_LIFE_IN_SECONDS", NULL, YOTTA_CFG_BORDER_ROUTER_BR_LIFE_IN_SECONDS},
	{"BR_LIFETIME_UNIT", NULL, YOTTA_CFG_BORDER_ROUTER_BR_LIFETIME_UNIT},
	{"BR_DAG_SEC_PCS", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_SEC_PCS},
	{"BR_DAG_OCP", NULL, YOTTA_CFG_BORDER_ROUTER_BR_DAG_OCP},
	{"TLS_PSK_KEY", tls_psk_key, 0},
	{"TLS_PSK_KEY_ID", NULL, YOTTA_CFG_BORDER_ROUTER_TLS_PSK_KEY_ID},
	{"BACKHAUL_BOOTSTRAP_MODE", NULL, YOTTA_CFG_BORDER_ROUTER_BACKHAUL_BOOTSTRAP_MODE},
	{"BR_SHORT_ADDRESS", NULL, YOTTA_CFG_BORDER_ROUTER_BR_SHORT_ADDRESS},
	{"MULTICAST_ADDR", STR(YOTTA_CFG_BORDER_ROUTER_MULTICAST_ADDR), 0},
	/* Array must end on {NULL, NULL, 0} field */
	{NULL, NULL, 0}
};

conf_t *global_config = yotta_config;

#endif //YOTTA_CONFIG_H
