# Smart Pointer
* Smart pointers are wrapper around the raw pointers.
When you create a smart pointer it will *make* it call new and allocate memory for you.

* Depending on what type of smart pointer you use it will be automatically freed.

## Unique Pointer

It is a scoped pointer so when it is out of scope it will call delete.

* You cannot copy a unique ptr
  
  Use make_unique to handle expections if any you would not end up having danglin pointer

        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

* If if copy the unique_ptr other variable it will throw error as the the copy constructor of unique ptr is delete.

If required to share pointer use Shared_ptr


## Shared Pointer

* Shared Pointer works via reference counting i.e it keeps track of how many references you have to the pointer as soon as it is zero it gets deleted.

* So if one reference dies, the counter is down by one once last one dies the memory gets free
* Shared pointer gets rid of new keyword


## Weak pointer

* Weak pointer is a shared pointer but does get its ref count incremented.


## When should you use smart pointers

Normal pointers can cause memory leak when accidently gets delete


Unique pointer first preference.Then if needed to share use shared pointer.