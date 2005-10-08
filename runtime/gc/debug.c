/* Copyright (C) 1999-2005 Henry Cejtin, Matthew Fluet, Suresh
 *    Jagannathan, and Stephen Weeks.
 * Copyright (C) 1997-2000 NEC Research Institute.
 *
 * MLton is released under a BSD-style license.
 * See the file MLton-LICENSE for details.
 */

#ifndef DEBUG
#define DEBUG FALSE
#endif

enum {
  DEBUG_ARRAY = FALSE,
  DEBUG_CALL_STACK = FALSE,
  DEBUG_CARD_MARKING = FALSE,
  DEBUG_DETAILED = FALSE,
  DEBUG_ENTER_LEAVE = FALSE,
  DEBUG_GENERATIONAL = FALSE,
  DEBUG_MARK_COMPACT = FALSE,
  DEBUG_MEM = FALSE,
  DEBUG_PROFILE = FALSE,
  DEBUG_RESIZING = FALSE,
  DEBUG_SHARE = FALSE,
  DEBUG_SIZE = FALSE,
  DEBUG_STACKS = FALSE,
  DEBUG_THREADS = FALSE,
  DEBUG_WEAK = FALSE,
  DEBUG_WORLD = FALSE,
  FORCE_GENERATIONAL = FALSE,
  FORCE_MARK_COMPACT = FALSE,
};
