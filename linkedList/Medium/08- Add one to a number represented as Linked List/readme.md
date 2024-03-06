<h2>Add one to a number represented as Linked List</h2>
<p>You're given a positive integer represented in the form of a singly linked-list of digits. The length of the number is 'n'.</p>

<p>Add 1 to the number, i.e., increment the given number by one.</p>

<p>The digits are stored such that the most significant digit is at the head of the linked list and the least significant digit is at the tail of the linked list.</p>

<h3>Example:</h3>
<p><strong>Input:</strong> Initial Linked List: 1 -> 5 -> 2<br>
<strong>Output:</strong> Modified Linked List: 1 -> 5 -> 3<br>
<strong>Explanation:</strong> Initially the number is 152. After incrementing it by 1, the number becomes 153.</p>

<h2>Detailed explanation</h2>
<h3>Sample Input 1:</h3>
<pre><code>3
1 5 2
</code></pre>
<h3>Sample Output 1:</h3>
<pre><code>1 5 3
</code></pre>
<p><strong>Explanation For Sample Input 1:</strong><br>
Initially the number is 152. After incrementing it by 1, the number becomes 153.</p>

<h3>Sample Input 2:</h3>
<pre><code>2
9 9
</code></pre>
<h3>Sample Output 2:</h3>
<pre><code>1 0 0
</code></pre>
<p><strong>Explanation For Sample Input 2:</strong><br>
Initially the number is 9. After incrementing it by 1, the number becomes 100. Please note that there were 2 nodes in the initial linked list, but there are three nodes in the sum linked list.</p>

<h2>Expected time complexity :</h2>
<p>The expected time complexity is O('n').</p>

<h2>Constraints:</h2>
<ul>
  <li>1 <= 'n' <=  10<sup>5</sup></li>
  <li>0 <= Node in linked list <= 9</li>
</ul>

<p>There are no leading zeroes in the number.</p>

<p><strong>Time Limit:</strong> 1 sec</p>