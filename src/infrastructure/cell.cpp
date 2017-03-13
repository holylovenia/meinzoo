#include "cell.h"

// ctor
Cell::Cell(bool accessible) {
  is_accessible = accessible;
}
// cctor
Cell::Cell(Cell& C) {
  is_accessible = C.is_accessible;
}
// operator=
Cell& Cell::operator=(Cell& C) {
  is_accessible = C.is_accessible;
  return *this;
}