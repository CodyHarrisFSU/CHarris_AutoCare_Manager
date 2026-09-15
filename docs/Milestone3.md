# Milestone 3 - Feature Completion and Refactoring

## Overview

Milestone 3 focused on expanding, refining, and stabilizing the Vehicle Service & Maintenance Management System. The primary goals were to add additional service-management functionality, improve the program's class structure, reduce repeated code, and verify that existing features continued working correctly.

## Features Completed

### Service Record Removal

A service record removal feature was added to allow incorrect or outdated service records to be marked as removed.

Instead of permanently deleting the record from the program, the record is preserved for historical reference. Removed records remain visible when viewing service records and vehicle service history.

Removed records are clearly identified with a red REMOVED indicator in the console.

The feature also prevents a service record from being removed more than once and validates that the requested service record ID exists.

### Reusable Service Type Library

A new ServiceType class was added to represent reusable maintenance and performance services.

The ServiceType class stores:

- Service name
- Minimum service cost
- Maximum service cost
- Whether the service uses variable pricing

The MaintenanceManager maintains a vector of ServiceType objects that can be reused when creating service records.

The service library includes predefined services with fixed prices as well as services that support a price range.

Users can also create a custom service type during program execution.

### Program Refactoring

Existing code was reviewed and refactored to improve readability, organization, and maintainability.

Repeated service-record output was moved into reusable display logic so that service records are displayed consistently throughout the program.

Input validation and program flow were also reviewed to reduce unnecessary repeated logic while preserving existing behavior.

## Class and Object Interaction

Milestone 3 expanded the interaction between the program's main classes.

- Vehicle objects represent vehicles managed by the application.
- ServiceRecord objects represent maintenance performed on a vehicle.
- ServiceType objects represent reusable service options and pricing.
- MaintenanceManager manages collections of vehicles, service records, and service types.

Vectors are used to manage the program's collections of objects.

## Testing

Testing was performed throughout development to verify that new functionality did not break features completed during previous milestones.

Testing included:

- Adding and viewing vehicles
- Rejecting invalid vehicle information
- Adding service records
- Selecting predefined service types
- Testing service pricing
- Viewing all service records
- Viewing service history for a specific vehicle
- Removing a service record
- Confirming removed records remain visible
- Confirming the REMOVED indicator appears correctly
- Preventing duplicate removal attempts
- Testing invalid and nonexistent IDs
- Testing invalid menu input
- Verifying normal program exit
- Rebuilding the Visual Studio project after major changes

## Challenges and Resolutions

One challenge during Milestone 3 involved integrating the Service Type Library while preserving functionality from the service record removal feature.

Git merge conflicts occurred while moving changes between feature branches and the dev branch. The conflicting files were reviewed manually, the required functionality from both changes was preserved, and the project was rebuilt successfully.

The program was then tested again to verify that the service library, removed-record functionality, vehicle history, and existing menu options continued working correctly.

## Milestone 3 Result

The Vehicle Service & Maintenance Management System now contains multiple connected features for managing vehicles and their maintenance history.

Milestone 3 improved the program through additional functionality, reusable service types, preserved service history, stronger organization, refactoring, and continued testing.

The application is prepared for final testing, documentation, and completion during the final milestone.