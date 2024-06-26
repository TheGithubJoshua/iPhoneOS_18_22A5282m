@interface HIDTransaction : NSObject {
    struct __IOHIDTransaction { } *_transaction;
}

@property long long direction;

- (id)initWithDevice:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)commitElements:(id)a0 error:(out id *)a1;
- (BOOL)commitElements:(id)a0 error:(out id *)a1 timeout:(long long)a2 callback:(id /* block */)a3;

@end
