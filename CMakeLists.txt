# SPDX-License-Identifier: Apache-2.0


cmake_minimum_required(VERSION 3.13.1)


# Re-direct the directory where the 'boards' directory is found from
# $ZEPHYR_BASE to this directory.
set(BOARD_ROOT ${CMAKE_CURRENT_LIST_DIR})

set(BOARD nrf52840dk_nrf52840)
#set(BOARD mNordic nrf52840dk board)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(fscratch)
target_sources(app PRIVATE src/main.c)