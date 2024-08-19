<h2><a href="https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/MISSP?tab=statement">Chef and Dolls</a></h2><h4>Difficulty: 1012</h4><p>&nbsp;</p><p>Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!  </p><p>Help chef find which type of doll is missing..</p><h3>Input</h3><p>
The first line contains an integer <b>T</b>, the number of test cases. <br>
The first line of each test case contains an integer <b>N</b>, the number of dolls. <br>
The next <b>N</b> lines are the types of dolls that are left.<br></p><h3>Output</h3><p>
For each test case, display the type of doll that doesn't have a pair, in a new line.
</p><h3>Constraints</h3><p>
1&lt;=T&lt;=10 <br>
1&lt;=N&lt;=100000 (10^5) <br>
0&lt;=type&lt;=100000 <br></p><h3 class="notranslate">Sample 1:</h3><h4>Input:</h4><pre>1
3
1 
2
1</pre><h4>Output:</h4><pre>2</pre><h3 class="notranslate">Explanation:</h3><div class="notranslate">
<p>For this case, we have three dolls [1, 2, 1]. So we have two dolls of type 1, but only one doll of type 2. Thus one doll of type 2 is missing.</p>
</div><h3 class="notranslate">Sample 2:</h3><h4>Input:</h4><pre>1
5
1
1
2
2
3</pre><h4>Output:</h4><pre>3</pre><h3 class="notranslate">Explanation:</h3><div class="notranslate">
<p>For this case [1, 1, 2, 2, 3], we have two dolls of type 1 and 2, but only one doll of type 3. Thus one doll of type 3 is missing.</p>
</div>