 //08.04.2023. Shanba
//Mavzu: "pointer" -> ko'rsatkich.
//pointer -> oddiy bir o'zgaruvchi.
//pointer -> bu boshqa bir o'zgaruvchini manzilini ya'ni adresini qiymat sifatida saqlovchi o'zgaruvchi.
//pointer -> o'z ichida o'zgaruvchi sifatida boshqa bir o'zgaruvchining faqat 1 ta manzilini saqlaydi.
//pointer -> bitta o'zgaruvchini bir nechta pointer boshqara oladi.

//pointer -> pointerni ekranga chiqarishda "%x" spesifikatoridan foydalaniladi.
//Misol:
//   int a=8;
//   int *ptr = &a;
//   printf("%x", *ptr);

//Misol:
//   int a=900000;
//   int *ada;
//   int ada = & a;
//   int *oyi = & a;

//pointer -> ga o'zgaruvchi berishda har doim "aynan" ya'ni "&" belgisidan foydalaniladi.
//pointer -> da boshqa bir o'zgaruvchini ichiga murojat qilish uchun yulduzchadan ya'ni "*" belgisidan foydalaniladi.
//Misol:
//   int a=8;
//   int *ptr= &a;

//pointerni data type bilan o'zgaruvchinig data type bir xil bo'lishi kerak, aks holda hatolik beradi.
//Misol:
//   float a=8;
//   int *ptr = &a;  -> xatolik beradi.

//E'lon qilish:
//   int a=8;
//   int *ptr = &a;

// "*" -> yulduzchadan foydalanishning 2 ta usuli bor:
//1- e'lon qilish uchun.
//2- qiymatini qiymatiga murojat qilish uchun.
