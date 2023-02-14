# cstringlib version0.5
一个由纯C写成的string库
## 使用方法(以下有对传入数据进行操作的函数必须传入地址！)（换句话说就是带*的cstring的要传地址）
- 声明变量<br>
```c
cstring A, B, C,D;
```
- 初始化变量start（后来发现没必要,只要你没在赋值前用freedata）<br>
定义：<br>
```c
void begin(cstring* start)
```
- 清除内存并释放tar的数据<br>
定义：<br>
```c
void freedata(cstring* tar)
```
- 给tar赋值，如果有数据，则替换<br>
定义：<br>
```c
bool setdata(cstring *tar,char* st)
```
- 把字符串st的数据取[start,end)给赋值给tar<br>
定义：<br>
```c
setdata_lim(cstring *tar,char* st,unsigned start,unsigned int end)
```
- 复制tarstr的数据到tostr（e.g.假设tarstr的数据为"woshishabi"则tostr也为"woshishabi"，两者长度相等）<br>
定义：<br>
```c
cpstr(cstring *tostr,cstring *tarstr)
```
 - 把todata与str拼接，把拼接结果赋值给todata<br>
 定义：<br>
 ```c
 void add_str(cstring *todata,cstring *str)
 ```
  - 把char类型的val压入lis中<br>
 定义：<br>
 ```c
void pushlist(cstring *lis,char val)
 ```
 （本来函数名想写pushstr的，但最近在写vector，push算法和这个差不多，所以改了一下直接拿来用了，但忘改函数名了，后面一起改吧）<br>
  - 把lis中最后一个值弹出并返回<br>
 定义：<br>
 ```c
char poplist(cstring *lis)
 ```
 （起名为poplist的原因同上）<br>
 - 把Astr与Bstr的数据交换<br>
 定义：<br>
 ```c
void swapstr(cstring* Astr,cstring* Bstr)
 ```
  - 在tarstr中修改where处的值（从0开始数！）<br>
 定义：<br>
 ```c
void repstr(cstring* tarstr,int where,char val)
 ```
 ## 编译器测试<br>
 
  cstring类型/编译器类型  |  MSVC 64 Debug  |  MSVC 64 Release  |  GCC 32BIT(WIN)  |  GCC 64BIT(WIN)  |  GCC 64BIT(LINUX)
  ---- | ----- | ------ | ------ | ----- |-----
  C++STR  |  通过  |  未测试  |  通过  |  通过  | 通过 
  cstring  |  不通过，直接运行test报错  |  未测试  |  通过  |  通过  |  通过 

 -（后来看了一下，msvc要强制类型转换）
 ## 更新情况
 - 不定期，因为要写寒假作业ヽ(*。>Д<)o゜
 - 寒假作业早做完了，但忘了我还有个项目要维护∑( 口 ||
 - 加入repstr，swapstr，poplist，pushlist
 - 四个函数改动，已经变得相对独立，不再依赖于其他函数，主要怕内存泄漏
 - ereasestr，insertstr和findstr还有点问题，下个版本再加
 
 ## PRPRPRPRPR
 - 如果遇到问题（特别是内存泄漏）或者有更好的算法或建议，欢迎提issues或者PR
 
 ## 备注
 - C++STR已经不再更新，上述资料只适用于cstring（以前走的弯路，认为能在结构体里放函数，结果编译器选项没改）。
 - 上传的文件中有test.c/cpp，你可以编译此文件（需要加上库）来验证库是否存在逻辑问题
 - 输出结果在resu.txt
 - 提issues时尽量带上你的操作系统类型、版本以及编译器的类型，版本，位数
 - 如果要使用字符串，直接使用 <你定义的变量变量>.data就行，后续会慢慢加
