@class NSDate;

@interface _UIKeyboardArbiterDebugEntry : NSObject {
    NSDate *_timestamp;
}

@property (readonly) int importance;

- (id)init;
- (void)enumerateContents:(id /* block */)a0;
- (void).cxx_destruct;

@end
