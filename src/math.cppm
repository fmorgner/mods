export module fm.math;

export template <typename T> auto max(T const a, T const b) -> T {
  return a > b ? a : b;
}