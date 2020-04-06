
#include "MultiBitDebouncer.h"

MultiBitDebouncer::MultiBitDebouncer(unsigned long size, unsigned long timeout, unsigned long (*timeFunction)()) {
  this->size = size ? size : 1; // minimum 1 bit
  this->timeout = timeout;
  this->timeFunction = timeFunction;
  this->byteCount = (this->size + 7) / 8;
  this->lastChange = new unsigned long[this->size]();
  this->state = new unsigned char[this->byteCount]();
  this->lastState = new unsigned char[this->byteCount]();
  this->changed = new unsigned char[this->byteCount]();
}

MultiBitDebouncer::~MultiBitDebouncer() {
  delete [] this->lastChange;
  delete [] this->state;
  delete [] this->lastState;
  delete [] this->changed;
}