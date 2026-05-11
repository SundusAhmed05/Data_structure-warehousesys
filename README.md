Project Title  
Warehouse Delivery System

Research Problem  
How can a warehouse manage inventory items and delivery orders in a simple and organized way? Many warehouses need to store item details, search for products quickly, and process deliveries based on priority. This project solves that problem using a console-based C++ program.

Motivation  
This project is important because it shows how data structures can be used in real warehouse operations. The system helps manage inventory items using a Binary Search Tree and handles delivery orders using a priority queue. It demonstrates how items can be added, searched, displayed, and how urgent deliveries can be processed first.

Control Flow  
User opens the Warehouse Delivery System  
User is shown a menu with different options  
User can add items to the inventory  
User can search for an item using its ID  
User can display all inventory items  
User can add delivery orders with priority levels  
System processes the highest-priority delivery first  
User can display pending deliveries  
User can exit the program

Implementation Strategy  

Code Structure  

File / Folder | Description

main.cpp | Main C++ file containing the warehouse system code
PROJECT_MID.cbp | Code::Blocks project file
PROJECT_MID.layout | Code::Blocks layout file
obj/Debug/ | Object files created during compilation

Modules & Logic  
C++ — Programming language used to build the program  
Binary Search Tree — Stores inventory items based on item ID  
Inventory Module — Adds, searches, and displays warehouse items  
Priority Queue — Stores delivery orders based on priority  
Delivery Module — Adds, processes, and displays delivery orders  
Menu System — Allows the user to interact with the program

Key Features  
Add warehouse inventory items  
Search items by ID  
Display inventory in sorted order  
Add delivery orders with priority levels  
Process high-priority deliveries first  
Console-based menu system
