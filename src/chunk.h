//
// Created by max on 3/2/20.
//

#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"
#include "value.h"


typedef enum {
    OP_CONSTANT,
    OP_COMPARE,
    OP_NIL,
    OP_TRUE,
    OP_FALSE,
    OP_POP,
    OP_GET_LOCAL,
    OP_SET_LOCAL,
    OP_GET_GLOBAL,
    OP_DEFINE_GLOBAL,
    OP_SET_GLOBAL,
    OP_GET_UPVALUE,
    OP_SET_UPVALUE,
    OP_GET_PROPERTY,
    OP_SET_PROPERTY,
    OP_GET_SUPER,
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NOT,
    OP_NEGATE,
    OP_JUMP,
    OP_CLOSURE,
    OP_JUMP_IF_FALSE,
    OP_LOOP,
    OP_CALL,
    OP_CLOSE_UPVALUE,
    OP_RETURN,
    OP_CLASS,
    OP_INHERIT,
    OP_METHOD,
    OP_INVOKE,
    OP_SUPER_INVOKE,
    OP_METHOD_16,
    OP_CONSTANT_16,
    OP_CLOSURE_16,
    OP_GET_LOCAL_16,
    OP_SET_LOCAL_16,
    OP_GET_UPVALUE_16,
    OP_SET_UPVALUE_16,
    OP_GET_GLOBAL_16,
    OP_SET_GLOBAL_16,
    OP_CLASS_16,
    OP_DEFINE_GLOBAL_16,
    OP_SET_PROPERTY_16,
    OP_INVOKE_16,
    OP_GET_PROPERTY_16,
    OP_GET_SUPER_16,
    OP_SUPER_INVOKE_16,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint16_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint16_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif //CLOX_CHUNK_H
