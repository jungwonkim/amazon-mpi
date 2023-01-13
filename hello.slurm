#!/bin/bash -l

#SBATCH -J hello
#SBATCH -p c7g-16xlarge
#SBATCH -N 2
#SBATCH --ntasks-per-node=4
#SBATCH -t 01:00:00

echo "MPI $SLURM_NTASKS RANKS"

date
mpirun ./hello

date
srun ./hello
