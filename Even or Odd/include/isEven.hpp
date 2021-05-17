//
//  isEven.hpp
//  Math
//

#ifndef isEven_h
#define isEven_h

namespace math {

template <class T> bool isEven(const T number) { return !(number & 1); }

} // namespace math

#endif /* isEven_h */
