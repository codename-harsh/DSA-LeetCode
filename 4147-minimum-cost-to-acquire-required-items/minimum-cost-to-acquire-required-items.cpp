class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1 > need2) {
            return minimumCost(cost2, cost1, costBoth, need2, need1);
        }
        long long cb = 1LL * need1 * min(costBoth, cost1 + cost2);
        long long cr = 1LL * (need2 - need1) * min(cost2, costBoth);
        return cb + cr;
    }
};
static const bool __boost = []() {
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return std::ios_base::sync_with_stdio(false);
}();

// Custom memory pool for dynamic allocation using a pre-allocated buffer
const size_t BUFFER_SIZE = 0x30000000;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void* operator new(size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}

void operator delete(void* /*unused*/, unsigned long /*unused*/) noexcept {}
void operator delete(void* /*unused*/) noexcept {}
void operator delete[](void* /*unused*/) noexcept {}
void operator delete[](void* /*unused*/, size_t /*unused*/) noexcept {}