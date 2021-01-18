#include <compare>
#include <concepts>
#include <cstdint>

template<std::integral T>
class range
{
  private:
    T start = 0;
    T until = 0;
    T step = 1;
    struct iterator
    {
        T val;
        T step;
        constexpr std::strong_ordering operator<=>(iterator other) noexcept
        {
            return val <=> other.val;
        }
        constexpr bool operator==(iterator other) noexcept
        {
            return val == other.val;
        }

        constexpr T operator*() const noexcept { return val; }
        constexpr T operator++() noexcept { return val += step; }
        constexpr T operator++(int) noexcept
        {
            auto cpy = val;
            ++(*this);
            return cpy;
        }

        constexpr T operator--() noexcept { return val -= step; }
        constexpr T operator--(int) noexcept
        {
            auto cpy = val;
            --(*this);
            return cpy;
        }
    };

  public:
    constexpr range(T start, T end, T step) noexcept
      : start(start)
      , until(end)
      , step(step)
    {}

    constexpr range(T start, T end) noexcept
      : start(start)
      , until(end)
    {}

    constexpr range(T end) noexcept
      : until(end)
    {}

    constexpr iterator begin() const { return iterator{ start, step }; }
    constexpr iterator end() const { return iterator{ until, step }; }
};
