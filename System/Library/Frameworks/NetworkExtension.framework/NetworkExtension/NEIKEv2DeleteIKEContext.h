@class NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext {
    BOOL _responseNeeded;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

- (void).cxx_destruct;
- (id)description;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
