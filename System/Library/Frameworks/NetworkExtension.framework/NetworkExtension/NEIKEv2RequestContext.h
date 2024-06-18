@class SWPreventSystemSleepAssertion;

@interface NEIKEv2RequestContext : NSObject {
    BOOL _requestInitiator;
    BOOL _preventSleepUntilFinished;
    int _requestType;
    SWPreventSystemSleepAssertion *_powerAssertion;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRequestType:(int)a0;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
