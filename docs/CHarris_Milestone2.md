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