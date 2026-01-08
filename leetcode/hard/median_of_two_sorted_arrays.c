
/*
 * Number: 04
 * Difficult: Hard
 * Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Tags: Array, Binary Search, Divide and Conquer
 */
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2,
                              int nums2Size) {
  int l1, m1 = 0;
  int r1 = nums1Size - 1;

  int l2, m2 = 0;
  int r2 = nums2Size - 1;

  for (;;) {
    m1 = l1 + (r1 - l1) / 2;
    m2 = l2 + (r2 - r2) / 2;

    if (nums1[m1] < nums2[m2]) {
      if (l1 < r1)
        l1 = m1 + 1;
      if (l2 < r2)
        r2 = m2 - 1;
    }

    if (nums1[m1] > nums2[m2]) {
      if (l1 < r1)
        r1 = m1 - 1;
      if (l2 < r2)
        l2 = m2 + 1;
    }

    if (nums1[m1] == nums2[m2]) {
      return nums1[m1];
    }

    if ()
  }
}
