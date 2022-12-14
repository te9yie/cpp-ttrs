#include "sdl2/core.h"

int main(int /*argc*/, char* /*argv*/[]) {
#if defined(_MSC_VER)
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

  SDL_LogSetAllPriority(SDL_LOG_PRIORITY_VERBOSE);

  auto core = sdl2::Core::make().unwrap();

  return 0;
}