

// що неправильно у наступному програмному коді?


void SomeFunction(Shape); // В функцію SomeFunction потрібно передавати посилання або вказівник на обєкт класу Shape. 


Shape *pRect = new Rectangle; // Не забути прописати в програмі delete, а то може призвести до витоку пам'яті.


SomeFunction(*pRect);




