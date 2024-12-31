#include "schedule.hpp"

#include <thread>

void schedule(const std::function<void()>& func, const std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule(const std::function<void(int)>& func, const std::chrono::seconds duration, const int intValue) {
    std::this_thread::sleep_for(duration);
    func(intValue);
}

void schedule(const std::function<void(std::string, double)>& func, const std::chrono::seconds duration, const std::string& stringValue, const double doubleValue) {
    std::this_thread::sleep_for(duration);
    func(stringValue, doubleValue);
}
