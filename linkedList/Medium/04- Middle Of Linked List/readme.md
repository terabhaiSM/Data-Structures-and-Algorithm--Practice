<h2> Middle Of Linked List</h2>
<h3>Problem Statement</h3>
<p>Given a singly linked list of 'N' nodes. The objective is to determine the middle node of a singly linked list. However, if the list has an even number of nodes, we return the second middle node.</p>

<h2>Detailed Explanation</h2>
<p><strong>Sample Input 1:</strong></p>
<pre><code>5
1 2 3 4 5
</code></pre>
<p><strong>Sample Output 1:</strong></p>
<pre><code>3 4 5
</code></pre>
<p><strong>Explanation Of Sample Input 1:</strong></p>
<img src="image.png" alt="Image">
<p>We can clearly see that there are 5 elements in the linked list, therefore the middle node is the node with value '3'.</p>

<p><strong>Sample Input 2:</strong></p>
<pre><code>6
1 2 3 4 5 6
</code></pre>
<p><strong>Sample Output 2:</strong></p>
<pre><code>4 5 6
</code></pre>
<p><strong>Explanation Of Sample Input 2:</strong></p>
<img src="image-1.png" alt="Image">
<p>We can clearly see that there are 6 elements in the linked list and the middle nodes are nodes with values 3 and 4, hence we return a second middle node having value '4'.</p>

<h2>Constraints:</h2>
<ul>
    <li>1 <= 'N' <= 10<sup>4</sup></li>
    <li>0 <= 'data' <= 10<sup>3</sup></li>
</ul>

<p>Where 'N' is the length of the linked list.</p>

<p><strong>Time Limit:</strong> 1 sec</p>
