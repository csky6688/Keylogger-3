#pragma once

#include <Windows.h>

namespace keyboard
{
    void set_hook();

    void get_state(BYTE* state) noexcept;

    bool is_down(DWORD vk_code) noexcept;
}
