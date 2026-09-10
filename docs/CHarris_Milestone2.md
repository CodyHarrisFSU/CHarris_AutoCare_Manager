# Milestone 2 Changelog

## Input Validation and Usability Improvements

### Changes Made
- Added validation requiring vehicle IDs to be greater than zero.
- Added validation preventing duplicate vehicle IDs.
- Added vehicle year validation.
- Added validation preventing negative mileage values.
- Added required-text validation for vehicle make and model.
- Added validation requiring service record IDs to be greater than zero.
- Added validation preventing duplicate service record IDs.
- Improved handling for nonexistent vehicle IDs when adding service records.
- Added required-text validation for service type and service date.
- Prevented negative service costs.
- Prevented negative service mileage values.
- Improved error messages so users understand how to correct invalid input.

### Why These Changes Were Made
These improvements make AutoCare Manager easier and safer to use by preventing invalid or duplicate information from being stored. Clearer error messages also allow users to correct mistakes without causing the program to fail or exit unexpectedly.

### Testing
The updated validation was tested with:
- Negative and zero IDs
- Duplicate vehicle IDs
- Invalid vehicle years
- Blank text input
- Negative mileage
- Nonexistent vehicle IDs
- Duplicate service record IDs
- Negative service costs
- Negative service mileage

All tested validation cases behaved as expected.

---

## Vehicle Service History

### Feature Added
Added a vehicle-specific service history feature to AutoCare Manager.

The user can now:
- Select View Vehicle Service History from the main menu
- Enter a vehicle ID
- View the selected vehicle's information
- View only the service records associated with that vehicle
- Receive a message when the vehicle has no service records
- Receive a helpful error message when the vehicle ID does not exist

### Program Flow Changes
The main menu was expanded from five options to six options.

The new menu option is:

5. View Vehicle Service History

Exit was moved to option 6.

After viewing service history, the program returns to the main menu so the user can continue working with the application.

### Testing
The Vehicle Service History feature was tested with:
- Multiple vehicles
- Multiple service records assigned to one vehicle
- A vehicle with multiple matching service records
- A vehicle with no service records
- A nonexistent vehicle ID
- Returning to the main menu after viewing history

All tested scenarios behaved as expected.

---

## Milestone 2 Final Testing and Verification

### Functional Testing

The completed Milestone 2 prototype was tested to verify that the core
vehicle and service management features operate correctly.

Testing confirmed:

- The Visual Studio solution rebuilds successfully in Debug x64.
- All six main menu options operate correctly.
- Vehicles can be added using valid information.
- Multiple vehicles display correctly.
- Duplicate vehicle IDs are rejected.
- Service records can be added to existing vehicles.
- Nonexistent vehicle IDs are rejected when adding service records.
- Duplicate service record IDs are rejected.
- Negative service costs are rejected and require corrected input.
- Negative service mileage values are rejected.
- Multiple service records display correctly.
- Vehicle Service History displays only records associated with the selected vehicle.
- Vehicles without service records display an appropriate message.
- Invalid numeric menu selections are rejected.
- Non-numeric menu selections are rejected.
- The program returns to the main menu after completed operations.
- Option 6 exits the application normally.

All final functional and input-validation tests behaved as expected.

### Repository Organization Fix

Based on instructor feedback, the Visual Studio solution and project files
were moved into the `dev` folder so the complete Visual Studio project is
contained within the required development directory.

After relocating the project files, the source and include paths were
updated to match the new directory structure. The solution was then rebuilt
and executed successfully from its new location.

### Issues Found and Resolved

Moving the Visual Studio project files initially caused the project to
reference the previous source and include paths. This resulted in build
errors because Visual Studio could not locate the source files.

The project paths were corrected to reference the `src` and `include`
directories relative to the relocated project files. After the corrections,
the project rebuilt and ran successfully.

No additional functional bugs were identified during final Milestone 2
testing.

### Testing Evidence

Screenshots documenting Milestone 2 testing are stored in:

`images/Milestone-2-Testing-Screenshots/`

The testing evidence includes successful vehicle operations, duplicate ID
validation, service record operations, service input validation, vehicle
service history, vehicles without service history, menu input validation,
and successful project build and execution.

### Milestone 2 Status

The Milestone 2 prototype has completed planned implementation, validation,
testing, debugging, and repository organization. The prototype is ready for
Milestone 2 submission and continued development in Milestone 3.