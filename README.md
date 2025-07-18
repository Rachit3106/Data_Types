<h1>Experiment-2</h1>
<h3>Aim: To study and implement C++ Program Structure (Data Types)</h3><br>
<h3>Software used : VS Code</h3><br>
<h3>Theory : </h3>
<h4>There are many types of data types in C++ like Integer(int), Float(float), String(string), Boolean(bool), Character(char), etc. These are stored in memory space in there respective bits space. These data types storage can be changed by using various storage classes like automatic(auto), register(register), static(static), external(extern) and mutable(mutable).</h4>
<ol>
  <li><b>Automatic :</b>
    <ul>
      <li>Keyword: auto</li>
      <li>Storage: RAM (stack)</li>
      <li>Scope: Local to the block/function where it is defined.</li>
      <li>Lifetime: Till the block/function executes; destroyed when the function ends.</li>
      <li>Default Initial Value: Garbage</li>
      <li>Task: Used for temporary storage inside functions.</li>
    </ul>
  </li>
  <li><b>Register :</b>
    <ul>
      <li>Keyword: register</li>
      <li>Storage: CPU register (if available, else stored in RAM but optimized).</li>
      <li>Scope: Local to the block/function.</li>
      <li>Lifetime: Till the block/function executes.</li>
      <li>Default Initial Value: Garbage</li>
      <li>Task: Used for fast access variables, e.g., counters in loops.</li>
      <li><b>Note: You cannot take its address using &.</b></li>
    </ul>
  </li>
  <li><b>Static :</b>
    <ul>
      <li>Keyword: static</li>
      <li>Storage: RAM (static storage area)</li>
      <li>Scope:
        <ul>
          <li>Local static → Visible only in that block.</li>
          <li>Global static → Visible only in that file.</li>
        </ul>
      <li>Lifetime: Till program ends (value persists between function calls).</li>
      <li>Default Initial Value: Zero (0) for numeric, NULL for pointers.</li>
      <li>Task: Used to retain value between function calls or restrict global variable access to a single file.</li>
    </ul>
  </li>
  <li><b>External :</b>
    <ul>
      <li>Keyword: exten</li>
      <li>Storage: RAM (global area)</li>
      <li>Scope: Global (accessible across files).</li>
      <li>Default Initial Value: Zero (0) for numeric, NULL for pointers.</li>
      <li>Task: Used to declare global variables/functions that can be shared across multiple files.</li>
    </ul>
  </li>
  <li><b>Mutable :</b>
    <ul>
      <li>Keyword: mutable</li>
      <li>Storage: Same as normal member variables.</li>
      <li>Scope: Class scope.</li>
      <li>Lifetime: Till object exists.</li>
      <li>Task: Allows modification of class member variables even if the object is declared as const.</li>
    </ul>
  </li>
</ol><br>
<h2>Conclusion : </h2>
  <h4>I learnt about various data types and how to store them using various storage classes.</h4>
