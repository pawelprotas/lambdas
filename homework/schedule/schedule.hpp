#pragma once
#include <chrono>
#include <functional>
#include <string>

void schedule(const std::function<void()>& func, std::chrono::seconds duration);
void schedule(const std::function<void(int)>& func, std::chrono::seconds duration, int intValue);
void schedule(const std::function<void(std::string, double)>& func, std::chrono::seconds duration, const std::string& stringValue, double doubleValue);
