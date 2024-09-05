#ifndef MBLOCK_H
#define MBLOCK_H

class MBLOCK {
  void * memoryStart;
  size_t memorySize;

  public:
    MBLOCK(size_t size);
    ~MBLOCK();

    void * memoryInsert(size_t size);
    void memoryFree(void * ptr);
};

#endif
