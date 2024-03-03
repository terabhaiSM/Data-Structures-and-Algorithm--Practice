<h2>Insert Node At The Beginning</h2>
<h3>Problem Statement</h3>
<p>You are given the head of a linked list ‘list’ of size ‘N’ and an integer ‘newValue’.</p>

<p>Your task is to insert a node with the value ‘newValue’ at the beginning of the ‘list’ and return the new head of the linked list.</p>

<p>You must write an algorithm whose time complexity is O(1) and whose space complexity is O(1).</p>

<p><strong>Note:</strong> In the output, you will see the elements of the linked list made by you.</p>

<h3>Example</h3>
<p><strong>Input:</strong> ‘N’ = 4, ‘newValue’ = 0<br>
‘list’ = 4 -> 2 -> 5 -> 1</p>

<p><strong>Output:</strong> 0 4 2 5 1</p>

<p><strong>Explanation:</strong> Linked List after inserting the newValue is 0 -> 4 -> 2 -> 5 -> 1.</p>

<h3>Detailed explanation</h3>
<p><strong>Sample Input 1:</strong><br>
4 0<br>
4 2 5 1</p>

<p><strong>Sample Output 1:</strong><br>
0 4 2 5 1</p>

<p><strong>Explanation Of Sample Input 1:</strong><br>
Input: ‘N’ = 4, ‘newValue’ = 0<br>
‘list’ = 4 -> 2 -> 5 -> 1<br>
Output: 0 4 2 5 1<br>
Explanation: Linked List after inserting the newValue is 0 -> 4 -> 2 -> 5 -> 1.</p>

<p><strong>Sample Input 2:</strong><br>
5 5<br>
4 3 2 1 5</p>

<p><strong>Sample Output 2:</strong><br>
5 4 3 2 1 5</p>

<p><strong>Explanation Of Sample Input 2:</strong><br>
Input: ‘N’ = 5, ‘newValue’ = 5<br>
‘list’ = 4 -> 3 -> 2 -> 1 -> 5<br>
Output: 5 4 3 2 1 5<br>
Explanation: Linked List after inserting the newValue is 5 -> 4 -> 3 -> 2 -> 1 -> 5.</p>

<h3>Constraints</h3>
<ul>
  <li>1 <= 'N' <= 10^4</li>
  <li>0 <= list elements <= 10^5</li>
  <li>0 <= 'newValue' <= 10^5</li>
</ul>

<p>Time Limit: 1 second</p>
