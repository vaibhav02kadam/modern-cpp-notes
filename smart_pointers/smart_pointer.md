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