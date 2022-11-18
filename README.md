### First Computer Arichitecture Lab report

Authors: Konstantinidis Paschalis, Tzouvaras Evangelos

### **_Question 1_**

There are three different type of processors, which of one has different default settings. These settings are exported from the **_starter_se.py_** file. We run the "Hello world" program with the **_minor CPU_** as a CPU type and by running the command: 

>./build/ARM/gem5.opt configs/example/arm/starter_se.py --cpu="minor" "tests/test-progs/hello/bin/arm/linux/hello"

**Minor CPU** (Line 179)
* Default frequency: 4GHz
* Default cores: 1
* Default memory type: DDR3_1600_8x8
* Default memory storage: 2GB

### **_Question 2_**

**a.** The same information  about the CPU settings may be exported from the _config.ini_ file.
  * Line 59: clock = 250, this means that the frequency is 4GHz
  * Line 36: cpus_count = 0
  * Line 1251:(memory settings) type: DRAMInterface
  * Line 66: cpu_type = MinorCPU

**b.** 
   * **_sim_seconds:_** The number of seconds simulated (Second) (/hellostats.txt line 3)
   * **_sim_insts:_** The number of instructions simulated (Count) (/hellostats.txt line 10)
   * **_host_inst_rate:_** The simulator instruction rate (inst/sec) (/hellostats.txt line 12)

**c.** Commited instructions: 5028 - Number of instructions committed (from /hellostats.txt file on line 19)

**d.** L2 accesses: 479 - Number of demand (read+write) accesses (frmo /hellostats.txt file on line 426) 

Another way to find the L2 accesses is by L1 misses because for every L1 cache miss (instruction or data cache) the processor will go to L2 cache to search the information.

### **_Question 3_**

The gem5 simulator has to different models for in-order CPU simulations: the Minor CPU and the simple CPU.

 **MINOR CPU**
 
  Minor is an in-order processir model with a fixed pipeline but congigurable data stuctures and execute behaviour. It is intended to be used to model processors with strict in-order execution behaviour and allows visualisation of an instruction’s position in the pipeline through the MinorTrace/minorview.py format/tool. 
The intention is to provide a framework for micro-architecturally correlating the model with a particular, chosen processor with similar capabilities.The model isn’t currently capable of multithreading but there are THREAD comments in key places where stage data needs to be arrayed to support multithreading.

**SIMPLE CPU**

 The simple CPU is an in-order model that it is used when the detailed model is not necessary and can support the new memory system. Simple CPU has three sub-categories: the BaseSimple CPU, the AtomicSimple CPU and the TimingSimple CPU models. The BaseSimple CPU has functions for checking interrupts and handling pre-execute and post-execute actions. Also can set up a fetch request. The BaseSimple CPU model cannot be run on its owm but is used  within the other two Simple CPU models. The AtomicSimple CPU has the characteristic that uses atomic memory acesses. It estimates the overall cache access time and connects the CPU with the cache. It has functions to read-write the memory and to monitor the CPU in every cycle. Finally, the TimingSimple CPU model uses timing memory access. It stalls on cache accesses and waits for the memory system to respond prior to proceeding. It also implements the same functions as the AtomicSimple model.

**a.** The program in that that we wrote is a simple program that 
