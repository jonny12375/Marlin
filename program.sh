#!/bin/bash

DISPLAY= JLinkExe -AutoConnect 1 -Speed 4000 -device STM32F407IG -if SWD -USB 801027328 -CommandFile program_btt_gtr.jlink
