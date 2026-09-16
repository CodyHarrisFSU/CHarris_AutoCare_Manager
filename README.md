# Vehicle Service & Maintenance Management System

A C++ application for managing vehicles and their service and maintenance records.




# Milestone 1 Stand-Up

## Overview
This week I focused on building the core structure of the Vehicle Service & Maintenance Management System. I created the main menu, organized the project files into source and include folders, created the Vehicle, ServiceRecord, and MaintenanceManager classes, and connected the menu to the core functionality of the program.

## Challenges
One of the main challenges was reorganizing the project files without breaking the Visual Studio project. Moving source and header files required updating the project references and include directories. I also encountered issues with file paths and missing source files, which I resolved by reconnecting the files to Visual Studio and verifying their correct locations.

## Accomplishments
I improved my understanding of separating C++ code into header and source files, using vectors to manage objects, working with object relationships, and validating user input. I successfully implemented functionality to add and view vehicles, add and view service records, and verify that service records are connected to valid vehicle IDs.

## Next Steps
For the next milestone, I plan to improve the program's validation and organization, expand the maintenance-management features, improve the user interface, and continue testing different scenarios. I also plan to refine the existing classes as additional project requirements are implemented.






# Milestone 2 Stand-Up

## Overview
This week I focused on improving the functionality and usability of the Vehicle Service & Maintenance Management System. I added stronger input validation and error handling, implemented the Vehicle Service History feature, and completed additional testing of the vehicle and service record features. I also reorganized the Visual Studio project files into the required dev folder and corrected the project paths.

## Challenges
One of the main challenges was moving the Visual Studio project files into the dev folder without breaking the project. After moving the files, Visual Studio could no longer locate some source and header files because the project still referenced their previous locations. I corrected the project paths and rebuilt the solution successfully. I also tested several invalid input situations to make sure the program handled errors without closing unexpectedly.

## Accomplishments
I improved my understanding of input validation, debugging, Git workflow, and project organization. The program can now reject duplicate IDs, negative values, invalid menu selections, and nonexistent vehicle IDs. I also completed the Vehicle Service History feature, which allows the user to view service records associated with a specific vehicle.

## Next Steps
For Milestone 3, I plan to continue expanding the program with additional features, improve the overall user experience, and continue testing and debugging the application as the project develops.




# Milestone 3 Stand-Up

## Overview
This week I focused on expanding, refining, and stabilizing the Vehicle Service & Maintenance Management System. I implemented additional service-management features, improved the program's organization, refactored repeated logic, and continued testing the application for edge cases.

## Improvements
I implemented a reusable Service Type Library with predefined services, fixed and variable pricing, and support for custom service types. I also added a service record removal feature that preserves records for historical reference and clearly marks removed records with a red REMOVED indicator. Input validation and repeated service-record display logic were refactored to improve readability and maintainability.

## Challenges
One of the main challenges was integrating the new ServiceType class while preserving functionality from previous milestones. I also encountered Git merge conflicts and Visual Studio file-path issues while organizing the new source and header files. I resolved these issues by reviewing the affected files, correcting project references, rebuilding the solution, and retesting the application.

## Accomplishments
I improved my understanding of C++ class interaction, vectors, refactoring, debugging, and Git/GitHub workflow. I successfully expanded the application while preserving its existing functionality and learned how to resolve merge conflicts without losing completed work.

## Next Steps
For Week 4, I plan to complete final testing and refinement of AutoCare Manager, address any remaining bugs or usability issues, review the overall class structure and documentation, and prepare the completed project for final submission.