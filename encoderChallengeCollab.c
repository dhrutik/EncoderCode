#pragma config(Sensor, dgtl1,  encode,         sensorQuadEncoder)
#pragma config(Motor,  port2,           rightFront,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rightBack,     tmotorVex393_MC29, openLoop,reversed)
#pragma config(Motor,  port4,           leftFront,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftBack,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// 1127.90068 ticks for encoder
#define PI 3.14159265
int diameter = 4;
float distInch = 39.3701;
float calcNumTicks = 0;
float count = 0;

task main()
{

	while(true){
		SensorValue[encode] = 0;

		//calcNumTicks = 360/(diameter*PI)* distInch;
count = SensorValue[encode];
		if(count<1128){

			motor[rightBack] = 127;
			motor[rightFront] = 127;
			motor[leftBack] = 127;
			motor[leftFront] = 127;
		}
		else{
			motor[rightBack] = 0;
			motor[rightFront] = 0;
			motor[leftBack] = 0;
			motor[leftFront] = 0;
		}
	}


}
