<h2>Delete Middle Node</h2>
<h3>Problem Statement</h3>
<p>Given a singly linked list of 'N' nodes. Your task is to delete the middle node of this list and return the head of the modified list.</p>

<p>However, if the list has an even number of nodes, we delete the second middle node.</p>

<h2>Example:</h2>
<p>If given linked list is 1->2->3->4 then it should be modified to 1->2->4.</p>

<h2>Detailed Explanation</h2>
<p><strong>Sample Input 1:</strong></p>
<pre><code>5
1 2 3 4 5
</code></pre>
<p><strong>Sample Output 1:</strong></p>
<pre><code>1 2 4 5</code></pre>
<p><strong>Explanation to Sample Input 1:</strong></p>
<p>We can clearly see that there are 5 nodes in the linked list, therefore the middle node is the node with value '3'.</p>

<p><strong>Sample Input 2:</strong></p>
<pre><code>1
2
</code></pre>
<p><strong>Sample Output 2:</strong></p>
<pre><code>-1</code></pre>
<p><strong>Explanation to Sample Input 2:</strong></p>
<p>We can clearly see that there is only one node in the linked list.</p>
<p>Therefore, after deleting that one node, the linked list becomes empty, resulting in an output of -1.</p>

<h2>Constraints:</h2>
<ul>
    <li>1 <= N <= 10<sup>3</sup></li>
    <li>0 <= data <= 10<sup>3</sup></li>
</ul>

<p>Where 'N' is the length of the linked list.</p>

<p><strong>Time Limit:</strong> 1 sec</p>