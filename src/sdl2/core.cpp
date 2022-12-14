#include "core.h"

namespace sdl2 {

Core::Drop::~Drop() {
  SDL_LogInfo(SDL_LOG_CATEGORY_SYSTEM, "shutdown SDL.");
  SDL_Quit();
}

Core::Core() : drop_(std::make_unique<Drop>()) {}

/*static*/ t9::Result<Core> Core::make() {
  SDL_LogInfo(SDL_LOG_CATEGORY_SYSTEM, "initialize SDL.");
  if (SDL_Init(0) < 0) {
    SDL_LogCritical(SDL_LOG_CATEGORY_SYSTEM, "initialize SDL: %s",
                    SDL_GetError());
    return t9::none;
  }
  return Core{};
}

}  // namespace sdl2