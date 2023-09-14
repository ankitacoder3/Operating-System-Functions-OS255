<a name="readme-top"></a>

# Operating-System-Functions
###
### This repository contaians codes for various operating system functions, like scheduling, pipes, wait, threads etc.
<!---![image](https://github.com/ankitacoder3/Operating-System-Functions/assets/73939061/981eeb0c-651b-4ea4-9eb9-38753a07f740)-->

###
###

<details>
  <summary color= blue >Table of Contents</summary>
<li>Summary</li>
<li> Prerequisites and Techstack</li>
<li> Steps for execution</li>
<li> Usage</li>
<li>Contributing</li>
</details>
</br>


## Summary


### This repository contaians codes for various operating system functions, like scheduling, pipes, wait, threads etc.

* Here is the structure of the project repository:
<details>
<summary color=blue> Repository Structure </summary>
  
```plaintext
Operating-System-Functions/
├── Operating_System/   # Main Folder             
│   ├── Fork_Wait_Exec/
│   │   ├── example1.c
│   │   ├── example1a.c
│   │   ├── example2.c
│   │   ├── example3.c
│   │   └──example4.c      
│   ├── Pipes/
│   │   ├── demo_pipe.c
│   │   ├── fifo_read.c
│   │   ├── fifo_write.c
│   │   ├── msgq_read.c
│   │   ├── msgq_write.c
│   │   ├── shm_read.c
│   │   └── shm_write.c
│   ├── Processes/
│   │   ├── orphan.c
│   │   ├── welcome.c
│   │   └── zombie.c  
│   ├── Programming_Exercise/
│   │   ├── P1/
│   │   │   ├── p1_q3.c
│   │   │   └── sum.c
│   │   └── P2_P3_P4_P5/
│   │   │   ├── p2.c
│   │   │   ├── p3.c
│   │   │   ├── p4.c
│   │   │   └── p5.c
│   ├── Scheduling_codes/
│   │   ├── fcfs.c
│   │   ├── priority.c
│   │   ├── round_robin.c
│   │   ├── sjf.c
│   │   └── srtf.c
│   ├── Threads/
│   │   ├── demo_threads.c
│   │   └── demo_threads_tb.c  
│   └── LICENSE        
├── README.md           # Repository README
├── .gitignore          # Git ignore file
└── .gitattributes      # Git attributes file (e.g., for line endings)
```

</details>

<!--* Sample Screenshot:
*  ![image](https://github.com/ankitacoder3/Operating-System-Functions/assets/73939061/919b667b-327d-4541-b0f2-fae12144f992)-->

###
###

<p align="right">(<a href="#readme-top">back to top</a>)</p>
</br>

## Prerequisites and Techstack
* C
* Operating system concepts
###
###

<p align="right">(<a href="#readme-top">back to top</a>)</p>
</br>

## Steps for execution

 1. Clone the ``` 'Operating-System-Functions' ``` github repository.
  ```sh 
  git clone https://github.com/ankitacoder3/Operating-System-Functions.git 
  ```
 2. Navigate to the ``` 'Operating_System' ``` Directory in that.
  ```sh
  cd Operating-System-Functions
  cd Operating_System
  ```
  3. Open the ```individual directories path``` in terminal.  Say, open 'Processes' directory.
  ```sh
  cd Processes
  ```
  4. Type ``` "gcc <-filename->" ``` to execute the files in that directory. Say, run 'zombie.c'.
  ```sh
  gcc zombie.c
  ```
  ###
  ###### 
  ###
  ###

  <p align="right">(<a href="#readme-top">back to top</a>)</p>
</br>

## Usage
* This shall provide a better understanding of operating system concepts.
* This provides a practical approach for the operating system concepts.
* ![image](https://github.com/ankitacoder3/Operating-System-Functions/assets/73939061/a4e72d3b-aff0-4692-aa40-5203b9dbee6c)
* ![image](https://github.com/ankitacoder3/Operating-System-Functions/assets/73939061/5d5db933-40ce-46be-b70f-16ccb9526c02)
*  ![image](https://github.com/ankitacoder3/Operating-System-Functions/assets/73939061/919b667b-327d-4541-b0f2-fae12144f992)

  <p align="right">(<a href="#readme-top">back to top</a>)</p>
  </br>

## Contributing
1. Fork the Project
2. Create your functions Branch (`git checkout -b functions`)
4. Commit your Changes (`git commit -m 'Add some Functions'`)
5. Push to the Branch (`git push origin functions`)
6. Open a Pull Request

* [![License](https://img.shields.io/badge/License-MIT-blue.svg)](Operating_System/LICENSE)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
