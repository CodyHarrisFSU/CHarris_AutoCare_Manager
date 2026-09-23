
# Milestone 4 - Final Development and Delivery

## Overview

Milestone 4 focused on completing, testing, and preparing the Vehicle Service & Maintenance Management System for final delivery.

The primary goals were to complete final program improvements, verify all major features, correct remaining usability issues, organize final documentation, and confirm that the completed application builds and runs successfully.

## Final Features and Improvements

### Service Record Restoration

The service record removal system was expanded to allow previously removed service records to be restored.

When a user attempts to remove a service record that is already marked as REMOVED, the program now recognizes the record's current status and provides two options:

1. Cancel Removal Status
2. Return to Main Menu

Selecting Cancel Removal Status restores the service record to its normal active state.

A RestoreServiceRecord function was added to the MaintenanceManager class to manage this functionality.

This improvement preserves the existing soft-removal design while allowing users to correct an accidental removal without deleting or recreating the service record.

### Preserved Service History

Service records continue to use a soft-removal system rather than being permanently deleted.

When a record is removed:

- The service record remains stored in the program.
- The record remains visible in the service record list.
- The record remains visible in the associated vehicle's service history.
- A red REMOVED indicator clearly identifies the record's status.
- The record can now be restored if the removal status needs to be cancelled.

This design preserves historical maintenance information while allowing the status of individual records to be managed.

### Service Type Library

The reusable Service Type Library was retained and verified during final testing.

The library provides predefined service types and pricing while also allowing users to create custom service types during program execution.

Service types are managed through ServiceType objects and stored by the MaintenanceManager for use when creating service records.

### Input Validation and User Flow

The completed application includes validation throughout the major program functions.

Validation includes:

- Positive vehicle and service record IDs
- Duplicate vehicle ID prevention
- Duplicate service record ID prevention
- Vehicle year validation
- Required vehicle make and model information
- Nonnegative mileage values
- Nonnegative service cost values
- Existing vehicle verification when creating service records
- Existing service record verification when removing records
- Menu selection validation
- Removal confirmation
- Protection against repeated removal attempts
- Restoration of previously removed service records

These checks help prevent invalid data from being entered and improve the overall reliability of the application.

## Final Class and Object Design

The completed application uses multiple classes that work together to manage vehicle maintenance information.

- Vehicle represents each vehicle stored by the application.
- ServiceRecord represents maintenance or service performed on a vehicle.
- ServiceType represents reusable service options and pricing information.
- MaintenanceManager manages the collections of vehicles, service records, and service types.

Vectors are used to store and manage these collections.

The MaintenanceManager provides centralized functionality for adding, finding, removing, and restoring service records as well as managing vehicles and service types.

## Final Testing and Validation

Final testing was performed across the major features of AutoCare Manager.

Testing included:

- Adding vehicles
- Viewing vehicles
- Adding service records
- Viewing service records
- Viewing vehicle service history
- Selecting predefined service types
- Creating custom service types
- Testing fixed and custom service pricing
- Rejecting negative service costs
- Rejecting negative mileage values
- Rejecting duplicate service record IDs
- Rejecting nonexistent vehicle and service record IDs
- Testing invalid menu selections
- Removing service records
- Confirming removed records remain preserved
- Confirming the red REMOVED indicator displays correctly
- Restoring previously removed service records
- Confirming restored records return to normal display
- Testing repeated removal and restoration operations
- Verifying normal navigation back to the main menu
- Rebuilding the completed Visual Studio project using Debug x64

The final Debug x64 rebuild completed successfully with 0 build failures.

## Bug Fixes and Usability Improvements

Final development included reviewing the interaction between service record removal and restoration.

The removal workflow was improved so that selecting an already removed record no longer results only in a duplicate-removal message. Instead, the user is given the option to cancel the removal status and restore the record.

This provides a more useful workflow while continuing to preserve service history.

The final program was also reviewed for menu behavior, validation messages, record display, and general navigation.

## Final Program Functionality

The completed Vehicle Service & Maintenance Management System allows users to:

- Add and view vehicles
- Add and view service records
- View service history for an individual vehicle
- Select services from a reusable Service Type Library
- Create custom service types
- Validate vehicle and service information
- Mark service records as removed without permanently deleting them
- Clearly identify removed records
- Restore previously removed service records
- Preserve vehicle maintenance history

## Milestone 4 Result

Milestone 4 completed the development and final validation of AutoCare Manager.

The final application combines vehicle management, service record management, reusable service types, input validation, preserved maintenance history, service record removal and restoration, and organized class-based program structure.

The completed project was successfully rebuilt using the Debug x64 configuration with 0 failures and was tested across its major features and validation paths.

AutoCare Manager is now prepared for final documentation, repository presentation, and project submission.