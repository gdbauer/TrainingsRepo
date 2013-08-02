namespace Stack {

   class v_stack {
      char* v;
      int top;
      int max_size;
      
   public:
      class Overflow {
   
      };

      class Underflow {

      };

      class Bad_size {

      };

      v_stack(int s);

      ~v_stack() {
         delete[] v;
      }

      void push(char c) {
          if (top == max_size) throw Overflow();
          else {
             v[top] = c;
             ++top;
          }
       }

       char pop() {
            if (top == 0) throw Underflow();
            else {
               --top;
               return v[top];
            }
       }
   };
}