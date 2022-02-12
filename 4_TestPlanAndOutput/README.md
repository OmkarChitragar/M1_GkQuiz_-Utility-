# Test Plan

## High Level Test Plan

| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type of Test |
|----|----------------------|-------------|-------------|-------------|--------------|
|HP01| User interface| Character username | Username | Pass| Requirement |
|HP02| User starts the quiz | Character Y | Start | Pass| Requirement |
|HP03| User ends the quiz | Character N | Result | Pass| Requirement |
|HP04| User restarts the quiz | Character R | Result | Pass| Requirement |
<br>
<br>
<br>

## Low Level Test Plan

<br>

| ID | Description | Expected I/P | Expected O/P| Actual O/P | Type of Test| ID |
|----|------------------------|---------------|--------------|---------------|---------------|
|LP01| User is asked to enter username| Character username| Views rules of the game | Pass | Requirement|HP01|
|LP02| User views the rules & starts the quiz | Character Y| Quiz starts | Pass | Requirement|HP02|
|LP03| User views the mcqs and enters the option | Character a/b/c/d | Provises result | Pass | Requirement|HP02|
|LP04| User views the option to continue/end the quiz | Character Y | Continues quiz |Pass| Requirement|HP02|
|LP05| User views the option to continue/end the quiz | Character N | Ends quiz & provids result | Pass | Requirement|HP03|
|LP06| User views the option to restart the quiz | Character R | Restarts quiz | Pass | Requirement |HP04|

# Table
* ID, Description of Test case, Input values, Expected Output, Actual Output
