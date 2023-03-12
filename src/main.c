/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

void main(void)
{

	printk("Zephyr Example Application");


	while (1) {

		printk("This is the bare minimum bra! \n");

		k_sleep(K_MSEC(1000));
	}
}