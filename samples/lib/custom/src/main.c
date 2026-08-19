/*
 * Copyright (c) 2021, Legrand North America, LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include <app/lib/custom.h>

int main(void)
{
	printk("Custom library sample\n");

	printk("custom_get_value(0) = %d\n", custom_get_value(0));
	printk("custom_get_value(1) = %d\n", custom_get_value(1));
	printk("custom_get_value(42) = %d\n", custom_get_value(42));

	return 0;
}
