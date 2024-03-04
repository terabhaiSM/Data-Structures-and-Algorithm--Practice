<h2>Merge Two Sorted Arrays Without Extra Space</h2>
<p>You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.</p>

<p>Merge nums1 and nums2 into a single array sorted in non-decreasing order.</p>

<p>The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.</p>

<h3>Example 1:</h3>
<p><strong>Input:</strong> nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3<br>
<strong>Output:</strong> [1,2,2,3,5,6]<br>
<strong>Explanation:</strong> The arrays we are merging are [1,2,3] and [2,5,6].<br>
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.</p>

<h3>Example 2:</h3>
<p><strong>Input:</strong> nums1 = [1], m = 1, nums2 = [], n = 0<br>
<strong>Output:</strong> [1]<br>
<strong>Explanation:</strong> The arrays we are merging are [1] and [].<br>
The result of the merge is [1].</p>

<h3>Example 3:</h3>
<p><strong>Input:</strong> nums1 = [0], m = 0, nums2 = [1], n = 1<br>
<strong>Output:</strong> [1]<br>
<strong>Explanation:</strong> The arrays we are merging are [] and [1].<br>
The result of the merge is [1].<br>
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.</p>

<h3>Constraints:</h3>
<ul>
  <li>nums1.length == m + n</li>
  <li>nums2.length == n</li>
  <li>0 <= m, n <= 200</li>
  <li>1 <= m + n <= 200</li>
  <li>-10<sup>9</sup> <= nums1[i], nums2[j] <= 10<sup>9</sup></li>
</ul>

<p><strong>Follow up:</strong> Can you come up with an algorithm that runs in O(m + n) time?</p>
