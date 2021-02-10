#include <iostream>
#include <chrono>
#include <thread>
#include <functional>
#include <string>
#include <future>
#include <map>

/**
 * NOTE: Callback manager being a slightly incorrect name, this is more of an event sequencer,
 * this could be made more generic and generated by a factory class that any entity could
 * create an instance of and use for it's own time based events.
 */

namespace CMB
{
    class CallbackManager
    {
    public:
        void Register(std::string name, std::function<void()> func, unsigned int interval, bool isRepeating);
        void Cancel(std::string name);

    private:
        std::map<std::string, std::promise<void>> callbackMap;
    };
} // namespace CMB