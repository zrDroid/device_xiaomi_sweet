#include <stdint.h>

#include <core/sdm_types.h>

// Keep SDM's dynamic-FPS path disabled. This symbol replaces a non-static
// member function, so its ABI includes the display pointer before the arguments.
extern "C" sdm::DisplayError _ZN3sdm14DisplayBuiltIn14SetRefreshRateEjb(
        void* /* display */, uint32_t /* refresh_rate */, bool /* final_rate */) {
    return sdm::kErrorNotSupported;
}
