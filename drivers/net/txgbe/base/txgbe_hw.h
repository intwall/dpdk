/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2015-2020
 */

#ifndef _TXGBE_HW_H_
#define _TXGBE_HW_H_

#include "txgbe_type.h"

s32 txgbe_init_hw(struct txgbe_hw *hw);

void txgbe_set_lan_id_multi_port(struct txgbe_hw *hw);

s32 txgbe_validate_mac_addr(u8 *mac_addr);

s32 txgbe_check_mac_link(struct txgbe_hw *hw,
			       u32 *speed,
			       bool *link_up, bool link_up_wait_to_complete);

void txgbe_clear_tx_pending(struct txgbe_hw *hw);

s32 txgbe_reset_pipeline_raptor(struct txgbe_hw *hw);

s32 txgbe_init_shared_code(struct txgbe_hw *hw);
s32 txgbe_set_mac_type(struct txgbe_hw *hw);
s32 txgbe_init_ops_pf(struct txgbe_hw *hw);
s32 txgbe_get_link_capabilities_raptor(struct txgbe_hw *hw,
				      u32 *speed, bool *autoneg);
s32 txgbe_start_mac_link_raptor(struct txgbe_hw *hw,
			       bool autoneg_wait_to_complete);
s32 txgbe_setup_mac_link(struct txgbe_hw *hw, u32 speed,
			       bool autoneg_wait_to_complete);
void txgbe_init_mac_link_ops(struct txgbe_hw *hw);
s32 txgbe_reset_hw(struct txgbe_hw *hw);
s32 txgbe_init_phy_raptor(struct txgbe_hw *hw);
bool txgbe_verify_lesm_fw_enabled_raptor(struct txgbe_hw *hw);
#endif /* _TXGBE_HW_H_ */