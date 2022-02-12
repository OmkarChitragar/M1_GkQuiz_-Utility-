# Test Plan

# Table
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
|LP01| User is asked to | Character | Views rules | Pass | Requirement|HP01|
|    | enter username   | username  | of the game |      |            |    |
|LP02| User views the rules & | Character Y| Quiz starts | Pass | Requirement|HP02|
|    | starts the quiz        |            |             |      |            |    |
|LP03| User views the mcqs and | Character | Provises  | Pass | Requirement|HP02|
|    | enters the option       | a/b/c/d   | result    |      |            |    |
|LP04| User views the option to | Character Y | Continues |Pass| Requirement|HP02| 
|    | continue/end the quiz    |             | the quiz  |    |            |    |
|LP05| User views the option to | Character N | Ends quiz & pro| Pass | Requirement|HP03|
|    | continue/end the quiz    |             | -vids result   |      |            |    |
|LP06| User views the option to | Character R | Restarts quiz | Pass | Requirement |HP04|
|    | restart the quiz         |             |               |      |             |    |

## Test Plan Outputs
* Interface Output:
 
 ![Screenshot (216)](https://user-images.githubusercontent.com/42509490/153711501-1200e7af-e79c-42ba-ad1b-cf8bf65bbffd.png) 
 
 ![Screenshot (217)](https://user-images.githubusercontent.com/42509490/153711526-3822287f-d92c-4935-84d9-d38d3ee92144.png)


 
