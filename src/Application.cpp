#include "Application.h"
namespace Iris {
    Application::Application() {
        // Eventual SDL Init code
    }

    Application::~Application() {
        // Memory cleanup
    }

    void Application::Run() {
        while (m_Running) {
            // game code
        }
    }

    void Application::Stop() {
        m_Running = false;
    }
}