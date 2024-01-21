export module no;

namespace no {
export struct move {
  constexpr move() = default;
  move(const move &) = default;
  move(move &&) = delete;
  move &operator=(const move &) = default;
  move &operator=(move &&) = delete;
};
export struct copy {
  constexpr copy() = default;
  copy(const copy &) = delete;
  copy(copy &&) = default;
  copy &operator=(const copy &) = delete;
  copy &operator=(copy &&) = default;
};
export struct no {
  constexpr no() = default;
  no(no &&) = delete;
  no &operator=(no &&) = delete;
  no(const no &) = delete;
  no &operator=(const no &) = delete;
};
} // namespace no
