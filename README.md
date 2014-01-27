Mock Interview Prep Material
===============

Notes:
  - Do not attribute a question to a specific company.
  - If a code review is related to a question, try not to give it to someone who has done one or the other.
  - People should write *real code* and not pseudo-code. If their code sucks, they need feedback. (Nice, polite feedback of course.)
  - "I don't know" is not the end of the world! Especially not in mocks. Give as few hints as possible but definitely hint to move them forward.
  - Questions should be limited to 20-50 minutes depending on the question and interviewee. If they cannot solve it, then need to study the topic more or use easier questions.

TODO:
  - Collection of interview questions to be sourced from:
    * http://projecteuler.net/
    * http://codeeval.com/
    * rapleaf (or liveramp) challenge questions (e.g. "array absurdity")
    * facebook challenges
    * https://www.hackerrank.com/
    * http://poj.org/
    * http://www.glassdoor.com/index.htm
    * Cracking the coding interview
  - Code review for C, C++, Java, Python (with errors ranked by importance)
  - Rank by difficulty and class pre-reqs (ECS 40, 60, 122A)
  - Question classes
    * OOP
      | inheritance vs composition
      | polymorphism
      | encapsulation
    * data structures
      | trees
      | graphs
      | sets
      | maps
    * algorithms
      | recursion
      | dynamic programming

What not to do
  - Use a language you don't know.
    * For example, if you wish to use Python, is slicing a constant or O(n) operation? Does it depend on what is being sliced? If you're not *sure* of the answers to these questions, you shouldn't be using Python in an interview.
Do do
  - Focus on scale (big-O).
  - Name big-Os on all operations, on both time and space!
  - Recursion is always at least O(log n) space! (unless tail recursive).

Questions:
  - (Open form) You are downloading two files. One reports it will be completed in 4 minutes, the other in 8. When will both be done? The interviewee should ask questions about everything, trying to make as few assumptions as possible.
    * Are both on the same server?
    * Are they using the same amount of bandwidth?
    * Is the server limiting bandwidth per connection, or per client?
  - Create a data structure which supports two operations: add() to insert an integer, and test() which accepts an integer and returns True if two integers have been add()'d such that their sum is equal to the value being tested.
  - Minimize dot product (Mikel's jelly beans)
  - Create a data structure which contains integers and support constant add(), remove(), and getRandom() operations.
  - List implementation. Examples include ArrayList and LinkedList. Test for encapsulation and polymorphism.
  - You have a commercial garage. Describe what kind of Objects are in it, and how they are related to each other with regard to inheritance and composition.
    * cars
    * tires
    * attendants
    * engines
  - A data structure, such as a Python list or a Java Collection may support a .sort() method. After this method has been performed, when no other operations have been performed on the list, imagine a user calls list.index() in Python or an equivalent on the Java Collection. Can that operation be optimized to be better than O(n)? If so, how? If not, why not?
    * Answer is no, interviewee should elaborate.
    * Follow up question: are there languages that don't have this same problem? (Yes: Lisp, Prolog, etc.)
  - Java question: can Java leak memory? If so, how? If not, why not?
    * Yes. Interviewee should elaborate.
  - You are given a linked list. You must select a random element from it, and may make at most one pass over it.
    * Doable in O(n) time and O(1) space.
    * Make sure the result is truly random.
  - Implement square root.
    * Not as mathy as it may seem. Solution involves guessing and checking iteratively.
  - Have you ever lead a team? How big?
    * Ask what each member did. How the interviewee helped them, who didn't need help. Challenges to leadership.
    * If it turns out they don't know who did what, or they claimed to lead a team that was large but when probed say "so and so didn't really do anything" question whether they should consider them part of the team they lead.
  - I (Michael) should try to remember my Factset phone screen question(s).

How to succeed:
  - Make the interviewer personally want you on their team.
  - Be nice!
  - Enthusiasm is a good thing.
  - For loops over while -- http://nedbatchelder.com/text/iter.html
