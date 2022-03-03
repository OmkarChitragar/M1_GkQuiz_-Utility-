# M1_GkQuiz_Utility

  Repository for creating digital quiz based solution for testing and upgrading the general knowledge.

|  Codacy badge | Codiga badge | Codiga badge |
|-----------------|--------------------|----------------|
| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/1320b521ea06494aa9544eb95bdddd69)](https://www.codacy.com/gh/OmkarChitragar/M1_GkQuiz_-utility-/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=OmkarChitragar/M1_GkQuiz_-utility-&amp;utm_campaign=Badge_Grade) |  <a href="https://api.codiga.io/project/31475/score/svg">   <img src="https://api.codiga.io/project/31475/score/svg?style=dark" alt="codiga badge" /></a> |  <a href="https://api.codiga.io/project/31475/status/svg">   <img src="https://api.codiga.io/project/31475/status/svg?style=dark" alt="codiga badge" /></a> |

## Description

## GkQuiz

This quiz is designed to test the general knowledge of the user and help the user with an knowledge update. The user can take up
the quiz by entering their credientials. Depending upon the user's score in the quiz, the user is provided with good/average/poor general
knowledge as a result. User can end the quiz with end option and restart the quiz with restart option.

## Features

* User can enter the username in order to particapate in the quiz.
* User can attempt the quiz and view the result.
* User can end the quiz.
* User can restarts the quiz.

## SWOT

![Screenshot (186)](https://user-images.githubusercontent.com/42509490/155877756-ba0832b3-9605-4c9c-802e-82178a4548a6.png)

## 4W's & 1H

![Screenshot (241)](https://user-images.githubusercontent.com/42509490/155877651-d618cdc9-4156-4c0f-8ea8-a18a80421ed2.png)
  
## Test Plan

* High Level Test Plan

| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type of Test |
|----|----------------------|-------------|-------------|-------------|--------------|
|HP01| User interface| Character username | Username | Pass| Requirement |
|HP02| User starts the quiz | Character Y | Start | Pass| Requirement |
|HP03| User ends the quiz | Character N | Result | Pass| Requirement |
|HP04| User restarts the quiz | Character R | Result | Pass| Requirement |

* Low Level Test Plan

| ID | Description | Expected I/P | Expected O/P| Actual O/P | Type of Test| ID |
|----|--------------------------|-------------|---------------|------|------------|----|
|LP01| User is asked to enter username | Character username | Views rules of the game | Pass | Requirement|HP01|
|LP02| User views the rules & starts the quiz | Character Y| Quiz starts | Pass | Requirement|HP02|
|LP03| User views the mcqs and enters the option | Character a/b/c/d | Provides result | Pass | Requirement|HP02|
|LP04| User views the option to continue/end the quiz | Character Y | Continues the quiz |Pass| Requirement|HP02|
|LP05| User views the option to continue/end the quiz | Character N | Ends quiz & provids result | Pass | Requirement|HP03|
|LP06| User views the option to restart the quiz | Character R | Restarts quiz | Pass | Requirement |HP04|

## Test Plan Outputs

|1. Initial Interface of the quiz | 2. User enters the username and starts the quiz |
|---------------------------------|-------------------------------------------------|
|![Screenshot (242)](https://user-images.githubusercontent.com/42509490/155879229-1dbb0677-1b2f-4f9f-be66-4c9f9f6e0b05.png)|![Screenshot (243)](https://user-images.githubusercontent.com/42509490/155879260-11befabf-a3b1-4814-9b89-1e2c092c8cd3.png)|

|3. User attempts the quiz entering optiona 'a/b/c/d' and gets result output| 4. User ends the quiz by entering 'N' and gets the final result of the quiz |
|---------------------------------------------------------------------------|-----------------------------------------------------------------------------|
|![Screenshot (244)](https://user-images.githubusercontent.com/42509490/155879323-0a2375a6-ae3b-4d68-b0ee-fdd945492723.png)|![Screenshot (245)](https://user-images.githubusercontent.com/42509490/155879335-6765aef4-d0e4-4870-8051-781c8b414c95.png)|

|5. User can restart the quiz by entering 'R' after ending the quiz |
|--------------------------------------------------|
|![Screenshot (246)](https://user-images.githubusercontent.com/42509490/155879517-84fc87b8-fd2e-4652-84f2-7c3786b39dae.png)|

## More briefed out containts and code is present inside the above present folders
