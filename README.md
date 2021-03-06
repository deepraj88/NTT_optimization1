# PQC Hardware Implementation

### NTT Results

* Vivado HLS solution at ./dilithium1.prj and ./ntt_optimized/ntt_check

| Optimization | BRAM | DSP | FF | LUT | Clock Period | Latency |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| Unoptimized | 1 | 8 | 516 | 659 | 7.724 | 9998 |
| Loop Unroll (out) | 1 | 64 | 3300 | 4596 | 7.724 | 7941 |
| Loop Unroll (in) | 1 | 8 | 516 | 659 | 7.724 | 9998 |
| Loop Pipeline (out) | 1 | 8 | 516 | 659 | 7.724 | 9998 |
| Loop Pipeline (in) | 1 | 8 | 518 | 677 | 7.724 | 10235 |
| Micro-architecture | 1 | 2 | 495 | 845 | 8.363 | 8971 |
| Unroll+Pipe+Micro | 1 | 16 | 3132 | 6076 | 8.363 | 6917 |
| Unroll+Pipe+Micro+Parition | 2 | 16 | 3577 | 7529 | 8.363 | 8069 |
| C-code change + pipeline | 0 | 204 | 11310 | 8920 | 18.332 | 719 |

### Publication

If you use this [software](https://csrc.nist.gov/CSRC/media/Events/Second-PQC-Standardization-Conference/documents/accepted-papers/soni-hardware-evaluation.pdf) or [methodology](https://eprint.iacr.org/2019/047.pdf) in your research, kindly cite our work.
```
@misc{pqc2019,
    author = {Kanad Basu and Deepraj Soni and Mohammed Nabeel and Ramesh Karri},
    title = {{NIST} Post-Quantum Cryptography- A Hardware Evaluation Study},
    howpublished = {IACR Cryptology ePrint Archive, Report 2019/047},
    year = {2019},
    note = {\url{https://eprint.iacr.org/2019/047}},
}

@inproceedings{soni2019,
  title={A Hardware Evaluation Study of {NIST}
Post-Quantum Cryptographic Signature schemes},
    author = {Deepraj Soni and Kanad Basu and Mohammed Nabeel and Ramesh Karri},
  booktitle={Second PQC Standardization Conference},
  year={2019},
  organization={NIST},
  note = {\url{https://csrc.nist.gov/CSRC/media/Events/Second-PQC-Standardization-Conference/documents/accepted-papers/soni-hardware-evaluation.pdf}},
}

```

### Open Project
* Download the github project in the local repository.
* Open the project. The project name ends with (.prj). 
 ![open_project](./Hw_Implementation_Docs/open_project.png)
* The project has different solutions. Each solution has unique target device, clock period, cosimultation settings, and configuration settings.
 ![solution_names](./Hw_Implementation_Docs/solution_names.png)
* For all the solutions, the top module is same. Change or view the top module from, project -> project settings -> synthesis.
 ![project_settings](./Hw_Implementation_Docs/project_settings.png)


### C-Simulation 
* The C-simulation is common for all the solution. Run the C-simulation: Project -> Run C Simulation.
 ![simulation](./Hw_Implementation_Docs/simulation.png)
* We run the C-simulation with debug mode. Simulation does not work on normal mode. Hence, make sure "Launch Debugger" is ticked.
* In the debug mode, run the "Resume(F8)" to start the simulation. If the program works successfully, console shows "Known Answer test PASSED."
 ![debug_mode](./Hw_Implementation_Docs/debug_mode.png)
 ![debug_mode_2](./Hw_Implementation_Docs/debug_mode_2.png)

### Synthesis
* Expose the global variables for synthesis.
* solution settings -> General -> Add/Edit -> config_interface -> expose_global
 ![synth_setting](./Hw_Implementation_Docs/solution_settings.png)
 ![synth)setting2](./Hw_Implementation_Docs/expose_global.png)
