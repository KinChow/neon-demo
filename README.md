# NeonDemo

## 初始化

### vcreate_type

#### 功能

将uint64_t的数据复制到64位元素类型为type的向量。



#### 例子

```c++
uint64_t v = 256;
int8x8_t v_s8 = vcreate_s8(v);
int16x4_t v_s16 = vcreate_s16(v);
int32x2_t v_s32 = vcreate_s32(v);
int64x1_t v_s64 = vcreate_s64(v);
uint8x8_t v_u8 = vcreate_u8(v);
uint16x4_t v_u16 = vcreate_u16(v);
uint32x2_t v_u32 = vcreate_u32(v);
uint64x1_t v_u64 = vcreate_u64(v);
float16x4_t v_f16 = vcreate_f16(v);
float32x2_t v_f32 = vcreate_f32(v);
float64x1_t v_f64 = vcreate_f64(v);
print_vector(v_s8);
/* 0 1 0 0 0 0 0 0 */
print_vector(v_s16);
/* 256 0 0 0 */
print_vector(v_s32);
/* 256 0 */
print_vector(v_s64);
/* 256 */
print_vector(v_u8);
/* 0 1 0 0 0 0 0 0 */
print_vector(v_u16);
/* 256 0 0 0 */
print_vector(v_u32);
/* 256 0 */
print_vector(v_u64);
/* 256 */
print_vector(v_f16);
/* 1.52588e-05 0 0 0 */
print_vector(v_f32);
/* 3.58732e-43 0 */
print_vector(v_f64);
/* 1.26481e-321 */
```





### vdup_n_type

#### 功能

将type类型的数据复制到64位标量或向量中的每个元素。



#### 例子

```c++
int8x8_t v_s8 = vdup_n_s8(-1);
int16x4_t v_s16 = vdup_n_s16(-2);
int32x2_t v_s32 = vdup_n_s32(-3);
int64x1_t v_s64 = vdup_n_s64(-4);
uint8x8_t v_u8 = vdup_n_u8(5);
uint16x4_t v_u16 = vdup_n_u16(6);
uint32x2_t v_u32 = vdup_n_u32(7);
uint64x1_t v_u64 = vdup_n_u64(8);
float16x4_t v_f16 = vdup_n_f16(1.2);
float32x2_t v_f32 = vdup_n_f32(2.4);
float64x1_t v_f64 = vdup_n_f64(3.6);
print_vector(v_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 */
print_vector(v_s16);
/* -2 -2 -2 -2 */
print_vector(v_s32);
/* -3 -3 */
print_vector(v_s64);
/* -4 */
print_vector(v_u8);
/* 5 5 5 5 5 5 5 5 */
print_vector(v_u16);
/* 6 6 6 6 */
print_vector(v_u32);
/* 7 7 */
print_vector(v_u64);
/* 8 */
print_vector(v_f16);
/* 1.2002 1.2002 1.2002 1.2002 */
print_vector(v_f32);
/* 2.4 2.4 */
print_vector(v_f64);
/* 3.6 */
```





### vdupq_n_type

#### 功能

将type类型的数据复制到128位标量或向量中的每个元素。



#### 例子

```c++
int8x16_t v_s8 = vdupq_n_s8(-1);
int16x8_t v_s16 = vdupq_n_s16(-2);
int32x4_t v_s32 = vdupq_n_s32(-3);
int64x2_t v_s64 = vdupq_n_s64(-4);
uint8x16_t v_u8 = vdupq_n_u8(5);
uint16x8_t v_u16 = vdupq_n_u16(6);
uint32x4_t v_u32 = vdupq_n_u32(7);
uint64x2_t v_u64 = vdupq_n_u64(8);
float16x8_t v_f16 = vdupq_n_f16(1.2);
float32x4_t v_f32 = vdupq_n_f32(2.4);
float64x2_t v_f64 = vdupq_n_f64(3.6);
print_vector(v_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 */
print_vector(v_s16);
/* -2 -2 -2 -2 -2 -2 -2 -2 */
print_vector(v_s32);
/* -3 -3 -3 -3 */
print_vector(v_s64);
/* -4 -4 */
print_vector(v_u8);
/* 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 */
print_vector(v_u16);
/* 6 6 6 6 6 6 6 6 */
print_vector(v_u32);
/* 7 7 7 7 */
print_vector(v_u64);
/* 8 8 */
print_vector(v_f16);
/* 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 */
print_vector(v_f32);
/* 2.4 2.4 2.4 2.4 */
print_vector(v_f64);
/* 3.6 3.6 */
```





### vdup_lane_type

#### 功能

将一个64位向量中指定索引的元素复制到另一个64位标量或向量中的每个元素。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0102030405060708);
int8x8_t v2_s8 = vdup_lane_s8(v1_s8, 6);
print_vector(v1_s8);
/* 8 7 6 5 4 3 2 1 */
print_vector(v2_s8);
/* 2 2 2 2 2 2 2 2 */
```





### vdupq_lane_type

#### 功能

将一个64位向量中指定索引的元素复制到另一个128位标量或向量中的每个元素。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0102030405060708);
int8x16_t v2_s8 = vdupq_lane_s8(v1_s8, 2);
print_vector(v1_s8);
/* 8 7 6 5 4 3 2 1 */
print_vector(v2_s8);
/* 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 */
```





### vmov_n_type

#### 功能

将type类型的数据复制到64位标量或向量中的每个元素。

和vdup_n_type功能一样。



#### 例子

```c++
int8x8_t v_s8 = vmov_n_s8(-1);
int16x4_t v_s16 = vmov_n_s16(-2);
int32x2_t v_s32 = vmov_n_s32(-3);
int64x1_t v_s64 = vmov_n_s64(-4);
uint8x8_t v_u8 = vmov_n_u8(5);
uint16x4_t v_u16 = vmov_n_u16(6);
uint32x2_t v_u32 = vmov_n_u32(7);
uint64x1_t v_u64 = vmov_n_u64(8);
float16x4_t v_f16 = vmov_n_f16(1.2);
float32x2_t v_f32 = vmov_n_f32(2.4);
float64x1_t v_f64 = vmov_n_f64(3.6);
print_vector(v_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 */
print_vector(v_s16);
/* -2 -2 -2 -2 */
print_vector(v_s32);
/* -3 -3 */
print_vector(v_s64);
/* -4 */
print_vector(v_u8);
/* 5 5 5 5 5 5 5 5 */
print_vector(v_u16);
/* 6 6 6 6 */
print_vector(v_u32);
/* 7 7 */
print_vector(v_u64);
/* 8 */
print_vector(v_f16);
/* 1.2002 1.2002 1.2002 1.2002 */
print_vector(v_f32);
/* 2.4 2.4 */
print_vector(v_f64);
/* 3.6 */
```





### vmovq_n_type

#### 功能

将type类型的数据复制到128位标量或向量中的每个元素。

和vdupq_n_type功能一样。



#### 例子

```c++
int8x16_t v_s8 = vmovq_n_s8(-1);
int16x8_t v_s16 = vmovq_n_s16(-2);
int32x4_t v_s32 = vmovq_n_s32(-3);
int64x2_t v_s64 = vmovq_n_s64(-4);
uint8x16_t v_u8 = vmovq_n_u8(5);
uint16x8_t v_u16 = vmovq_n_u16(6);
uint32x4_t v_u32 = vmovq_n_u32(7);
uint64x2_t v_u64 = vmovq_n_u64(8);
float16x8_t v_f16 = vmovq_n_f16(1.2);
float32x4_t v_f32 = vmovq_n_f32(2.4);
float64x2_t v_f64 = vmovq_n_f64(3.6);
print_vector(v_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 */
print_vector(v_s16);
/* -2 -2 -2 -2 -2 -2 -2 -2 */
print_vector(v_s32);
/* -3 -3 -3 -3 */
print_vector(v_s64);
/* -4 -4 */
print_vector(v_u8);
/* 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 */
print_vector(v_u16);
/* 6 6 6 6 6 6 6 6 */
print_vector(v_u32);
/* 7 7 7 7 */
print_vector(v_u64);
/* 8 8 */
print_vector(v_f16);
/* 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 1.2002 */
print_vector(v_f32);
/* 2.4 2.4 2.4 2.4 */
print_vector(v_f64);
/* 3.6 3.6 */
```





### vmovl_type

#### 功能

将一个64位向量中的每个元素位宽扩大一倍，复制到另一个128位向量中。



#### 例子

```c++
int8x8_t v_s8 = vcreate_s8(0x0102030405060708);
int16x8_t v_s16 = vmovl_s8(v_s8);
int32x4_t v_s32 = vmovl_high_s16(v_s16);
print_vector(v_s8);
/* 8 7 6 5 4 3 2 1 */
print_vector(v_s16);
/* 8 7 6 5 4 3 2 1 */
print_vector(v_s32);
/* 4 3 2 1 */
```





### vmovn_type

#### 功能

将一个128位向量中的每个元素位宽缩小一倍，复制到另一个64位向量中。



#### 例子

```c++
int16x8_t v_s16 = vmovq_n_s16(128);
int8x8_t v_s8 = vmovn_s16(v_s16);
print_vector(v_s16);
/* 128 128 128 128 128 128 128 128 */
print_vector(v_s8);
/* -128 -128 -128 -128 -128 -128 -128 -128 */
```





### vqmovn_type

#### 功能

将一个128位向量中的每个元素位宽缩小一倍，进行饱和操作，复制到另一个64位向量中。



#### 例子

```c++
int16x8_t v_s16 = vmovq_n_s16(128);
int8x8_t v_s8 = vqmovn_s16(v_s16);
print_vector(v_s16);
/* 128 128 128 128 128 128 128 128 */
print_vector(v_s8);
/* 127 127 127 127 127 127 127 127 */
```





### vqmovun_type

#### 功能

将一个128位向量中的每个元素位宽缩小一倍，进行饱和操作，有符号转无符号操作，复制到另一个64位向量中。



#### 例子

```c++
int16x8_t v_s16 = vmovq_n_s16(-1);
uint8x8_t v_u8 = vqmovun_s16(v_s16);
print_vector(v_s16);
/* -1 -1 -1 -1 -1 -1 -1 -1 */
print_vector(v_u8);
/* 0 0 0 0 0 0 0 0 */
```





## 加载

### vld1q_type

#### 功能

按顺序将内存的数据存入128位的type类型向量中。




#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x16_t v_s8 = vld1q_s8(ptr);
print_vector(v_s8);
/* 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 */
```





### vld1q_lane_type

#### 功能

将128位源向量复制到128位目的向量，目的向量指定索引的元素更改为内存中第一个数据。



#### 例子

```c++
int8x16_t v1_s8 = vdupq_n_s8(0);
int8_t ptr[16] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
int8x16_t v2_s8 = vld1q_lane_s8(ptr, v1_s8, 3);
print_vector(v1_s8);
/* 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 */
print_vector(v2_s8);
/* 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0 0 */
```



### vld1q_dup_type

#### 功能

将type类型内存的第一个数据复制到128位标量或向量中的每个元素。



#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x16_t v_s8 = vld1q_dup_s8(ptr);
print_vector(v_s8);
/* 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 */
```



### vld2_type

#### 功能

按交叉顺序将内存的数据装入两个向量（内存第一个数据放到第一个向量的第一个通道，内存的第二个数据放到第二个向量的第一个通道，内存第三个数据放到第一个向量的第二个通道，内存的第四个数据放到第二个向量的第二个通道，依此类推），并返回两个向量的结构体。



#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x8x2_t v_s8 = vld2_s8(ptr);
print_vector(v_s8);
/* 0 2 4 6 8 10 12 14
   1 3 5 7 9 11 13 15 */
```



### vld2_lane_type

#### 功能

将两个向量的源结构体复制到目的向量结构体，将目的结构体中两个向量指定索引的元素更改为内存中前两个数据。



#### 例子

```c++
int8x8x2_t v1_s8;
v1_s8.val[0] = vdup_n_s8(0);
v1_s8.val[1] = vdup_n_s8(0);
int8_t ptr[16] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
int8x8x2_t v2_s8 = vld2_lane_s8(ptr, v1_s8, 3);
print_vector(v1_s8);
/* 0 0 0 0 0 0 0 0
   0 0 0 0 0 0 0 0 */
print_vector(v2_s8);
/* 0 0 0 2 0 0 0 0
   0 0 0 3 0 0 0 0 */
```



### vld2_dup_type

#### 功能

将type类型内存中的前两个数据分别复制到结构体两个标量或向量的每个元素。



#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x8x2_t v_s8 = vld2_dup_s8(ptr);
print_vector(v_s8);
/* 0 0 0 0 0 0 0 0
   1 1 1 1 1 1 1 1 */
```





## 存储

### vst1_type

#### 功能

将元素类型为type格式，向量的所有元素装到内存里。



#### 例子

```c++
int32_t ptr[2] = {0};
int32x2_t v_s32 = vcreate_s32(0x0000000800000004);
vst1_s32(ptr, v_s32);
for (int i = 0; i < 2; i++) {
    std::cout << ptr[i] << " ";
}
std::cout << std::endl;
/* 4 8 */
```



### vst1_lane_type

#### 功能

将元素类型为type格式的向量指定索引的元素装入内存。





#### 例子

```c++
int32_t ptr[2] = {0};
int32x2_t v_s32 = vcreate_s32(0x0000000800000004);
vst1_lane_s32(ptr, v_s32, 1);
for (int i = 0; i < 2; i++) {
    std::cout << ptr[i] << " ";
}
std::cout << std::endl;
/* 8 0 */
```



### vst2q_type

#### 功能

将元素类型为type格式，结构体向量的所有元素交叉装入内存。

vld2q_type的逆操作。



#### 例子

```c++
int32_t ptr[8] = {0};
int32x4x2_t v_s32;
v_s32.val[0] = vdupq_n_s32(0);
v_s32.val[1] = vdupq_n_s32(1);
vst2q_s32(ptr, v_s32);
for (int i = 0; i < 8; i++) {
    std::cout << ptr[i] << " ";
}
std::cout << std::endl;
/* 0 1 0 1 0 1 0 1 */
```



### vst2q_lane_type

#### 功能

将元素类型为type格式结构体，向量中指定索引的两个元素装入内存。



#### 例子

```c++
int32_t ptr[8] = {0};
int32x4x2_t v_s32;
v_s32.val[0] = vdupq_n_s32(1);
v_s32.val[1] = vdupq_n_s32(2);
vst2q_lane_s32(ptr, v_s32, 1);
for (int i = 0; i < 8; i++) {
    std::cout << ptr[i] << " ";
}
std::cout << std::endl;
/* 1 2 0 0 0 0 0 0 */
```





## 获取

### vget_low_type

#### 功能

获取128位向量的低半部分元素，输出元素类型相同的64位向量。



#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x16_t v1_s8 = vld1q_s8(ptr);
int8x8_t v2_s8 = vget_low_s8(v1_s8);
print_vector(v2_s8);
/* 0 1 2 3 4 5 6 7 */
```



### vget_high_type

#### 功能

获取128位向量的高半部分元素，输出元素类型相同的64位向量。



#### 例子

```c++
int8_t ptr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int8x16_t v1_s8 = vld1q_s8(ptr);
int8x8_t v2_s8 = vget_high_s8(v1_s8);
print_vector(v2_s8);
/* 8 9 10 11 12 13 14 15 */
```



### vget_lane_type

#### 功能

获取元素类型为type类型的向量中指定索引的元素数据。



#### 例子

```c++
int8x8_t v_s8 = vcreate_s8(0x0102030405060708);
int8_t data = vget_lane_s8(v_s8, 1);
std::cout << static_cast<int64_t>(data) << std::endl;
/* 7 */
```





## 设置

### vset_lane_type

#### 功能

将向量中指定索引的元素数据修改为新数据，向量其余数据不变。



#### 例子

```c++
float32_t ptr[2] = {2.5, -2.5};
float32x2_t v1_f32 = vld1_f32(ptr);
print_vector(v1_f32);
/* 2.5 -2.5 */
float32x2_t v2_f32 = vset_lane_f32(2.5, v1_f32, 1);
print_vector(v2_f32);
/* 2.5 2.5 */
```





## 加

### vadd_type

#### 功能

将两个向量的各个元素相加，会溢出。
$$
r_i = a_i + b_i
$$


#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(1);
int8x8_t v2_s8 = vdup_n_s8(-1);
int8x8_t v3_s8 = vadd_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 0 0 0 0 0 0 0 0 */
```





### vaddl_type

#### 功能

两个向量的各个元素长指令相加，不会溢出。
$$
r_i = a_i + b_i
$$




#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(127);
int8x8_t v2_s8 = vdup_n_s8(127);
int16x8_t v3_s16 = vaddl_s8(v1_s8, v2_s8);
print_vector(v3_s16);
/* 254 254 254 254 254 254 254 254 */
```





### vaddw_type

#### 功能

两个向量的各个元素相加，会溢出。
$$
r_i = a_i + b_i
$$




#### 例子

```c++
int16x8_t v1_s16 = vdupq_n_s16(127);
int8x8_t v2_s8 = vdup_n_s8(127);
int16x8_t v3_s16 = vaddw_s8(v1_s16, v2_s8);
print_vector(v3_s16);
/* 254 254 254 254 254 254 254 254 */
```





### vaddhn_type

#### 功能

两个向量的各个元素相加，返回求和后元素的高位。
$$
r_i = (a_i + b_i) >> (typelength / 2)
$$




#### 例子

```c++
int16x8_t v1_s16 = vdupq_n_s16(0);
int16x8_t v2_s16 = vdupq_n_s16(32767);
int8x8_t v3_s8 = vaddhn_s16(v1_s16, v2_s16);
print_vector(v3_s8);
/* 127 127 127 127 127 127 127 127 */
```





### vqadd_type

#### 功能

两个向量的各个元素相加，进行饱和操作。
$$
r_i = sat(a_i + b_i)
$$




#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(127);
int8x8_t v2_s8 = vdup_n_s8(1);
int8x8_t v3_s8 = vqadd_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 127 127 127 127 127 127 127 127 */
```





### vhadd_type

#### 功能

两个向量的各个元素相加，求和后元素右移一位。
$$
r_i = (a_i + b_i) >> 1
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(126);
int8x8_t v2_s8 = vdup_n_s8(127);
int8x8_t v3_s8 = vhadd_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 126 126 126 126 126 126 126 126 */
```





### vrhadd_type

#### 功能

两个向量的各个元素相加，再加一，求和后元素右移一位。

$$
r_i = (a_i + b_i + 1) >> 1
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(126);
int8x8_t v2_s8 = vdup_n_s8(127);
int8x8_t v3_s8 = vrhadd_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 127 127 127 127 127 127 127 127 */
```





### vpadd_type

#### 功能

向量相邻两个元素相加，第一个向量求和结果存到目标向量的低位，第二个向量求和的结果存在目标向量的高位。

$$
r_0 = a_0 + a_1 \\
... \\
r_3 = a_6 + a_7 \\
r_4 = b_0 + b_1 \\
... \\
r_7 = b_6 + b_7 \\
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(1);
int8x8_t v2_s8 = vdup_n_s8(-1);
int16x4_t v3_s16 = vpadd_s8(v1_s8, v2_s8);
print_vector(v3_s16);
/* 514 514 -258 -258 */
```





### vpaddl_type

#### 功能

向量相邻两个元素相加。

$$
r_0 = a_0 + a_1 \\
... \\
r_3 = a_6 + a_7 \\
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(64);
int16x4_t v2_s16 = vpaddl_s8(v1_s8);
print_vector(v2_s16);
/* 128 128 128 128 */
```





### vpadal_type

#### 功能

一个向量相邻两个元素相加后，与另外一个向量各个元素相加。
$$
r_0 = a_0 + (b_0 + b_1) \\
... \\
r_3 = a_3 + (b_6 + b_7) \\
$$



#### 例子

```c++
int16x4_t v1_s4 = vdup_n_s8(64);
int8x8_t v2_s8 = vdup_n_s8(64);
int16x4_t v3_s4 = vpadal_s8(v1_s4, v2_s8);
print_vector(v3_s4);
/* 16576 16576 16576 16576 */
```





### vaddv_type

#### 功能

向量所有元素相加。
$$
r = a_0 + a_1 + ... + a_6 + a_7
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(127);
int16_t ret = vaddlv_s8(v1_s8);
std::cout << ret << std::endl;
/* 1016 */
```





## 减

### vsub_type

#### 功能

两个向量的各个元素相减，会溢出。

$$
r_i = a_i - b_i
$$




#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(1);
int8x8_t v2_s8 = vdup_n_s8(2);
int8x8_t v3_s8 = vsub_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 */
```



### vsubl_type

#### 功能

两个向量的各个元素相减，不会溢出。

$$
r_i = a_i - b_i
$$


#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-2);
int8x8_t v2_s8 = vdup_n_s8(127);
int16x8_t v3_s16 = vsubl_s8(v1_s8, v2_s8);
print_vector(v3_s16);
/* -129 -129 -129 -129 -129 -129 -129 -129 */
```



### vsubw_type

#### 功能

两个向量的各个元素相减，会溢出。

$$
r_i = a_i - b_i
$$




#### 例子

```c++
int16x8_t v1_s16 = vdupq_n_s16(-2);
int8x8_t v2_s8 = vdup_n_s8(127);
int16x8_t v3_s16 = vsubw_s8(v1_s16, v2_s8);
print_vector(v3_s16);
/* -129 -129 -129 -129 -129 -129 -129 -129 */
```



### vsubhn_type

#### 功能

两个向量的各个元素相减，返回差的高位。

$$
r_i = (a_i - b_i) >> (typelength / 2)
$$



#### 例子

```c++
int16x8_t v1_s16 = vdupq_n_s16(0);
int16x8_t v2_s16 = vdupq_n_s16(32767);
int8x8_t v3_s8 = vsubhn_s16(v1_s16, v2_s16);
print_vector(v3_s8);
/* -128 -128 -128 -128 -128 -128 -128 -128 */
```



### vqsub_type

#### 功能

两个向量的各个元素相减，进行饱和操作。

$$
r_i = sat(a_i - b_i)
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-2);
int8x8_t v2_s8 = vdup_n_s8(127);
int8x8_t v3_s8 = vqsub_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* -128 -128 -128 -128 -128 -128 -128 -128 */
```



### vhsub_type

#### 功能

两个向量的各个元素相减，差右移一位。

$$
r_i = (a_i - b_i) >> 1
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-2);
int8x8_t v2_s8 = vdup_n_s8(127);
int8x8_t v3_s8 = vhsub_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* -65 -65 -65 -65 -65 -65 -65 -65 */
```





## 乘

### vmul_type

#### 功能

将两个向量的各个元素相乘，会溢出。
$$
r_i = a_i * b_i
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vmul_s16(v1_s16, v2_s16);
print_vector(v3_s16);
/* 0 2 6 12 */
```



### vmul_n_type

#### 功能

向量的各个元素与数据相乘，会溢出。
$$
r_i = a_i * b
$$




#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
const int16_t n = 2;
int16x4_t v2_s16 = vmul_n_s16(v1_s16, n);
print_vector(v2_s16);
/* 0 2 4 6 */
```



### vmul_lane_type

#### 功能

向量的各个元素与另一个向量指定索引的元素相乘，会溢出。
$$
r_i = a_i * b_{lane}
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int16x4_t v3_s16 = vmul_lane_s16(v1_s16, v2_s16, n);
print_vector(v3_s16);
/* 0 3 6 9 */
```



### vmull_type

#### 功能

将两个向量的各个元素长指令相乘，不会溢出。
$$
r_i = a_i * b_i
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int32x4_t v3_s32 = vmull_s16(v1_s16, v2_s16);
print_vector(v3_s32);
/* 0 2 6 12 */
```



### vmull_n_type

#### 功能

向量的各个元素与数据长指令相乘，不会溢出。
$$
r_i = a_i * b
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
const int16_t n = 2;
int32x4_t v2_s32 = vmull_n_s16(v1_s16, n);
print_vector(v2_s32);
/* 0 2 4 6 */
```



### vmull_lane_type

#### 功能

向量的各个元素与另一个向量指定索引的元素长指令相乘，不会溢出。
$$
r_i = a_i * b_{lane}
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int32_t n = 2;
int32x4_t v3_s32 = vmull_lane_s16(v1_s16, v2_s16, n);
print_vector(v3_s32);
/* 0 3 6 9 */
```



### vqdmull_type

#### 功能

将两个向量的各个元素长指令相乘，再乘2，进行饱和操作，不会溢出。
$$
r_i = sat(a_i * b_i * 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int32x4_t v3_s32 = vqdmull_s16(v1_s16, v2_s16);
print_vector(v3_s32);
/* 0 4 12 24 */
```



### vqdmull_n_type

#### 功能

向量的各个元素与数据长指令相乘，再乘2，进行饱和操作，不会溢出。
$$
r_i = sat(a_i * b * 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
const int16_t n = 2;
int32x4_t v2_s32 = vqdmull_n_s16(v1_s16, n);
print_vector(v2_s32);
/* 0 4 8 12 */
```



### vqdmull_lane_type

#### 功能

向量的各个元素与另一个向量指定索引的元素长指令相乘，再乘2，进行饱和操作，不会溢出。
$$
r_i = sat(a_i * b_{lane} * 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int32_t n = 2;
int32x4_t v3_s32 = vqdmull_lane_s16(v1_s16, v2_s16, n);
print_vector(v3_s32);
/* 0 6 12 18 */
```



### vqdmulh_type

#### 功能

将两个向量的各个元素长指令相乘，再乘2，进行饱和操作，返回高位。
$$
r_i = sat(a_i * b_i * 2) >> (typelength / 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
int16x4_t v2_s16 = vcreate_s16(0x0400030002000100);
int16x4_t v3_s16 = vqdmulh_s16(v1_s16, v2_s16);
print_vector(v3_s16);
/* 0 4 12 24 */
```



### vqdmulh_n_type

#### 功能

向量的各个元素与数据长指令相乘，再乘2，进行饱和操作，返回高位。
$$
r_i = sat(a_i * b * 2) >> (typelength / 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
const int16_t n = 512;
int16x4_t v3_s16 = vqdmulh_n_s16(v1_s16, n);
print_vector(v3_s16);
/*  */
```



### vqdmulh_lane_type

#### 功能

向量的各个元素与另一个向量指定索引的元素长指令相乘，再乘2，进行饱和操作，返回高位。
$$
r_i = sat(a_i * b_{lane} * 2) >> (typelength / 2)
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0300020001000000);
int16x4_t v2_s16 = vcreate_s16(0x0300020001000000);
const int32_t n = 2;
int16x4_t v3_s16 = vqdmulh_lane_s16(v1_s16, v2_s16, n);
print_vector(v3_s16);
/*  */
```





## 乘加

### vmla_type

#### 功能

向量b与向量c的各个元素相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * c_i
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v4_s16 = vmla_s16(v1_s16, v2_s16, v3_s16);
print_vector(v4_s16);
/* 0 3 8 15 */
```



### vmla_n_type

#### 功能

向量b的各个元素与c相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * c
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int16x4_t v4_s16 = vmla_n_s16(v1_s16, v2_s16, n);
print_vector(v4_s16);
/* 2 5 8 11 */
```



### vmla_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * v_{lane}
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int16x4_t v4_s16 = vmla_lane_s16(v1_s16, v2_s16, v3_s16, n);
print_vector(v4_s16);
/* 2 5 8 11 */
```



### vmlal_type

#### 功能

向量b与向量c的各个元素长指令相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * c_i
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int32x4_t v4_s32 = vmlal_s16(v1_s32, v2_s16, v3_s16);
print_vector(v4_s32);
/* 0 4 8 12 */
```



### vmlal_n_type

#### 功能

向量b的各个元素与c长指令相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * c
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int32x4_t v4_s32 = vmlal_n_s16(v1_s32, v2_s16, n);
print_vector(v4_s32);
/* 0 4 8 12 */
```



### vmlal_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素长指令相乘，向量a的各个元素与其积相加。
$$
r_i = a_i + b_i * v_{lane}
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int32x4_t v4_s32 = vmlal_lane_s16(v1_s32, v2_s16, v3_s16, n);
print_vector(v4_s32);
/*  */
```



### vfma_f32

#### 功能

向量b与向量c的各个元素相乘，向量a的各个元素与其积相加。

$$
r_i = a_i + b_i * c_i
$$



#### 例子

```c++
float32x2_t v1_f32 = vdup_n_f32(0.1f);
float32x2_t v2_f32 = vdup_n_f32(0.2f);
float32x2_t v3_f32 = vdup_n_f32(0.3f);
float32x2_t v4_f32 = vfma_f32(v1_f32, v2_f32, v3_f32);
print_vector(v4_f32);
/* 0.16 0.16 */
```



### vqdmlal_type

#### 功能

向量b与向量c的各个元素相乘，再乘2，向量a的各个元素与其积相加，进行饱和操作。
$$
r_i = sat(a_i + b_i * c_i * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int32x4_t v4_s32 = vqdmlal_s16(v1_s32, v2_s16, v3_s16);
print_vector(v4_s32);
/* 0 5 14 27 */
```



### vqdmlal_n_type

#### 功能

向量b的各个元素与c相乘，再乘2，向量a的各个元素与其积相加，进行饱和操作。
$$
r_i = sat(a_i + b_i * c * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int32x4_t v4_s32 = vqdmlal_n_s16(v1_s32, v2_s16, n);
print_vector(v4_s32);
/* 4 9 14 19 */
```



### vqdmlal_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素相乘，再乘2，向量a的各个元素与其积相加，进行饱和操作。
$$
r_i = sat(a_i + b_i * v_{lane} * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int32x4_t v4_s32 = vqdmlal_lane_s16(v1_s32, v2_s16, v3_s16, n);
print_vector(v4_s32);
/* 4 9 14 19 */
```





## 乘减

### vmls_type

#### 功能

向量b与向量c的各个元素相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * c_i
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v4_s16 = vmls_s16(v1_s16, v2_s16, v3_s16);
print_vector(v4_s16);
/* 0 -1 -4 -9 */
```



### vmls_n_type

#### 功能

向量b的各个元素与c相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * c
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int16x4_t v4_s16 = vmls_n_s16(v1_s16, v2_s16, n);
print_vector(v4_s16);
/* -2 -3 -4 -5 */
```



### vmls_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * v_{lane}
$$



#### 例子

```c++
int16x4_t v1_s16 = vcreate_s16(0x0003000200010000);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int16x4_t v4_s16 = vmls_lane_s16(v1_s16, v2_s16, v3_s16, n);
print_vector(v4_s16);
/* -2 -3 -4 -5 */
```



### vmlsl_type

#### 功能

向量b与向量c的各个元素长指令相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * c_i
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int32x4_t v4_s32 = vmlsl_s16(v1_s32, v2_s16, v3_s16);
print_vector(v4_s32);
/* 0 -1 -4 -9 */
```



### vmlsl_n_type

#### 功能

向量b的各个元素与c长指令相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * c
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int32x4_t v4_s32 = vmlsl_n_s16(v1_s32, v2_s16, n);
print_vector(v4_s32);
/* -2 -3 -4 -5 */
```



### vmlsl_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素长指令相乘，向量a的各个元素与其积相减。
$$
r_i = a_i - b_i * v_{lane}
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int32x4_t v4_s32 = vmlsl_lane_s16(v1_s32, v2_s16, v3_s16, n);
print_vector(v4_s32);
/* -2 -3 -4 -5 */
```



### vfms_f32

#### 功能

向量b与向量c的各个元素相乘，向量a的各个元素与其积相减。

$$
r_i = a_i - b_i * c_i
$$



#### 例子

```c++
float32x2_t v1_f32 = vdup_n_f32(0.1f);
float32x2_t v2_f32 = vdup_n_f32(0.2f);
float32x2_t v3_f32 = vdup_n_f32(0.3f);
float32x2_t v4_f32 = vfms_f32(v1_f32, v2_f32, v3_f32);
print_vector(v4_f32);
/* 0.04 0.04 */
```



### vqdmlsl_type

#### 功能

向量b与向量c的各个元素相乘，再乘2，向量a的各个元素与其积相减，进行饱和操作。
$$
r_i = sat(a_i - b_i * c_i * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
int32x4_t v4_s32 = vqdmlsl_s16(v1_s32, v2_s16, v3_s16);
print_vector(v4_s32);
/* 0 -3 -10 -21 */
```



### vqdmlsl_n_type

#### 功能

向量b的各个元素与c相乘，再乘2，向量a的各个元素与其积相减，进行饱和操作。
$$
r_i = sat(a_i - b_i * c * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
const int16_t n = 2;
int32x4_t v4_s32 = vqdmlsl_n_s16(v1_s32, v2_s16, n);
print_vector(v4_s32);
/* -4 -7 -10 -13 */
```



### vqdmlsl_lane_type

#### 功能

向量b的各个元素与向量v指定索引的元素相乘，再乘2，向量a的各个元素与其积相减，进行饱和操作。
$$
r_i = sat(a_i - b_i * v_{lane} * 2)
$$



#### 例子

```c++
int32_t ptr[4] = {0, 1, 2, 3};
int32x4_t v1_s32 = vld1q_s32(ptr);
int16x4_t v2_s16 = vcreate_s16(0x0004000300020001);
int16x4_t v3_s16 = vcreate_s16(0x0003000200010000);
const int32_t n = 2;
int32x4_t v4_s32 = vqdmlsl_lane_s16(v1_s32, v2_s16, v3_s16, n);
print_vector(v4_s32);
/* -4 -7 -10 -13 */
```





## 倒数

### vrecpe_f32

#### 功能

向量的各个元素取倒数，精度只能保证千分之一。
$$
r_i = \frac{1}{a_i}
$$



#### 例子

```c++
float32x2_t v1_f32 = vdup_n_f32(1.0f);
float32x2_t v2_f32 = vrecpe_f32(v1_f32);
print_vector(v2_f32);
/* 0.998047 0.998047 */
```



### vrecps_f32

#### 功能

向量a和向量b的各个元素相乘，2与其积相减。
$$
r_i = 2.0 - (a_i * b_i)
$$



#### 例子

```c++
float32x2_t v1_f32 = vdup_n_f32(1.0f);
float32x2_t v2_f32 = vdup_n_f32(2.5f);
float32x2_t v3_f32 = vrecps_f32(v1_f32, v2_f32);
print_vector(v3_f32);
/* -0.5 -0.5 */
float32x2_t v4_f32 = vrecpe_f32(v1_f32);
print_vector(v4_f32);
/* 0.998047 0.998047 */
v4_f32 = vmul_f32(vrecps_f32(v1_f32, v4_f32), v4_f32);
print_vector(v4_f32);
/* 0.999996 0.999996 */
v4_f32 = vmul_f32(vrecps_f32(v1_f32, v4_f32), v4_f32);
print_vector(v4_f32);
/* 1 1 */
```



### vrsqrte_f32

#### 功能

向量a的各个元素，如果元素大于0，返回开方后的倒数；如果元素为0，返回inf；如果元素小于0，返回nan。
$$
r_i =
\begin{cases} 
\frac{!}{\sqrt{a_i}},  & a_i > 0 \\
inf,  & a_i = 0 \\
nan,  & a_i < 0 \\
\end{cases}
$$



#### 例子

```c++
float32_t ptr[2] = {9, 0};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrsqrte_f32(v1_f32);
print_vector(v2_f32);
/* 0.333008 inf */
```



### vrsqrts_f32

#### 功能

向量a的各个元素与向量b的各个元素相乘，3与其积相减后除以2。

$$
r_i = \frac{3 - (a_i * b_i)}{2}
$$



#### 例子

```c++
float32_t ptr1[2] = {4, -4};
float32x2_t v1_f32 = vld1_f32(ptr1);
float32_t ptr2[2] = {1, 25};
float32x2_t v2_f32 = vld1_f32(ptr2);
float32x2_t v3_f32 = vrsqrts_f32(v1_f32, v2_f32);
print_vector(v3_f32);
/* -0.5 51.5 */
```





## 取反

### vneg_type

#### 功能

向量的各个元素取反。
$$
r_i = -a_i
$$



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vneg_s8(v1_s8);
print_vector(v2_s8);
/* -1 -2 -3 -4 -5 -6 -7 -8 */
```



### vqneg_type

#### 功能

向量的各个元素取反，进行饱和操作。
$$
r_i = sat(-a_i)
$$



#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-128);
int8x8_t v2_s8 = vqneg_s8(v1_s8);
print_vector(v2_s8);
/* 127 127 127 127 127 127 127 127 */
```





## 绝对值

### vabs_type

#### 功能

向量的各个元素取绝对值。
$$
r_i = \mid a_i \mid
$$



#### 例子

```c++
int8x8_t v_s8 = vdup_n_s8(-1);
print_vector(v_s8);
/* -1 -1 -1 -1 -1 -1 -1 -1 */
v_s8 = vabs_s8(v_s8);
print_vector(v_s8);
/* 1 1 1 1 1 1 1 1 */
```





### vqabs_type

#### 功能

向量的各个元素取绝对值，进行饱和操作。
$$
r_i = sat(\mid a_i \mid)
$$




#### 例子

```c++
int8x8_t v_s8 = vdup_n_s8(-128);
print_vector(v_s8);
/* -128 -128 -128 -128 -128 -128 -128 -128 */
v_s8 = vqabs_s8(v_s8);
print_vector(v_s8);
/* 127 127 127 127 127 127 127 127 */
```





### vabd_type

#### 功能

向量a与向量b的各个元素相减取绝对值。
$$
r_i = \mid a_i - b_i \mid
$$




#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-1);
int8x8_t v2_s8 = vdup_n_s8(1);
int8x8_t v3_s8 = vabd_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 2 2 2 2 2 2 2 2 */
```





### vaba_type

#### 功能

向量b与向量c的各个元素相减取绝对值，再与向量b相加。
$$
r_i = a_i + \mid b_i - c_i \mid
$$




#### 例子

```c++
int8x8_t v1_s8 = vdup_n_s8(-1);
int8x8_t v2_s8 = vdup_n_s8(2);
int8x8_t v3_s8 = vdup_n_s8(3);
int8x8_t v4_s8 = vaba_s8(v1_s8, v2_s8, v3_s8);
print_vector(v4_s8);
/* 0 0 0 0 0 0 0 0 */
```





## 取整

### vrndn_f32

#### 功能

向量的各个元素向最近的偶数取整。




#### 例子

```c++
float32_t ptr[2] = {2.5, -1.5};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrndn_f32(v1_f32);
print_vector(v2_f32);
/* 2 -2 */
```



### vrnda_f32

#### 功能

向量的各个元素向最接近的值（四舍五入）取整。



#### 例子

```c++
float32_t ptr[2] = {2.5, -1.5};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrnda_f32(v1_f32);
print_vector(v2_f32);
/* 3 -2 */
```



### vrndp_f32

#### 功能

向量的各个元素向正无穷取整。



#### 例子

```c++
float32_t ptr[2] = {2.5, -1.5};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrndp_f32(v1_f32);
print_vector(v2_f32);
/* 3 -1 */
```



### vrndm_f32

#### 功能

向量的各个元素向负无穷取整。



#### 例子

```c++
float32_t ptr[2] = {2.5, -1.5};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrndm_f32(v1_f32);
print_vector(v2_f32);
/* 2 -2 */
```





### vrnd_f32

#### 功能

向量的各个元素向0取整。



#### 例子

```c++
float32_t ptr[2] = {2.5, -1.5};
float32x2_t v1_f32 = vld1_f32(ptr);
float32x2_t v2_f32 = vrnd_f32(v1_f32);
print_vector(v2_f32);
/* 2 -1 */
```





## 最大值最小值

### vmax_type

#### 功能

向量a与向量b的各个元素比较，返回更大的元素。
$$
r_i =
\begin{cases} 
a_i,  & a_i \geq b_i \\
b_i,  & a_i < b_i \\
\end{cases}
$$



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
int8x8_t v3_s8 = vmax_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 8 9 10 11 12 13 14 15 */
```



### vpmax_type

#### 功能

向量a相邻元素比较，返回更大的元素到向量r低位；向量b相邻元素比较，返回更大的元素到向量r高位。

$$
r_0 =
\begin{cases} 
a_0,  & a_0 \geq a_1 \\
a_1,  & a_0 < a_1 \\
\end{cases} \\
... \\
r_3 =
\begin{cases} 
a_6,  & a_6 \geq a_7 \\
a_7,  & a_6 < a_7 \\
\end{cases} \\
r_4 =
\begin{cases} 
b_0,  & b_0 \geq b_1 \\
b_1,  & b_0 < b_1 \\
\end{cases} \\
... \\
r_7 =
\begin{cases} 
b_6,  & b_6 \geq b_7 \\
b_7,  & b_6 < b_7 \\
\end{cases} \\
$$



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
int8x8_t v3_s8 = vpmax_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 2 4 13 15 9 11 6 8 */
```



### vmin_type

#### 功能

向量a与向量b的各个元素比较，返回更小的元素。
$$
r_i =
\begin{cases} 
a_i,  & a_i \leq b_i \\
b_i,  & a_i > b_i \\
\end{cases}
$$



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
int8x8_t v3_s8 = vmin_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 1 2 3 4 5 6 7 8 */
```



### vpmin_type

#### 功能

向量a相邻元素比较，返回更小的元素到向量r低位；向量b相邻元素比较，返回更小的元素到向量r高位。

$$
r_0 =
\begin{cases} 
a_0,  & a_0 \leq a_1 \\
a_1,  & a_0 > a_1 \\
\end{cases} \\
... \\
r_3 =
\begin{cases} 
a_6,  & a_6 \leq a_7 \\
a_7,  & a_6 > a_7 \\
\end{cases} \\
r_4 =
\begin{cases} 
b_0,  & b_0 \leq b_1 \\
b_1,  & b_0 > b_1 \\
\end{cases} \\
... \\
r_7 =
\begin{cases} 
b_6,  & b_6 \leq b_7 \\
b_7,  & b_6 > b_7 \\
\end{cases} \\
$$



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0f0e0d0c04030201);
int8x8_t v2_s8 = vcreate_s8(0x080706050b0a0908);
int8x8_t v3_s8 = vpmin_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 1 3 12 14 8 10 5 7 */
```





## 移位

### vshl_type

#### 功能

向量a各个元素左移向量b各个元素位。
$$
r_i = a_i << b_i
$$



#### 例子

```c++
int32_t v1[2] = {8, -8};
int32x2_t v1_s32 = vld1_s32(v1);
int32x2_t v2_s32 = vdup_n_s32(1);
int32x2_t v3_s32 = vshl_s32(v1_s32, v2_s32);
print_vector(v3_s32);
/* 16 -16 */
```



### vshl_n_type

#### 功能

向量a各个元素左移n位。

$$
r_i = a_i << n
$$



#### 例子

```c++
int32_t v1[2] = {8, -8};
int32x2_t v1_s32 = vld1_s32(v1);
const int n = 1;
int32x2_t v2_s32 = vshl_n_s32(v1_s32, n);
print_vector(v2_s32);
/* 16 -16 */
```



### vqshl_type

#### 功能

向量a各个元素左移向量b各个元素位，进行饱和操作。
$$
r_i = sat(a_i << b_i)
$$



#### 例子

```c++
int32_t v1[2] = {2147483647, -2147483648};
int32x2_t v1_s32 = vld1_s32(v1);
int32x2_t v2_s32 = vdup_n_s32(1);
int32x2_t v3_s32 = vqshl_s32(v1_s32, v2_s32);
print_vector(v3_s32);
/* 2147483647 -2147483648 */
```



### vqshl_n_type

#### 功能

向量a各个元素左移n位，进行饱和操作。

$$
r_i = sat(a_i << n)
$$



#### 例子

```c++
int32_t v1[2] = {2147483647, -2147483648};
int32x2_t v1_s32 = vld1_s32(v1);
const int n = 1;
int32x2_t v2_s32 = vqshl_n_s32(v1_s32, n);
print_vector(v2_s32);
/* 2147483647 -2147483648 */
```



### vqshlu_n_type

#### 功能

向量a各个元素左移向量b各个元素位，转换为无符号，进行饱和操作。

$$
r_i = sat(a_i << b_i)
$$



#### 例子

```c++
int32_t v1[2] = {2147483647, -2147483648};
int32x2_t v1_s32 = vld1_s32(v1);
const int n = 1;
uint32x2_t v2_u32 = vqshlu_n_s32(v1_s32, n);
print_vector(v2_u32);
/* 4294967294 0 */
```



### vshll_n_type

#### 功能

向量a各个元素长指令左移n位。
$$
r_i = a_i << n
$$



#### 例子

```c++
int32_t v1[2] = {2147483647, -2147483648};
int32x2_t v1_s32 = vld1_s32(v1);
const int n = 1;
int64x2_t v2_s64 = vshll_n_s32(v1_s32, n);
print_vector(v2_s64);
/* 4294967294 -4294967296 */
```



### vsra_n_type

#### 功能

向量a右移n位与向量b右移n位相加。
$$
r_i = (a_i >> n) + (b_i >> n)
$$



#### 例子

```c++
int32_t v1[2] = {8, -8};
int32x2_t v1_s32 = vld1_s32(v1);
int32x2_t v2_s32 = vdup_n_s32(2);
const int n = 1;
int32x2_t v3_s32 = vsra_n_s32(v1_s32, v2_s32, n);
print_vector(v3_s32);
/* 9 -7 */
```





## 比较

### vceq_type

#### 功能

`ri = (ai == bi)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
uint8x8_t v3_u8 = vceq_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 0 255 0 255 255 255 255 255 */
```



### vcge_type

#### 功能

`ri = (ai >= bi)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
uint8x8_t v3_u8 = vcge_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 0 255 255 255 255 255 255 255 */
```



### vcle_type

#### 功能

`ri = (ai <= bi)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
uint8x8_t v3_u8 = vcle_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 255 255 0 255 255 255 255 255 */
```



### vcgt_type

#### 功能

`ri = (ai > bi)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
uint8x8_t v3_u8 = vcgt_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 0 0 255 0 0 0 0 0 */
```



### vclt_type

#### 功能

`ri = (ai < bi)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000100001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000010010);
uint8x8_t v3_u8 = vclt_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 255 0 0 0 0 0 0 0 */
```



### vcage_f32

#### 功能

`ri = |ai| >= |bi|`，如果为真，该type的所有bit位为1。



#### 例子

```c++
float32x2_t v1_f32 = vcreate_f32(0.1);
float32x2_t v2_f32 = vcreate_f32(-0.2);
uint32x2_t v3_u32 = vcage_f32(v1_f32, v2_f32);
print_vector(v3_u32);
/* 4294967295 4294967295 */
```



### vcale_f32

#### 功能

`ri = |ai| <= |bi|`，如果为真，该type的所有bit位为1。



#### 例子

```c++
float32x2_t v1_f32 = vcreate_f32(0.1);
float32x2_t v2_f32 = vcreate_f32(-0.2);
uint32x2_t v3_u32 = vcale_f32(v1_f32, v2_f32);
print_vector(v3_u32);
/* 4294967295 4294967295 */
```



### vcagt_f32

#### 功能

`ri = |ai| > |bi|`，如果为真，该type的所有bit位为1。



#### 例子

```c++
float32x2_t v1_f32 = vcreate_f32(0.1);
float32x2_t v2_f32 = vcreate_f32(-0.2);
uint32x2_t v3_u32 = vcagt_f32(v1_f32, v2_f32);
print_vector(v3_u32);
/* 0 0 */
```



### vcalt_f32

#### 功能

`ri = |ai| < |bi|`，如果为真，该type的所有bit位为1。



#### 例子

```c++
float32x2_t v1_f32 = vcreate_f32(0.1);
float32x2_t v2_f32 = vcreate_f32(-0.2);
uint32x2_t v3_u32 = vcalt_f32(v1_f32, v2_f32);
print_vector(v3_u32);
/* 0 0 */
```



### vtst_type

#### 功能

`ri = (ai & bi != 0)`，如果为真，该type的所有bit位为1。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000000101);
uint8x8_t v2_u8 = vcreate_u8(0x0000000000000110);
uint8x8_t v3_u8 = vtst_u8(v1_u8, v2_u8);
print_vector(v3_u8);
/* 0 255 0 0 0 0 0 0 */
```





## 转换

### vcvt_type1_type2

#### 功能

类型转换，浮点转整型向下取整。



#### 例子

```c++
int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
float32x2_t v1_f32 = vcvt_f32_s32(v1_s32);
print_vector(v1_f32);
/* 0 1 */
float32x2_t v2_f32 = vdup_n_f32(1.2);
int32x2_t v2_s32 = vcvt_s32_f32(v2_f32);
print_vector(v2_s32);
/* 1 1 */
```



### vcvt_n_type1_type2

#### 功能

类型转换，浮点转整型向下取整然后左移n位，整型转浮点右移n位。



#### 例子

```c++
int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
float32x2_t v1_f32 = vcvt_n_f32_s32(v1_s32, 1);
print_vector(v1_f32);
/* 0 0.5 */
float32x2_t v2_f32 = vdup_n_f32(1.2);
int32x2_t v2_s32 = vcvt_n_s32_f32(v2_f32, 1);
print_vector(v2_s32);
/* 2 2 */
```



### vreinterpret_type1_type2

#### 功能

向量的数据重新解析。



#### 例子

```c++
int32x2_t v1_s32 = vcreate_s32(0x0000000100000000);
int16x4_t v1_s16 = vreinterpret_s16_s32(v1_s32);
print_vector(v1_s16);
/* 0 0 1 0 */
```





## 统计

### vcls_type

#### 功能

统计向量中每个元素中从最高有效位之后，bit位与最高有效位相同的连续位数。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcls_s8(v1_s8);
print_vector(v2_s8);
/* 6 5 5 4 4 4 4 3 */
```



### vclz_type

#### 功能

统计向量中每个元素中从最高有效位开始，bit位为0的连续位数。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vclz_s8(v1_s8);
print_vector(v2_s8);
/* 7 6 6 5 5 5 5 4 */
```



### vcnt_type

#### 功能

统计向量中每个元素中bit位为1的连续位数。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcnt_s8(v1_s8);
print_vector(v2_s8);
/* 1 1 2 1 2 2 3 1 */
```





## 操作

### vext_type

#### 功能

实现向量元素位置移动，a的高（L-n）个元素放在向量低字节部分，b的低n个元素放在向量高字节部分。




#### 例子

```c++
int8x8_t a = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8_t b = vcreate_s8(0x0807060504030201);
int8x8_t ret = vext_s8(a, b, 3);
print_vector(ret);
/* 11 12 13 14 15 1 2 3 */
```



### vtbl1_type

#### 功能

idx为索引，根据索引去搜索向量a对应的元素，返回新的向量。如果索引超过范围，返回的元素为0。



#### 例子

```c++
int8x8_t a = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8_t idx = vcreate_s8(0x0807060504030201);
int8x8_t ret = vtbl1_s8(a, idx);
print_vector(ret);
/* 9 10 11 12 13 14 15 0 */
```



### vtbl2_type

#### 功能

idx为索引，根据索引去搜索向量a对应的元素，返回新的向量。如果索引超过范围，返回的元素为0。



#### 例子

```c++
int8x8x2_t a;
a.val[0] = vcreate_s8(0x0f0e0d0c0b0a0908);
a.val[1] = vcreate_s8(0x0807060504030201);
int8x8_t idx = vcreate_s8(0x0807060504030201);
int8x8_t ret = vtbl2_s8(a, b);
print_vector(ret);
/* 9 10 11 12 13 14 15 1 */
```



### vtbx1_type

#### 功能

idx为索引，根据索引去搜索向量b对应的元素，返回新的向量。如果索引超过范围，返回的元素为向量a中的元素。



#### 例子

```c++
int8x8_t a = vdup_n_s8(4);
int8x8_t b = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8_t idx = vcreate_s8(0x0807060504030201);
int8x8_t ret = vtbx1_s8(a, b, idx);
print_vector(ret);
/* 9 10 11 12 13 14 15 4 */
```



### vtbx2_type

#### 功能

idx为索引，根据索引去搜索向量b对应的元素，返回新的向量。如果索引超过范围，返回的元素为向量a中的元素。



#### 例子

```c++
int8x8_t a = vdup_n_s8(4);
int8x8x2_t b;
b.val[0] = vcreate_s8(0x0f0e0d0c0b0a0908);
b.val[1] = vcreate_s8(0x0807060504030201);
int8x8_t idx = vcreate_s8(0x0807060504030201);
int8x8_t ret = vtbx2_s8(a, b, idx);
print_vector(ret);
/* 9 10 11 12 13 14 15 1 */
```



### vrev16_type

#### 功能

将向量每16bit反转。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vrev16_s8(v1_s8);
print_vector(v2_s8);
/* 2 1 4 3 6 5 8 7 */
```



### vrev32_type

#### 功能

将向量每32bit反转。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vrev32_s8(v1_s8);
print_vector(v2_s8);
/* 4 3 2 1 8 7 6 5 */
```



### vrev64_type

#### 功能

将向量每64bit反转。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vrev64_s8(v1_s8);
print_vector(v2_s8);
/* 8 7 6 5 4 3 2 1 */
```



### vtrn_type

#### 功能

将两个向量转置生成一个有两个向量的矩阵。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8x2_t v3_s8 = vtrn_s8(v1_s8, v2_s8);
int8x8_t v4_s8 = vtrn1_s8(v1_s8, v2_s8);
int8x8_t v5_s8 = vtrn2_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 1 8 3 10 5 12 7 14
   2 9 4 11 6 13 8 15 */
print_vector(v4_s8);
/* 1 8 3 10 5 12 7 14 */
print_vector(v5_s8);
/* 2 9 4 11 6 13 8 15 */
```



### vzip_type

#### 功能

将两个向量交叉生成一个有两个向量的矩阵。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8x2_t v3_s8 = vzip_s8(v1_s8, v2_s8);
int8x8_t v4_s8 = vzip1_s8(v1_s8, v2_s8);
int8x8_t v5_s8 = vzip2_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 1 8 2 9 3 10 4 11
   5 12 6 13 7 14 8 15 */
print_vector(v4_s8);
/* 1 8 2 9 3 10 4 11 */
print_vector(v5_s8);
/* 5 12 6 13 7 14 8 15 */
```



### vuzp_type

#### 功能

将两个向量反交叉生成一个有两个向量的矩阵。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8x2_t v3_s8 = vuzp_s8(v1_s8, v2_s8);
int8x8_t v4_s8 = vuzp1_s8(v1_s8, v2_s8);
int8x8_t v5_s8 = vuzp2_s8(v1_s8, v2_s8);
print_vector(v3_s8);
/* 1 3 5 7 8 10 12 14
   2 4 6 8 9 11 13 15 */
print_vector(v4_s8);
/* 1 3 5 7 8 10 12 14 */
print_vector(v5_s8);
/* 2 4 6 8 9 11 13 15 */
```



### vcombine_type

#### 功能

将两个向量链接为一个同类型大小为两倍的向量，新向量的低字节部分为向量a，高字节部分为向量b。



#### 例子

```c++
int8x8_t v1_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v2_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x16_t v3_s16 = vcombine_s8(v1_s8, v2_s8);
print_vector(v3_s16);
/* 1 2 3 4 5 6 7 8 8 9 10 11 12 13 14 15 */
```



### vbsl_type

#### 功能

按bit选择。如果向量a中元素的bit位为1，选择向量b对应的bit；如果向量a中元素的bit位为0，选择向量c对应的bit。



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000000F0F);
int8x8_t v2_s8 = vcreate_s8(0x0807060504030201);
int8x8_t v3_s8 = vcreate_s8(0x0f0e0d0c0b0a0908);
int8x8_t v4_s8 = vbsl_s8(v1_u8, v2_s8, v3_s8);
print_vector(v4_s8);
/* 1 2 10 11 12 13 14 15 */
```





## 位操作

### vmvn_type

#### 功能

`ri = ~ai`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
uint8x8_t v2_u8 = vmvn_s8(v1_u8);
print_vector(v1_u8);
/* 1 2 3 4 5 6 7 8 */
print_vector(v2_u8);
/* 254 253 252 251 250 249 248 247 */
```



### vand_type

#### 功能

`ri = ai & bi`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
uint8x8_t v2_u8 = vcreate_u8(0x0000000004000001);
uint8x8_t v3_u8 = vand_u8(v1_u8, v2_u8);
print_vector(v1_u8);
/* 1 2 3 4 5 6 7 8 */
print_vector(v2_u8);
/* 1 0 0 4 0 0 0 0 */
print_vector(v3_u8);
/* 1 0 0 4 0 0 0 0 */
```



### vorr_type

#### 功能

`ri = ai & bi`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
uint8x8_t v3_u8 = vorr_u8(v1_u8, v2_u8);
print_vector(v1_u8);
/* 1 2 3 4 5 6 7 8 */
print_vector(v2_u8);
/* 1 0 0 1 0 0 0 0 */
print_vector(v3_u8);
/* 1 2 3 5 5 6 7 8 */
```



### veor_type

#### 功能

`ri = ai ^ bi`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
uint8x8_t v3_u8 = veor_u8(v1_u8, v2_u8);
print_vector(v1_u8);
/* 1 2 3 4 5 6 7 8 */
print_vector(v2_u8);
/* 1 0 0 1 0 0 0 0 */
print_vector(v3_u8);
/* 0 2 3 5 5 6 7 8 */
```



### vbic_type

#### 功能

`ri = ai & (~bi)`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0807060504030201);
uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
uint8x8_t v3_u8 = vbic_u8(v1_u8, v2_u8);
print_vector(v1_u8);
/* 1 2 3 4 5 6 7 8 */
print_vector(v2_u8);
/* 1 0 0 1 0 0 0 0 */
print_vector(v3_u8);
/* 0 2 3 4 5 6 7 8 */
```





### vorn_type

#### 功能

`ri = ai | (~bi)`



#### 例子

```c++
uint8x8_t v1_u8 = vcreate_u8(0x0000000000000001);
uint8x8_t v2_u8 = vcreate_u8(0x0000000001000001);
uint8x8_t v3_u8 = vorn_u8(v1_u8, v2_u8);
print_vector(v1_u8);
/* 1 0 0 0 0 0 0 0 */
print_vector(v2_u8);
/* 1 0 0 1 0 0 0 0 */
print_vector(v3_u8);
/* 255 255 255 254 255 255 255 255 */
```











