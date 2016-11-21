/*
 * Author: Copyright (C) Andrzej Surowiec 2012
 *
 *
 * This file is part of Nitrokey.
 *
 * Nitrokey is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * Nitrokey is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Nitrokey. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HOTPSLOT_H
#define HOTPSLOT_H

#ifdef _MSC_VER
#define uint8_t unsigned char
#define uint32_t unsigned long
#else
#include "inttypes.h"
#endif

static const int SECRET_LENGTH = 40;
static const int SECRET_LENGTH_BASE32 = SECRET_LENGTH/10*16;
static const int SECRET_LENGTH_HEX = SECRET_LENGTH*2;

class OTPSlot {
public:
  OTPSlot();
  OTPSlot(uint8_t slotNumber, uint8_t slotName[15], uint8_t secret[SECRET_LENGTH], uint8_t counter[8],
           uint8_t config);
  uint8_t slotNumber;
  uint8_t slotName[15];
  uint8_t secret[SECRET_LENGTH];
    union{
      uint8_t counter[8];
      uint64_t interval;
    };
  uint8_t config;
  uint8_t tokenID[13];
  bool isProgrammed;
};

#endif // HOTPSLOT_H
