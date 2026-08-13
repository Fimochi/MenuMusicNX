#pragma once

#include <switch.h>

namespace pm {

constexpr u64 QlaunchTitleId{0x0100000000001000ULL};

auto Initialize() -> Result;
void Exit();
void getCurrentPidTid(u64* pid_out, u64* tid_out);

/// True when qlaunch/HOME Menu is the active foreground UI.
auto IsHomeMenuForeground() -> bool;

} // namespace pm
