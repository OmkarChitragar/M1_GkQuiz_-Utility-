# Test Plan

## Table
* ID, Description of Test case, Input values, Expected Output, Actual Output

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
* Interface Output:
 
 ![Screenshot (216)](https://user-images.githubusercontent.com/42509490/153711501-1200e7af-e79c-42ba-ad1b-cf8bf65bbffd.png) 

* User enters the username and starts the quiz:

 ![Screenshot (217)](https://user-images.githubusercontent.com/42509490/153711526-3822287f-d92c-4935-84d9-d38d3ee92144.png)
 
* User attempts the quiz entering optiona a/b/c/d and gets result output:

 ![Screenshot (212)](https://user-images.githubusercontent.com/42509490/153711675-f219ac6e-7480-4ca7-aaf3-cd604294dca3.png)

* User ends the quiz:

 ![Screenshot (213)](https://user-images.githubusercontent.com/42509490/153711721-de262028-2f0c-4931-a4ba-98d02c51c065.png)

* User restarts the quiz:

 ![Screenshot (214)](https://user-images.githubusercontent.com/42509490/153711745-34990b79-02fd-4357-b6f3-0815fa8f5b07.png)





 
