/*
 * Copyright (C) 2013 XiaoMi, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _CYTTSP_BUTTON_H_
#define _CYTTSP_BUTTON_H_

#include <linux/types.h>

struct cyttsp_config_info {
	u8 panel_id;
	const char* fw_name;
};

struct cyttsp_button_platform_data {
	int irq_gpio;
	u32 irq_gpio_flags;
	unsigned long irqflags;
	const char *input_name;
	int nbuttons;
	int *key_code;
	u8 button_status_reg;
	u8 bootloader_addr;
	u8 standby_reg;
	int default_config;
	int config_array_size;
	struct cyttsp_config_info *config_array;
	bool cut_off_power;
};

void cyttsp_button_enter_glove_mode(bool on);

#endif
