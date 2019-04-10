FROM ubuntu

# Set the working directory to /app
WORKDIR /app

# Copy the current directory contents into the container at /app

RUN apt-get update && apt-get install -y git gcc build-essential
RUN git clone https://github.com/BuckleScript/ocaml.git 
WORKDIR /app/ocaml
RUN ./configure
RUN make world
RUN make opt
RUN make opt.opt
RUN make install
RUN make clean

WORKDIR /app
COPY . /app
CMD ["ocamlc", "-dlambda", "-c", "sample.ml"]