#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

/* Basic definitions of fixed point. */
typedef int fixed_t;
/* 16 LSB used for fractional part. */
#define F 16384
/* Convert a value to fixed-point value. */
#define FP_CONST(A) ((A) * (F))
/* Get integer part of a fixed-point value. */
#define FP_INT_PART(A) ((A) / (F))
/* Get rounded integer of a fixed-point value. */
#define FP_ROUND(A) ((A) >= 0 ? ((A) + (F) / 2) / (F) : ((A) - (F) / 2) / (F))
/* Add two fixed-point value. */
#define FP_ADD(A,B) (A + B)
/* Substract two fixed-point value. */
#define FP_SUB(A,B) (A - B)
/* Add a fixed-point value A and an int value B. */
#define FP_ADD_MIX(A,B) ((A) + ((B) * (F)))
/* Substract an int value B from a fixed-point value A */
#define FP_SUB_MIX(A,B) ((A) - ((B) * (F)))
/* Multiply two fixed-point value. */
#define FP_MULT(A,B) (((int64_t)(A)) * (B) / (F))
/* Multiply a fixed-point value A by an int value B. */
#define FP_MULT_MIX(A,B) (A * B)
/* Divide two fixed-point value. */
#define FP_DIV(A,B) (((int64_t)(A)) * (F) / (B))
/* Divide a fixed-point value A by an int value B. */
#define FP_DIV_MIX(A,B) (A / B)

#endif /* thread/fixed_point.h */
