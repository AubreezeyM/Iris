#pragma once

#include "SDL3/SDL_video.h"
namespace Iris {
    class Application {
    public:
        Application();
        ~Application();

        void Run();
        void Stop();
    private:
        bool m_Running;
        SDL_Window* m_Window;
    };
}