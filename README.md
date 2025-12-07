flowchart TD

subgraph R1[ ]
direction LR
A[Start] --> B[Select Safe Development Environment]
B --> C[Reject Physical Linux and Virtual Machine]
C --> D[Choose GitHub Codespaces]
D --> E[Launch Cloud Linux Environment]
end

subgraph R2[ ]
direction RL
I[Enter Kernel Source Directory] --> H[Clone Linux Kernel Source]
H --> G[Open Terminal]
end

E --> I

subgraph R3[ ]
direction LR
J[Create hellosys.c File] --> K[Write Kernel System Call Code]
K --> L[Define SYSCALL_DEFINE0]
L --> M[Use printk for Kernel Output]
end

I --> J

subgraph R4[ ]
direction RL
R[Add sys_hellosys Declaration] --> Q[Edit syscalls.h]
Q --> P[Declare Function Prototype]
P --> O[Assign Syscall Number 548]
O --> N[Edit syscall_64.tbl]
end

M --> R

subgraph R5[ ]
direction LR
S[Create test.c Program] --> T[Write User Space Code]
T --> U[Use syscall Instruction]
U --> V[Transfer Control to Kernel Space]
end

N --> S

subgraph R6[ ]
direction RL
AA[Create Init Script] --> Z[Install BusyBox]
Z --> Y[Create Directory Structure]
Y --> X[Create Minimal Root File System]
end

V --> AA

subgraph R7[ ]
direction LR
AB[Pack RootFS into initramfs Image] --> AC[Run make defconfig]
AC --> AD[Compile Kernel using make]
AD --> AE[Generate bzImage Kernel]
end

X --> AB

subgraph R8[ ]
direction RL
AJ[Boot Kernel Using QEMU] --> AI[Load initramfs Image]
AI --> AH[Load Kernel Image]
end

AE --> AJ

subgraph R9[ ]
direction LR
AK[Kernel Boots Successfully] --> AL[Init Script Executes]
AL --> AM[Test Program Calls System Call]
AM --> AN[Kernel Prints Hello World]
end

AJ --> AK

subgraph R10[ ]
direction RL
AR[Create Portable ZIP] --> AQ[Export bzImage and initramfs]
AQ --> AP[BusyBox Shell Starts]
end

AN --> AR

subgraph R11[ ]
direction LR
AS[Transfer ZIP to Windows] --> AT[Install QEMU on Windows]
AT --> AU[Boot Custom Kernel]
AU --> AV[Verify Hello World Output]
AV --> AW[Project Successfully Completed]
end

AP --> AS
