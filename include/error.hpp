#pragma once

namespace cmkr {
namespace error {

struct Status {
    enum class Code {
        Success = 0,
        RuntimeError,
        InitError,
        GenerationError,
        BuildError,
        CleanError,
        InstallError,
    };
    Status(Code ec) noexcept;
    operator int() const noexcept;
    Code code() const noexcept;

  private:
    Code ec_ = Code::Success;
};

} // namespace error
} // namespace cmkr

const char *cmkr_error_status_string(int);
