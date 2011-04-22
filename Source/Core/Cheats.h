/*
Copyright (C) 2001 StrmnNrmn

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef CHEATS_H_
#define CHEATS_H_

enum APPLYCHEATMODE { INGAME, BOOTUPONCE, GSBUTTON, ONLYIN1964 };

// Limit the number of cheatcodes on the PSP, for performance reasons
#define MAX_CHEATCODE_PER_GROUP		6

//Cannot exceed 254 groups, must be represented by using 1 byte
#define MAX_CHEATCODE_GROUP_PER_ROM 254

struct CODENODE_STRUCT
{
	u32	addr;
	u16	val;
};

typedef struct CODENODE_STRUCT	CHEATCODENODE;

struct CODEGROUP_STRUCT
{
	u32				country;
	u32				codecount;
	u16				orig;
	u16				old_orig;
	bool			enable;
	bool			active;
	char			name[80];
	char			note[256];
	CHEATCODENODE	codelist[MAX_CHEATCODE_PER_GROUP];
};
typedef struct		CODEGROUP_STRUCT CODEGROUP;

extern u32			codegroupcount;
extern CODEGROUP	*codegrouplist;

void				CheatCodes_Clear();
void				CheatCodes_Activate();
bool				CheatCodes_Read(char *rom_name, char *file);


#endif // CHEATS_H_