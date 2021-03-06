# congestion_detect project (2020 Spring Embedded System)

## 적외선 센서를 이용한 지하철 혼잡도 확인하는 아두이노 장치입니다.
## (Device for checking subway congestion using infrared sensors)


### 1. 서론

매일 많은 사람들이 지하철을 이용하여 다양한 곳으로 이동한다. 출퇴근 시간의 지하철은 '지옥철'이라는 별명을 갖고 있을 정도로 많은 사람들이 이용한다.
본 제작자는 사람이 많은 시간대에 지하철을 이용하길 꺼렸다. 그래서 이러한 장치를 제작함으로써 타기 전에 혼잡 정도를 확인하고  사람이 적은 칸을 미리 확인함으로써 사람이 적은 칸을 이용하는 것에 중점을 두었다.

### 2. 시스템 구성

 시스템은 아두이노와 적외선 센서, 그리고 정보를 표시하기 위한 LCD, 아두이노를 사용하여 구성하였다.
 1) 하드웨어 구성 
 
 - 적외선 장애물 회피센서 모듈 (HS-IRSM)
 - 아두이노 I2C 1602 LCD (SZH-EK101)
 
 
 ![회로판](https://user-images.githubusercontent.com/48882962/99149243-202ff900-26d0-11eb-9695-4386960c05fe.JPG)
 
 
 2) 소프트웨어 구성 
 
 - 아두이노 IDE
 - Node.js
 

 ![웹페이지로 표시](https://user-images.githubusercontent.com/48882962/99149240-1f976280-26d0-11eb-8206-de0337f60a96.JPG)
 
 ### 3. 결론 
 
  적외선 장애물 회피 센서를 이용하여 혼잡도를 측정하는 장치를 만들어 보았다. 처음 계획 단계에서는 지하철에 본 장치를 포함시킴으로써 전용으로 사용할 계획이었으나, 모듈형식으로 제작함으로써 더욱 다양한 분야에서 사용이 가능할 것이라 생각된다.
  또한 이의 결과를 Node.js를 이용하여 웹페이지를 통해 확인할 수 있다. 이로써 사람의 혼잡정도를 미리 파악하여 이로써 생기는 스트레스가 줄어들길 본 제작자는 기대한다.
