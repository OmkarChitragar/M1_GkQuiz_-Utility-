# Test Plan

## High Level Test Plan

| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type of Test |
|----|----------------------|-------------|-------------|-------------|--------------|
|HP01| User interface| Character username | Username | Pass| Requirement |
|HP02| User starts the quiz | Character Y | Start | Pass| Requirement |
|HP03| User ends the quiz | Character N | Result | Pass| Requirement |
|HP04| User restarts the quiz | Character R | Result | Pass| Requirement |

## Low Level Test Plan

| ID | Description | Expected I/P | Expected O/P| Actual O/P | Type of Test| ID |
|----|--------------------------|-------------|---------------|------|------------|----|
|LP01| User is asked to enter username | Character username | Views rules of the game | Pass | Requirement|HP01|
|LP02| User views the rules & starts the quiz | Character Y| Quiz starts | Pass | Requirement|HP02|
|LP03| User views the mcqs and enters the option | Character a/b/c/d | Provides result | Pass | Requirement|HP02|
|LP04| User views the option to continue/end the quiz | Character Y | Continues the quiz |Pass| Requirement|HP02| 
|LP05| User views the option to continue/end the quiz | Character N | Ends quiz & provids result | Pass | Requirement|HP03|
|LP06| User views the option to restart the quiz | Character R | Restarts quiz | Pass | Requirement |HP04|

## Test Plan Outputs

*   Interface Output.
   
![Screenshot (251)](https://user-images.githubusercontent.com/42509490/156665049-31ad5bb0-bdf4-4710-8609-724dbf4c01ea.png)

*   User enters the username and starts the quiz.
  
![Screenshot (252)](https://user-images.githubusercontent.com/42509490/156665259-4f86b1b4-ae36-454a-abfb-a6d2815548a4.png)
 
*   User attempts the quiz entering optiona a/b/c/d and gets result output.  

![Screenshot (253)](https://user-images.githubusercontent.com/42509490/156665349-ba92325f-5e2f-4e17-9a1c-b7be1f91c749.png)

*   User ends the quiz. 
 ![Screenshot (254)](https://user-images.githubusercontent.com/42509490/156665424-6b00656a-a9a5-41ec-bfd0-1b389345bc1e.png)

*   User restarts the quiz.

![Screenshot (255)](https://user-images.githubusercontent.com/42509490/156665512-8972069f-8781-4dad-ba39-ebe04ff312d7.png)
