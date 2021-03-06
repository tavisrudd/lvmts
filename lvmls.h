/*
 * Copyright (C) 2011 Hubert Kario <kario@wsisiz.edu.pl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */
#ifndef _lvmls_h_
#define _lvmls_h_

void init_le_to_pe(void);

void le_to_pe_exit(void);

struct pv_info {
    char *pv_name;
    uint64_t start_seg;
};

// convert logical extent from logical volume specified by lv_name,
// vg_name and logical extent number (le_num) to physical extent
// on specific device
struct pv_info *LE_to_PE(char *vg_name, char *lv_name, uint64_t le_num);

uint64_t get_pe_size(char *vg_name);

#endif /* ifndef _lvmls_h */

