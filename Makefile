hello:hello.c
	mpicc -o $@ $<

run:hello hello.slurm
	sbatch hello.slurm

clean:
	rm -f hello
	rm -f slurm-*.out
