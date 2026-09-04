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