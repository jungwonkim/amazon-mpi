#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int rank, size, len;
  char name[256];
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Get_processor_name(name, &len);

  printf("[%s:%d] [%s] [%d/%d] %d\n", __FILE__, __LINE__, name, rank, size, MPI_TAG_UB);

  MPI_Finalize();

  return 0;
}
