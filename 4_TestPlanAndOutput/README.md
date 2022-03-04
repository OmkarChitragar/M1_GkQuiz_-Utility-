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


* Interface Output

 ![Screenshot (251)](https://user-images.githubusercontent.com/42509490/156751386-e28cab1d-c102-4fcf-8116-99aa1d5a76c1.png)

* User enters the username and starts the quiz
  
![Screenshot (252)](https://user-images.githubusercontent.com/42509490/156751445-92ad6d33-0e2a-4b3b-b452-226311424ce8.png)

* User attempts the quiz entering optiona a/b/c/d and gets result output  

![Screenshot (253)](https://user-images.githubusercontent.com/42509490/156751480-c2762026-2622-47f0-a78c-d608b6ee3d28.png)

* User ends the quiz

![Screenshot (254)](https://user-images.githubusercontent.com/42509490/156751588-b2e7825e-4090-4989-991c-7991c7e796e4.png)

* User restarts the quiz

![Screenshot (255)](https://user-images.githubusercontent.com/42509490/156751622-5d72b8d3-7029-4b1c-acb1-ff9221590354.png)
