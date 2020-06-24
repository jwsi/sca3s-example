/* Copyright (C) 2018 SCARV project <info@scarv.org>
 *
 * Use of this source code is restricted per the MIT license, a copy of which 
 * can be found at https://opensource.org/licenses/MIT (or should be included 
 * as LICENSE.txt within the associated archive or repository).
 */

#ifndef __KERNEL_IMP_H
#define __KERNEL_IMP_H

#include   "util.h"
#include "kernel.h"

/** \defgroup   block_agnostic Block cipher kernel: implementation-agnostic functionality
  *             The functionality captured by this group is agnostic to the 
  *             kernel being implemented:
  *             it must not be altered when producing an associated implementation.
  *
  * \defgroup   block_specific Block cipher kernel: implementation-specific functionality
  *             The functionality captured by this group is specific to the 
  *             kernel being implemented:
  *             it must     be altered when producing an associated implementation.
  */

// ============================================================================

/** @ingroup    block_agnostic
  * @brief      A symbolic identifier for generic block cipher.
  */

#define KERNEL_NAMEOF_GENERIC ( 0 )

/** @ingroup    block_agnostic
  * @brief      A symbolic identifier for AES     block cipher.
  */

#define KERNEL_NAMEOF_AES     ( 1 )

/** @ingroup    block_agnostic
  * @brief      A symbolic identifier for encryption operation.
  */

#define KERNEL_MODEOF_ENC     ( 0 )

/** @ingroup    block_agnostic
  * @brief      A symbolic identifier for decryption operation.
  */

#define KERNEL_MODEOF_DEC     ( 1 )

// ============================================================================

/** @ingroup    block_specific
  * @brief      The kernel name, e.g., 
  *             1) KERNEL_NAMEOF_GENERIC, for generic block cipher,
  *             2) KERNEL_NAMEOF_AES,     for AES     block cipher,
  *             3) ...
  */

#if !defined( KERNEL_NAMEOF     )
#define KERNEL_NAMEOF     ( KERNEL_NAMEOF_GENERIC )
#endif

/** @ingroup    block_specific
  * @brief      The kernel type, i.e., either
  *             1) KERNEL_MODEOF_ENC for encryption operation,
  *                or
  *             2) KERNEL_MODEOF_DEC for decryption operation.
  */

#if !defined( KERNEL_MODEOF     )
#define KERNEL_MODEOF     ( KERNEL_MODEOF_ENC )
#endif

/** @ingroup    block_specific
  * @brief      Number of bytes in the (externally supplied) randomness.
  */

#if !defined( KERNEL_SIZEOF_RND )
#define KERNEL_SIZEOF_RND (  0 )
#endif

/** @ingroup    block_specific
  * @brief      Initial value   of the (externally supplied) randomness.
  */

#if !defined( KERNEL_INITOF_RND )
#define KERNEL_INITOF_RND
#endif

/** @ingroup    block_specific
  * @brief      Number of bytes in the cipher key.
  */

#if !defined( KERNEL_SIZEOF_KEY )
#define KERNEL_SIZEOF_KEY ( 16 )
#endif

/** @ingroup    block_specific
  * @brief      Initial value   of the cipher key.
  */

#if !defined( KERNEL_INITOF_KEY )
#define KERNEL_INITOF_KEY
#endif

/** @ingroup    block_specific
  * @brief      Number of bytes in the plaintext or ciphertext block.
  */

#if !defined( KERNEL_SIZEOF_BLK )
#define KERNEL_SIZEOF_BLK ( 16 )
#endif

/** @ingroup    block_specific
  * @brief      Initial value   of the plaintext or ciphertext block.
  */

#if !defined( KERNEL_INITOF_BLK )
#define KERNEL_INITOF_BLK
#endif

// ============================================================================

#endif
