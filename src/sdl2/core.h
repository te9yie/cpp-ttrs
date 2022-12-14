#pragma once
#include "t9/result.h"

namespace sdl2 {

/// @brief SDL2のコア
class Core {
 private:
  class Drop {
   public:
    ~Drop();
  };

 private:
  std::unique_ptr<Drop> drop_;

 public:
  Core();

 public:
  /// @brief Core の生成
  static t9::Result<Core> make();
};

}  // namespace sdl2