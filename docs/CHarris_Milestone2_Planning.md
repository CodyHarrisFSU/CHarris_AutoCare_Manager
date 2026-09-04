> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→	AutoCare Manager  
  
**What does your program currently do? (1–3 sentences)**   
→	AutoCare Manager is a c++ console application that allows users to add vehicles, view stored vehicles, add service records, and view service records. The program uses Vehicle, ServiceRecord, and MaintenanceManager classes to organize vehicle and maintenance information.


---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   The main menu and program loop are working correctly. Users can add vehicles, view vehicles, add service records for existing vehicles, view all service records, and exit the program. Basic input validation is also working for menu choices, integers, and service costs.
  
**What is NOT working or incomplete?**   
→   The program does not currently allow users to view service history for one specific vehicle. Input validation can also be improved by preventing duplicate IDs, negative mileage values, invalid years, and other unrealistic data.
  
**What feels confusing or messy in your code?**   
→	Most of the user interaction and menu functions are currently located in main.cpp. The program works, but as more features are added, some functions may need to be reorganized so the code remains easy to read and maintain.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→	Vehicle Service History   
  
**What does this feature do?**   
→	This feature will allow the user to enter a vehicle ID and view only the service records associated with that vehicle.   
  
**Why is this feature important?**   
→   It makes the program more useful because users can quickly review the maintenance history of one vehicle instead of searching through every service record in the system.

  
---
### Feature 2

**Name:**  
→ Improved Input Validation and Usability

**What does this feature do?**  
→ This improvement will prevent invalid or unrealistic data from being entered. It will check for duplicate vehicle and service record IDs, negative mileage or service costs, invalid vehicle years, and nonexistent vehicle IDs. It will also improve prompts and error messages.

**Why is this feature important?**  
→ Stronger validation protects the program's data and makes the application easier for users to understand. Clear messages also help users correct mistakes without causing the program to fail.

---

### Feature 3 (optional)

**Name:**  
→ Improved Vehicle and Service Record Output

**What does this feature do?**  
→ This improvement will organize vehicle and service information with consistent headings, labels, spacing, and feedback messages.

**Why is this feature important?**  
→ More readable output improves usability and makes it easier for users to understand the information being displayed.

---

## 🧩 System Design Updates

**Will you need to create any new classes? If so, which ones?**  
→ No new classes are currently required. The existing Vehicle, ServiceRecord, and MaintenanceManager classes provide the structure needed for the planned Milestone 2 features.

**Will you modify any existing classes? How?**  
→ Yes. MaintenanceManager may be expanded with additional lookup or validation functions for vehicle and service record IDs. The existing program logic will also be updated to support vehicle-specific service history and stronger validation.

**What data structures will you use (vectors, 2D vectors, etc.)?**  
→ The program will continue using a vector of Vehicle objects and a vector of ServiceRecord objects. Service records can be searched by vehicle ID to determine which records belong to a selected vehicle.

---

## 🔄 Program Flow

**Describe how a user interacts with your program:**

1. Program starts → The AutoCare Manager main menu is displayed.
2. User chooses → The user selects an option such as adding a vehicle, viewing vehicles, adding a service record, viewing records, or viewing a vehicle's service history.
3. Program responds → The program validates the user's input, performs the selected action, and displays a success message, requested information, or helpful error message.
4. Loop/next step → The program returns to the main menu after the action is completed and continues until the user chooses Exit.

---

## 🎯 Usability Improvements

How will you make your program easier to use this week?

- **Clearer prompts:**  
→ Prompts will clearly state what information is required, such as vehicle ID, year, mileage, service type, date, and cost.

- **Better error handling:**  
→ The program will reject duplicate IDs, negative values, invalid years, and nonexistent vehicle IDs while explaining what the user needs to correct.

- **Improved menu/navigation:**  
→ The menu will remain consistent and will include a new option for viewing the service history of a specific vehicle. After completing an action, the user will return to the main menu.

---

## ⚠️ Potential Challenges

**What do you think will be the hardest part this week?**  
→ The most challenging part may be connecting vehicle objects with their related service records while keeping the program organized and validating IDs correctly.

**What is your plan if you get stuck?**  
→ I will test one feature at a time, use Visual Studio debugging tools, review previous course material, research C++ vectors and pointers, and ask questions in the course Discord or during office hours if necessary.

---

## 📈 Level Up Goal

**What skill are you focusing on improving this week?**  
→ Pointers and object relationships.

**What will you do to improve it?**  
(e.g., tutorial, practice, debugging, office hours)  
→ I will practice using pointers with Vehicle objects, review how FindVehicleByID returns a Vehicle pointer, use debugging tools to inspect object values, and review course materials on objects and pointers.

---

## 🗓️ Task Breakdown (GitHub Issues Planning)

List the tasks you plan to create as GitHub Issues:

- [ ] Plan Milestone 2 Prototype
- [ ] Improve Input Validation and Usability
- [ ] Implement Vehicle Service History
- [ ] Test and Debug Milestone 2 Prototype
- [ ] Complete Milestone 2 Documentation
- [ ] Complete Week 2 Mid-Week Progress Check

---

## 🔥 Final Check

Before you start coding, ask yourself:

- [x] Do I know what I’m building this week?
- [x] Do I know where to start?
- [x] Did I break my work into small tasks?

If yes → start coding 🚀  
If no → refine your plan first

---

## 😈 Final Thought

> Plan it now… or debug it later.