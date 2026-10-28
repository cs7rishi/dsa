Example: $\sqrt{36} = \sqrt{4 \cdot 9} = \sqrt{4} \cdot \sqrt{9} = 2 \cdot 3 = 6$
# Binary Search on Answer: Setting Bounds (Low vs. High)

**Core Concept:** How you set your `low` and `high` bounds depends entirely on whether the answer represents an *independent rate* or a *specific value* tied to the array.

### 1. Koko Eating Bananas (Answer = Rate/Speed)

* **`low = 1`**: Even if the smallest pile has 10 bananas, if Koko has hundreds of hours, she only needs to eat 1 banana per hour. The minimum possible speed is always `1`, completely independent of the array's smallest value.
* **`high = max(piles)`**: Koko can only eat one pile per hour. Eating 31 bananas/hr on a 30-banana pile still takes 1 hour, exactly the same as eating 30 bananas/hr. Therefore, the maximum useful speed is just the size of the largest pile.

### 2. Minimum Days to Make Bouquets (Answer = A Specific Day)

* **`low = min(bloomDay)`**: If the earliest flower in the garden blooms on Day 10, it is physically impossible to make *any* bouquet on Days 1 through 9. Starting the search at `1` is a waste of time; you must start at the minimum day in the array.
* **`high = max(bloomDay)`**: The latest you ever need to wait is the day the final flower opens. Waiting any longer than `max(bloomDay)` changes nothing because all flowers are already available.

---

### 💡 The Golden Rule of Thumb

When setting bounds for a "Binary Search on Answer" problem, ask yourself:

**"Can the valid answer realistically be smaller than the smallest element in the array?"**

* **If YES (like Koko):** The answer is a rate, speed, or capacity. Set `low = 1`.
* **If NO (like Bouquets):** The answer must be a value that exists in (or is bounded by) the array. Set `low = min(array)`.