

main:
  li  $v0,  5
  syscall
  move  $t0, $v0

  li  $t1, 0      #count $t1
  li  $t2, 0      #i  $t2
for_loop:
  bge $t2, 32, for_end

  move  $t3, $t0    #t3 = value
  srlv  $t3, $t3, $t2    #t3 = (value >> i)
  andi $t3, $t3, 1

  addi  $t2, $t2, 1

  beq		$t3, 1, for_loop
  addi  $t1, $t1, 1

  j		for_loop				# jump to for_loop

for_end:

  li  $v0, 1
  move  $a0, $t1
  syscall

  li	$v0, 0
	jr	$ra				# return 0;