/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#pragma once

// 100k bed thermistor with a 10K pull-up resistor - made by $ buildroot/share/scripts/createTemperatureLookupMarlin.py --rp=10000

constexpr temp_entry_t temptable_99[] PROGMEM = {
    {OV(23.5),      288}, // 225
    {OV(27.75),    276}, // 220
    {OV(32.5),     267}, // 215
    {OV(36.5),   259}, // 210
    {OV(41),     251}, // 205
    {OV(45),   247}, // 200
    {OV(49.5),   240}, // 195
    {OV(54.5),   235}, // 190
    {OV(61),     228}, // 185
    {OV(66.75),   224}, // 180
    {OV(70.25),  221}, // 175
    {OV(73.75),  218}, // 170
    {OV(77.25),  215}, // 165
    {OV(84.25),  211}, // 160
    {OV(92),     206}, // 155
    {OV(102.5),  200}, // 150
    {OV(114.5),  194}, // 145
    {OV(128.25), 188}, // 140
    {OV(142),    183}, // 135
    {OV(156),    178}, // 130
    {OV(175.25), 172}, // 125
    {OV(195),    167}, // 120
    {OV(215.75), 162}, // 115
    {OV(240.5),  157}, // 110
    {OV(268),    151}, // 105
    {OV(311.25), 143}, // 100
    {OV(407),    128}, // 90
    {OV(516),    114}, // 80
    {OV(652.5),  97}, // 70
    {OV(758),    83}, // 60
    {OV(866),    67}, // 50
    {OV(943),    49}, // 40
    {OV(983.5),  34}, // 30
    {OV(996.5),  26},
    {OV(1023),   0},
};
