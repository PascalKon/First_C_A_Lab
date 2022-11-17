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

**c** 


