@class NSObject;

@interface NWURLSessionDelegateDeallocBomb : NSObject {
    BOOL __disarmed;
    NSObject *__object;
    SEL __method;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
