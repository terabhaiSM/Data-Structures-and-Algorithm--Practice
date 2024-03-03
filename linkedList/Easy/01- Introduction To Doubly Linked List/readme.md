<h1>Problem Statement</h1>
<p>You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.</p>

<p>Your task is to make a doubly linked list from the array and return the head of the linked list.</p>

<p>Here, the head of the doubly linked list is the first element of the array, and the tail of the doubly linked list is the last element.</p>

<p><strong>Note:</strong> A doubly linked list is one in which it is possible to access the next and the previous nodes from a node in the linked list (if they exist).</p>

<h2>Example:</h2>
<p><strong>Input:</strong> ‘N’ = 4, ‘Arr’ = [4, 2, 5, 1]</p>

<p><strong>Output:</strong> 4 2 5 1</p>

<p><strong>Explanation:</strong> Doubly Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 &lt;-&gt; 2 &lt;-&gt; 5 &lt;-&gt; 1.</p>

<h2>Detailed Explanation</h2>
<p>Sample Input 1:</p>
<pre><code>4
4 2 5 1
</code></pre>
<p>Sample Output 1 :</p>
<pre><code>4 2 5 1
</code></pre>
<p><strong>Explanation Of Sample Input 1:</strong></p>
<p>Input: ‘N’ = 4, ‘Arr’ = [4, 2, 5, 1]</p>

<p>Output: 4 2 5 1</p>

<p><strong>Explanation:</strong> Doubly Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 &lt;-&gt; 2 &lt;-&gt; 5 &lt;-&gt; 1.</p>

<p>Sample Input 2:</p>
<pre><code>5
4 3 2 1 5
</code></pre>
<p>Sample Output 2:</p>
<pre><code>4 3 2 1 5
</code></pre>
<p><strong>Explanation Of Sample Input 2:</strong></p>
<p>Input: ‘N’ = 5, ‘Arr’ = [4, 3, 2, 1, 5]</p>

<p>Output: 4 3 2 1 5</p>

<p><strong>Explanation:</strong> Doubly Linked List for the array ‘Arr’ = [4, 3, 2, 1, 5] is 4 &lt;-&gt; 3 &lt;-&gt; 2 &lt;-&gt; 1 &lt;-&gt; 5.</p>

<h2>Expected Time Complexity:</h2>
<p>Try solving this in O(N).</p>

<h2>Constraints:</h2>
<ul>
    <li>1 ≤ 'N' ≤ 10<sup>4</sup></li>
    <li>1 ≤ 'Arr[i]' ≤ 10<sup>5</sup></li>
</ul>

<p><strong>Time Limit:</strong> 1 sec</p>
</html>
