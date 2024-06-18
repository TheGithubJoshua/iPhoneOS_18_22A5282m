@class NSArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {
    id _target;
    SEL _selector;
    id _argument;
    _Atomic unsigned long long _pac_signature;
    NSArray *_modes;
    NSCondition *_waiter;
    int _state;
}

- (int)wait;
- (void)signal:(int)a0;
- (void)dealloc;

@end
