# Description

## GkQuiz

This quiz is designed to test the general knowledge of the user and help the user with an knowledge update. The user can take up 
the quiz by entering their credientials. Depending upon the user's score in the quiz, the user is provided with good/average/poor general 
knowledge as a result. User can end the quiz with end option and restart the quiz with restart option.

# Requirements

## High Level Requirements

* Feature of my project

  1. Participate in quiz.
  
  2. View the result.

  3. End the quiz.
  
  4. Restart the quiz.

## Low Level Requirements

* How each features is implemented

  1. Prints the statement asking the creadintials such as name of the user for the particapation in the quiz.
  
  2. Displays the multiple choice general knowledge questions to the user.
  
  3. Takes input as right/wrong answer from the user.
  
  4. Displays result upon completion of the quiz.
  
  5. Provids user with end option to end the quiz.
  
  6. Provids user with restart option to restart the quiz.
  
  ## High Level Test Plan

| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type of Test |
|----|----------------------|-------------|-------------|-------------|--------------|
|HP01| User can enter the username |
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

