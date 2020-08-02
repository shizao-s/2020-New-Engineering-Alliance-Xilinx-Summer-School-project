# 2020-New-Engineering-Alliance-Xilinx-Summer-School-Project
2020年新工科联盟-Xilinx暑期学校（Summer School）项目。<br>
### 项目名称：<br>
仪器仪表-虚拟示波器
### 项目简介：<br>
本项目所设计的虚拟示波器是一款通过对模拟信号进行采集处理并显示波形的仪器仪表。
### 项目功能：<br>
* 产生模拟脉冲调制信号
* 利用板载ADC、DAC等模块进行波形采集、处理
* 利用HDMI模块结合液晶显示屏显示观察
### 应用场景：<br>
* 虚拟示波器能够直接检测模拟信号，用直观的波形在电脑屏幕或显示屏上显示出来;
* 能够在没有数字示波器的情况下观察模拟信号，帮助硬件维护人员从最基础的部分调试测试串口是否正常工作,排查设备故障等；
### 项目软硬件工具:<br>
* 软件:<br>
  * Vivado 2018.2
  * Matlab 2017b
  * Arduino 1.8.13
* 硬件：<br>
  * Spartan Edge Accelerator Board(FPGA型号：xc7s15ftgb196)
  * stm32f103c8t6
### 项目成员<br>
* 张卓群
* 邱暨南
### 项目仓库目录<br>
* Arduino: stm32波形发生程序
* Vivado: 包含HDMI_show波形采集处理显示程序和matlab波形发生程序
* Serial_Digital_Scope V2：虚拟示波器软件安装包及使用说明
* Images: 作品设计流程图及成果图
