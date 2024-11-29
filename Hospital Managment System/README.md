# Hospital Management System
This is a simple Hospital Management System implemented in C, which allows you to manage patient records. The system can add, display, search, and delete patient records.

## Description
The program defines a structure to store patient details and provides functionalities to add, display, search, and delete patient records.

## Features
- Add a new patient record
- Display all patient records
- Search for a patient record by ID
- Delete a patient record by ID

## Output
```mathematica

         **** Hospital Management System ***
                1. Add Patient     
                2. Display Patients
                3. Search Patient  
                4. Delete Patient  
                5. Exit
         Enter your choice: 1      

         Enter Patient ID: 123
         Enter Patient Name: Alice
         Enter Age: 25
         Enter Gender: Male
         Enter Diagnosis: Flu
                Patient added successfully!

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 1

         Enter Patient ID: 234 
         Enter Patient Name: Pop
         Enter Age: 22
         Enter Gender: Male
         Enter Diagnosis: Cough
                Patient added successfully!

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 2

        ------------- Patient 1 -------------
                Patient ID: 123
                Name: Alice
                Age: 25
                Gander: Male
                Diagnosis: Flu

        ------------- Patient 2 -------------
                Patient ID: 234
                Name: Pop
                Age: 22
                Gander: Male
                Diagnosis: Cough

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 3

         Enter Patient ID to search: 122
                Patient ID (122) not found!

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 123

                Oops! ... Invalid Choice! Please try again.

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 3

         Enter Patient ID to search: 123
                Patient ID: 123
                Name: Alice
                Age: 25
                Gander: Male
                Diagnosis: Flu

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 4

         Enter Patient ID to delete: 124
                Patient ID (124) not found!

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 4

         Enter Patient ID to delete: 234
                Patient with ID (234) deleted successfully.

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 2

        ------------- Patient 1 -------------
                Patient ID: 123
                Name: Alice
                Age: 25
                Gander: Male
                Diagnosis: Flu

         **** Hospital Management System ***
                1. Add Patient
                2. Display Patients
                3. Search Patient
                4. Delete Patient
                5. Exit
         Enter your choice: 5

                Thanks for using our services!
```