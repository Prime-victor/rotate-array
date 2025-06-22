# 🔄 Rotate Array

This is a simple C implementation of the **Rotate Array** problem — a classic array manipulation challenge often asked in coding interviews.  
The goal is to rotate the elements of an array to the right by `k` steps.

---

## 📌 Problem Statement

> **Given an array, rotate the array to the right by `k` steps, where `k` is non-negative.**

**Example:**
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Explanation:
Rotate 1 step to the right: [7,1,2,3,4,5,6]
Rotate 2 steps to the right: [6,7,1,2,3,4,5]
Rotate 3 steps to the right: [5,6,7,1,2,3,4]


---

## ✅ Solutions Implemented

This project includes **two approaches**:

1️⃣ **Rotate with Extra Space**  
   - Uses an auxiliary array.  
   - Time: O(n), Space: O(n)

2️⃣ **Rotate In Place**  
   - Uses array reversal to do it in-place.  
   - Time: O(n), Space: O(1)

---

## 🗂️ Files

| File | Description |
|------|--------------|
| `rotate_extra_space.c` | Rotate using extra array. |
| `rotate_in_place.c` | Rotate using in-place reversal. |
| `main.c` | Example usage and test cases. |
| `Makefile` | Compile the program easily with `make`. |

---

## ⚙️ How to Compile & Run

1️⃣ **Compile:**
```bash
make
2️⃣ Run:
./main
