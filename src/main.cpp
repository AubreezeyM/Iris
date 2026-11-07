#include "Application.h"
#include <memory>
#include <print>

int main(void) {
    std::print("Initializing Application...");
    auto app = std::make_unique<Iris::Application>();
}