# Theft Protection
Theft protection device for general home users (Taken up as learning project).

# Micro-controller :- PIC16F1824 (MPLAB IDE)
# Documentation :- Doxygen

# Logic:- 
  Reed switch is used to detect the position of door. Controller will mostly be in sleep mode and will wake up after every seconds and check the door satus (to save power in case of battery based applications).
  2 switches will be interfaced with device, 1 to disbale the alarm and other will be used by home users before opening the door (to eliminate false alarm) [In future we plan to interface it with keypads and provide individual passwrods to each user.]
  Alarm will be triggered using relay.
  
  # Guidelines:-
    while designing keep future scopes open.
    Conserving power is of high priority.
    Since its a protection based device, it should designed in fail safe way.
