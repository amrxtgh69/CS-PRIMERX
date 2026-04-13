1. registers (which registers hold which function parameters)

x86_64 contains 16 general purpose register storing the 64 bit values.
used to store integer data as well as pointers.

**Operand** 

immediate -> constant values -> which is imm.

register -> denotes the content of the register.

memory reference -> access some memory location through the computed address called effective address.

there are different types of addressing modes:
Immediate offset Imm. a base register rb, index register ri, scale factor s (which must be 1, 2, 4, 8).
Imm + R[rb] + R[ri].s

**Data movement Instruction** 

instruction that can copy data from source location to another destination location.
This means basically move the data from the one location to another.

there are many instruction for this. we classify in the instruction classes.
instruction in the class perform the same operation but with different operand sizes.

intel classify the word as the 16-bit. 

movb -> 1 byte
movw -> 2 byte
movd -> 4 byte
movq -> 8 byte

there is another also called movabsq

Source operand should be the value( or imm) which is stored in the reg or memory address.

it cannot have the both operand refer to the memory loaction

copying the value from one memory location to another requires two instruction.
first to load the source value into the register --> second to write this register value into the destination.

mov<size> source, destination

