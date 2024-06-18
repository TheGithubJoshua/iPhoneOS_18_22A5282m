@class NSString, _SRSTSharedState;

@interface _SRSTSharedClient : NSObject {
    void /* unknown type, empty encoding */ _currentState;
    void /* unknown type, empty encoding */ _mostRecentEvent;
    void /* unknown type, empty encoding */ stopped;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) _SRSTSharedState *currentState;
@property (nonatomic, readonly) NSString *mostRecentEventName;

- (id)init;
- (void)dispatchEvent:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopClient;

@end
