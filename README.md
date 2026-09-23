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






# AutoCare Manager

## Vehicle Service & Maintenance Management System

AutoCare Manager is a C++ console application developed for Project & Portfolio 1 at Full Sail University.

The application provides a structured way to manage vehicles, service records, reusable service types, and vehicle maintenance history. Development was completed across multiple milestones with an emphasis on object-oriented programming, input validation, reusable code, testing, version control, and project management.

## Features

- Add and view vehicles
- Validate vehicle information and prevent duplicate vehicle IDs
- Add and view service records
- Validate service record information and prevent duplicate service record IDs
- View service history for a specific vehicle
- Use predefined service types and pricing
- Create reusable custom service types
- Support fixed and variable service pricing
- Mark incorrect service records as REMOVED without permanently deleting historical data
- Restore service records previously marked as REMOVED
- Clearly display removed records with a red REMOVED indicator
- Validate menu selections, IDs, mileage, costs, and required text input

## Program Structure

AutoCare Manager uses several C++ classes to separate application responsibilities.

### Vehicle

Represents a vehicle stored in the application.

### ServiceRecord

Represents maintenance or service performed on a vehicle and maintains the record's removal status.

### ServiceType

Represents reusable service options and their associated pricing.

### MaintenanceManager

Manages the application's collections of vehicles, service records, and service types and provides the primary interaction between these objects.

The application uses vectors to maintain collections of these objects during program execution.

## Development Environment

- C++
- Visual Studio
- Debug x64
- Git
- GitHub
- GitHub Projects

## Project Development

### Milestone 1

Established the project environment, initial design, repository structure, version control workflow, and project-management process.

### Milestone 2

Developed the core vehicle and service-record management functionality and expanded input validation and vehicle service history.

### Milestone 3

Expanded the application with reusable service types, custom service options, service-record removal, preserved historical records, refactoring, and additional testing.

### Milestone 4

Focused on final feature improvements, object interaction, usability, testing, bug fixes, validation, documentation, and repository presentation.

The final milestone also added the ability to restore service records that had previously been marked as REMOVED while preserving the application's soft-delete design.

## Testing and Validation

The completed application was tested for:

- Adding and viewing vehicles
- Duplicate vehicle ID protection
- Invalid vehicle information
- Adding and viewing service records
- Duplicate service record ID protection
- Nonexistent vehicle and service record IDs
- Predefined service types
- Custom service types
- Fixed and variable service pricing
- Vehicle service history
- Service record removal
- Duplicate removal protection
- Service record restoration
- Invalid menu selections
- Invalid numeric input
- Negative mileage and cost values
- Normal program navigation and exit
- Successful Debug x64 compilation

The final Visual Studio Debug x64 rebuild completed successfully with 0 build failures.

# Milestone 4 Final Stand-Up

## Overview

During Milestone 4, I focused on completing and polishing AutoCare Manager for final submission. The application was reviewed as a complete project rather than as individual features so that the final version remained stable, organized, and consistent.

## Improvements

I reviewed the interaction between Vehicle, ServiceRecord, ServiceType, and MaintenanceManager and verified that the application's vectors and object relationships continued functioning correctly.

The service-record system was also expanded so that records previously marked as REMOVED can be restored. This preserves the existing service history while giving the user a way to correct an accidental removal.

Program navigation, validation, service-record display, service history, and overall usability were also reviewed during final testing.

## Challenges

One of the primary challenges during the final milestone was making additional improvements without breaking functionality completed during earlier milestones.

Changes were tested incrementally, and the project was rebuilt after development changes to verify that the application continued compiling successfully.

Documentation was also reviewed and separated by milestone so that the repository accurately represents the development progression of the project.

## Accomplishments

AutoCare Manager now provides a complete console-based system for managing vehicles and their maintenance records.

The completed project demonstrates object-oriented C++ programming, class interaction, vectors, reusable service types, input validation, service-history management, soft removal and restoration of records, Git version control, GitHub project management, testing, and technical documentation.

The final Debug x64 rebuild completed successfully with 0 failures.

## Next Steps

Future development could include persistent file storage or a database so that vehicle and service information remains available after the program closes.

Additional improvements could include search and filtering tools, editing existing records, expanded reporting, additional service-management options, and eventually a graphical user interface.

The current version completes the planned scope of AutoCare Manager for Project & Portfolio 1.