/*
 * Bitmap.
 *
 * (C) 2019.06.10 <buddy.zhang@aliyun.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/kernel.h>
#include <linux/init.h>

/* header of bitmap */
#include <linux/bitmap.h>

static __init int bitmap_demo_init(void)
{
	unsigned long bitmap1 = 0xffff0000;
	unsigned long bitmap2 = 0x000fffff;

	if (__bitmap_intersects(&bitmap1, &bitmap2, 32))
		printk("%#lx intersects with %#lx\n", bitmap1, bitmap2);

	return 0;
}
device_initcall(bitmap_demo_init);
