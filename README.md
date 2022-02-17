# M1_GkQuiz_-utility-
  Repository for creating digital quiz based solution for testing and updraging the general knowledge.

## Codacy badge: [![Codacy Badge](https://app.codacy.com/project/badge/Grade/1320b521ea06494aa9544eb95bdddd69)](https://www.codacy.com/gh/OmkarChitragar/M1_GkQuiz_-utility-/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=OmkarChitragar/M1_GkQuiz_-utility-&amp;utm_campaign=Badge_Grade)

## Milestone -1
# Description

## GkQuiz

This quiz is designed to test the general knowledge of the user and help the user with an knowledge update. The user can take up 
the quiz by entering their credientials. Depending upon the user's score in the quiz, the user is provided with good/average/poor general 
knowledge as a result. User can end the quiz with end option and restart the quiz with restart option.

# Requirements

## High Level Requirements

| ID | Description  |
|----|-----------------------------------------------------------------|
|HP01| User can enter the username in order to particapate in the quiz |
|HP02| User can attempt the quiz and view the result |
|HP03| User can end the quiz |
|HP04| User can restarts the quiz |

## Low Level Requirements

| ID | Description  | ID |
|----|-------------------------------------------------|----|
|LP01| User is asked to enter username |HP01|
|LP02| User views the rules & starts the quiz |HP02|
|LP03| User views the mcqs and can enter the option |HP02|
|LP04| User views the result of answered question |HP02| 
|LP05| User can continue/end the quiz |HP03|
|LP06| User can restart the quiz |HP04|
  

## SWOT
![Screenshot (187)](https://user-images.githubusercontent.com/42509490/153286605-2b3fae1f-2164-4568-a48f-b2b75c0bda07.png)


## 4W's & 1H

* What?

  The project is a simple solution for a general knowledge test as well as for the knowledge update of the user.

* Who?

  Anybody who wants to test their general knowledge and be knowledge updated can take up the quiz.

* When?

  When the user wants to ehance his/her's knowledge.

* why?

  The user will be aware of the things based on the knowledge obtained by taking up the quiz.

* How?

  By implementing a simple C program this solution can be achived.
  
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

* User enters the username and starts the quiz:

 ![Screenshot (217)](https://user-images.githubusercontent.com/42509490/153711526-3822287f-d92c-4935-84d9-d38d3ee92144.png)
 
* User attempts the quiz entering optiona a/b/c/d and gets result output:

 ![Screenshot (212)](https://user-images.githubusercontent.com/42509490/153711675-f219ac6e-7480-4ca7-aaf3-cd604294dca3.png)

* User ends the quiz:

 ![Screenshot (213)](https://user-images.githubusercontent.com/42509490/153711721-de262028-2f0c-4931-a4ba-98d02c51c065.png)

* User restarts the quiz:

 ![Screenshot (214)](https://user-images.githubusercontent.com/42509490/153711745-34990b79-02fd-4357-b6f3-0815fa8f5b07.png)

