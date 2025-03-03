# todolist
To-Do List (C++ - Data Structures & Algorithms)
📌 Project Overview
This is a simple To-Do List application implemented in C++ using a Singly Linked List. It allows users to:
✅ Add Tasks to the list.
✅ View Tasks in order.
✅ Delete Tasks by specifying the task number.

This project demonstrates the practical use of Linked Lists, Dynamic Memory Allocation, and Basic Data Structures & Algorithms (DSA) concepts.

🛠 Features & Functionality
🔹 Dynamic Task Management: No fixed limit on tasks, as it uses a linked list.
🔹 Efficient Insertion & Deletion: Tasks can be added or deleted dynamically.
🔹 User-Friendly Console Interface: Simple menu-driven interaction.

💻 Code Breakdown
1️⃣ Task Class (Node for Linked List)
Each task is represented as a node with:
description → Stores task details.
next → Pointer to the next task.
Implements a constructor to initialize task data.
2️⃣ ToDoList Class (Linked List Implementation)
addTask(desc) → Inserts a new task at the end.
displayTasks() → Traverses the linked list and prints all tasks.
deleteTask(taskNumber) → Deletes a task at the given position.
3️⃣ Main Function (Menu-Based Interaction)
Uses a loop to provide a menu-based interface.
Handles user input using cin >> and getline(cin, ...).
