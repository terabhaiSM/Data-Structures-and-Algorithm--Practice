<h2>Intersection of Two Linked Lists</h2>
<p>Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.</p>

<p>Custom Judge:</p>
<p>The inputs to the judge are given as follows (your program is not given these inputs):</p>
<ul>
  <li>intersectVal - The value of the node where the intersection occurs. This is 0 if there is no intersected node.</li>
  <li>listA - The first linked list.</li>
  <li>listB - The second linked list.</li>
  <li>skipA - The number of nodes to skip ahead in listA (starting from the head) to get to the intersected node.</li>
  <li>skipB - The number of nodes to skip ahead in listB (starting from the head) to get to the intersected node.</li>
</ul>
<p>The judge will then create the linked structure based on these inputs and pass the two heads, headA and headB to your program. If you correctly return the intersected node, then your solution will be accepted.</p>

<h3>Example 1:</h3>
<p><strong>Input:</strong> intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3<br>
<strong>Output:</strong> Intersected at '8'<br>
<strong>Explanation:</strong> The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).<br>
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.<br>
- Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 3rd node in B) are different node references. In other words, they point to two different locations in memory, while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.</p>

<h3>Example 2:</h3>
<p><strong>Input:</strong> intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1<br>
<strong>Output:</strong> Intersected at '2'<br>
<strong>Explanation:</strong> The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).<br>
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.</p>

<h3>Example 3:</h3>
<p><strong>Input:</strong> intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2<br>
<strong>Output:</strong> No intersection<br>
<strong>Explanation:</strong> From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.<br>
Explanation: The two lists do not intersect, so return null.</p>

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes of listA is in the m.</li>
  <li>The number of nodes of listB is in the n.</li>
  <li>1 <= m, n <= 3 * 10<sup>4</sup></li>
  <li>1 <= Node.val <= 10<sup>5</sup></li>
  <li>0 <= skipA < m</li>
  <li>0 <= skipB < n</li>
  <li>intersectVal is 0 if listA and listB do not intersect.</li>
  <li>intersectVal == listA[skipA] == listB[skipB] if listA and listB intersect.</li>
</ul>