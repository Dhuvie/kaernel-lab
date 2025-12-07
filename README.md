flowchart LR

%% ========== ROW 1 ==========
A[Start] --> B[Select Safe Development Environment]
B --> C[Reject Physical Linux and Virtual Machine]
C --> D[Choose GitHub Codespaces]
D --> E[Launch Cloud Linux Environment]

%% DROP DOWN
E --> E1[ ]

%% ========== ROW 2 (Reverse Direction) ==========
I[Enter Kernel Source Directory]
G[Clone Linux Kernel Source] --> I
F[Open Terminal] --> G
E1 --> F

%% DROP DOWN
I --> I1[ ]

%% ========== ROW 3 ==========
I1 --> J[Create hellosys.c File]
J --> K[Write Kernel System Call Code]
K --> L[Define SYSCALL_DEFINE0]
L --> M[Use printk for Kernel Output]

%% DROP DOWN
M --> M1[ ]

%% ========== ROW 4 (Reverse Direction) ==========
R[Add sys_hellosys Declaration]
Q[Edit syscalls.h] --> R
P[Declare Function Prototype] --> Q
O[Assign Syscall Number 548] --> P
N[Edit syscall_64.tbl] --> O
M1 --> N

%% DROP DOWN
R --> R1[ ]

%% ========== ROW 5 ==========
R1 --> S[Create test.c Program]
S --> T[Write User Space Code]
T --> U[Use syscall Instruction]
U --> V[Transfer Control to Kernel Space]

%% DROP DOWN
V --> V1[ ]

%% ========== ROW 6 (Reverse Direction) ==========
AA[Create Init Script]
Z[Install BusyBox] --> AA
Y[Create Directory Structure] --> Z
X[Create Minimal Root File System] --> Y
V1 --> X

%% DROP DOWN
AA --> AA1[ ]

%% ========== ROW 7 ==========
AA1 --> AB[Pack RootFS into initramfs Image]
AB --> AC[Run make defconfig]
AC --> AD[Compile Kernel using make]
AD --> AE[Generate bzImage Kernel]

%% DROP DOWN
AE --> AE1[ ]

%% ========== ROW 8 (Reverse Direction) ==========
AJ[Boot Kernel Using QEMU]
AI[Load initramfs Image] --> AJ
AH[Load Kernel Image] --> AI
AE1 --> AH

%% DROP DOWN
AJ --> AJ1[ ]

%% ========== ROW 9 ==========
AJ1 --> AK[Kernel Boots Successfully]
AK --> AL[Init Script Executes]
AL --> AM[Test Program Calls System Call]
AM --> AN[Kernel Prints Hello World]

%% DROP DOWN
AN --> AN1[ ]

%% ========== ROW 10 (Reverse Direction) ==========
AR[Create Portable ZIP]
AQ[Export bzImage and initramfs] --> AR
AP[BusyBox Shell Starts] --> AQ
AN1 --> AP

%% DROP DOWN
AR --> AR1[ ]

%% ========== ROW 11 ==========
AR1 --> AS[Transfer ZIP to Windows]
AS --> AT[Install QEMU on Windows]
AT --> AU[Boot Custom Kernel]
AU --> AV[Verify Hello World Output]
AV --> AW[Project Successfully Completed]
