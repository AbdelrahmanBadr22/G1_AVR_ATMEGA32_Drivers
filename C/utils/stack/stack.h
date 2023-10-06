#ifndef _STACK_H_
#define _STACK_H_

#include "stack_macros.h"

// -------------------------------
// Instantiate Stacks Macros
// -------------------------------
Stack_t(char)
Stack_Init(char)
Stack_Push(char)
Stack_Pop(char)
Stack_GetSize(char)
Stack_GetTop(char)

Stack_t(uint32_t)
Stack_Init(uint32_t)
Stack_Push(uint32_t)
Stack_Pop(uint32_t)
Stack_GetSize(uint32_t)
Stack_GetTop(uint32_t)

Stack_t(sint32_t)
Stack_Init(sint32_t)
Stack_Push(sint32_t)
Stack_Pop(sint32_t)
Stack_GetSize(sint32_t)
Stack_GetTop(sint32_t)

Stack_t(f32_t)
Stack_Init(f32_t)
Stack_Push(f32_t)
Stack_Pop(f32_t)
Stack_GetSize(f32_t)
Stack_GetTop(f32_t)

#endif /*_STACK_H_*/