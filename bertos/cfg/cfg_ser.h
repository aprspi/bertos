/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2008 Develer S.r.l. (http://www.develer.com/)
 * All Rights Reserved.
 * -->
 *
 * \brief Configuration file for serial module.
 *
 * \version $Id$
 *
 * \author Daniele Basile <asterix@develer.com>
 */

#ifndef CFG_SER_H
#define CFG_SER_H

/**
 * Example of setting for serial port and
 * spi port.
 * Edit these define for your project.
 */

/// Serial port settings. $WIZARD = { "type" : "int" }
#define CONFIG_SER_PORT      0
/// Serial port baudrate. $WIZARD = { "type" : "int" }
#define CONFIG_SER_BAUDRATE  115200UL

/// Spi port settings. $WIZARD = { "type" : "int" }
#define CONFIG_SPI_PORT      0
/// Spi port baudrate. $WIZARD = { "type" : "int" }
#define CONFIG_SPI_BAUDRATE  5000000UL


/// [bytes] Size of the outbound FIFO buffer for port 0. $WIZARD = { "type" : "int" }
#define CONFIG_UART0_TXBUFSIZE  32

/// [bytes] Size of the inbound FIFO buffer for port 0. $WIZARD = { "type" : "int" }
#define CONFIG_UART0_RXBUFSIZE  32

/// [bytes] Size of the outbound FIFO buffer for port 1. $WIZARD = { "type" : "int" }
#define CONFIG_UART1_TXBUFSIZE  32

/// [bytes] Size of the inbound FIFO buffer for port 1. $WIZARD = { "type" : "int" }
#define CONFIG_UART1_RXBUFSIZE  32


/// [bytes] Size of the outbound FIFO buffer for SPI port (AVR only). $WIZARD = { "type" : "int" }
#define CONFIG_SPI_TXBUFSIZE    32

/// [bytes] Size of the inbound FIFO buffer for SPI port (AVR only). $WIZARD = { "type" : "int" }
#define CONFIG_SPI_RXBUFSIZE    32

/// [bytes] Size of the outbound FIFO buffer for SPI port 0. $WIZARD = { "type" : "int" }
#define CONFIG_SPI0_TXBUFSIZE	32

/// [bytes] Size of the inbound FIFO buffer for SPI port 0. $WIZARD = { "type" : "int" }
#define CONFIG_SPI0_RXBUFSIZE	32

/// [bytes] Size of the outbound FIFO buffer for SPI port 1. $WIZARD = { "type" : "int" }
#define CONFIG_SPI1_TXBUFSIZE	32

/// [bytes] Size of the inbound FIFO buffer for SPI port 1. $WIZARD = { "type" : "int" }
#define CONFIG_SPI1_RXBUFSIZE	32

/**
 * SPI data order (AVR only).
 *
 * $WIZARD = {
 * "type" : "enum",
 * "value_list" : "ser_order_bit"
 * }
 */
#define CONFIG_SPI_DATA_ORDER	SER_MSB_FIRST

/// SPI clock division factor (AVR only). $WIZARD = { "type" : "int" }
#define CONFIG_SPI_CLOCK_DIV	16
/**
 * SPI clock polarity: normal low or normal high (AVR only).
 * $WIZARD = {
 * "type" : "enum",
 * "value_list" : "ser_spi_pol"
 * }
 */
#define CONFIG_SPI_CLOCK_POL        SPI_NORMAL_LOW

/**
 * SPI clock phase you can choose sample on first edge or
 * sample on second clock edge (AVR only)
 * $WIZARD = {
 * "type" : "enum",
 * "value_list" : "ser_spi_phase"
 * }
 */
#define CONFIG_SPI_CLOCK_PHASE	    SPI_SAMPLE_ON_FIRST_EDGE

/// Default transmit timeout (ms). Set to -1 to disable timeout support. $WIZARD = { "type" : "int" }
#define CONFIG_SER_TXTIMEOUT    -1

/// Default receive timeout (ms). Set to -1 to disable timeout support. $WIZARD = { "type" : "int" }
#define CONFIG_SER_RXTIMEOUT    -1

/// Use RTS/CTS handshake. $WIZARD = { "type" : "boolean" }
#define CONFIG_SER_HWHANDSHAKE   0

/// Default baud rate (set to 0 to disable). $WIZARD = { "type" : "boolean" }
#define CONFIG_SER_DEFBAUDRATE   0

/// Enable ser_gets() and ser_gets_echo(). $WIZARD = { "type" : "boolean" }
#define CONFIG_SER_GETS          0

/// Enable second serial port in emulator. $WIZARD = { "type" : "boolean" }
#define CONFIG_EMUL_UART1        0

/// For serial debug. $WIZARD = { "type" : "boolean" }
#define CONFIG_SER_STROBE        0

#endif /* CFG_SER_H */
