@class NSString;

@interface AVControlEventTargetAction : NSObject {
    id _target;
    SEL _action;
    NSString *_event;
    unsigned long long _parameterCount;
}

- (void)sendAction:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasMatchingEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 event:(id)a2;

@end
