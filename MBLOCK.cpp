#include "MBLOCK.h"
#include <stdlib.h>
#include <stdio.h>


MBLOCK::MBLOCK(size_t size){
  memorySize = size;
  memoryStart = malloc(memorySize);
}

MBLOCK::~MBLOCK(){
  free(memoryStart);
}

void* MBLOCK::memoryInsert(size_t size){

}

void MBLOCK::memoryFree(void * ptr){
  
}