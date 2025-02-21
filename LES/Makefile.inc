
HOSLES_ROOT = /home/goon/12_WindFarm

FC = mpif90
CC = mpicc
FFT = fftw3

# enable preprocessing
CPPFLAGS = -cpp
# # enable Cray pointer support if needed
#CRAYPTR=-fcray-pointer

# Choose pre-processing options
# #   -DDOUBLE_PREC   - use double-precision (default single)
# #   -DEVEN          - for evenly distributed data, use ALLTOALL
# #   -DSHM         - enable system V shared-memory implementation
# #   -DOVERWRITE     - allow FFT input to be overwritten (save memory)
# #   -DOCC           - use API for overlap communication and computation
# #   -DGLOBAL_ARRAYS - turn on support for Global Arrays toolkit
# #   -DT3PIO         - turn on LUSTRE IO optimisation code using T3PIO

# # optimisation or debugging flags
OPTIM = -g -fcheck=all -fbacktrace
#OPTIM=-O3
OPTIONS = -DDOUBLE_PREC -Wall

#Define the compiling options
FFLAGS = $(OPTIM) $(OPTIONS) $(CRAYPTR) $(CPPFLAGS)
CFLAGS = $(OPTIM) $(CPPFLAGS)
#CFLAGS = -O3 -r8 -zero

#Define the linking options
#LDFLAGS = -Wl,--no-as-needed -lrt
HDF5_ROOT = /opt/ohpc/pub/apps/phdf5
FFTW_ROOT = /opt/ohpc/pub/libs/gnu7/mpich/fftw/3.3.7

HDF5_INC = $(HDF5_ROOT)/include
HDF5_LIB = $(HDF5_ROOT)/lib
FFTW_INC = $(FFTW_ROOT)/include
FFTW_LIB = $(FFTW_ROOT)/lib
