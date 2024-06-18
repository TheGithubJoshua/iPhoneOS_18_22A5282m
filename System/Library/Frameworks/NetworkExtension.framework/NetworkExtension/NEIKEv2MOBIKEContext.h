@class NSString, NWEndpoint, NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext {
    BOOL _invalidateTransport;
    unsigned int _maxRetries;
    NSString *_mobikeInterface;
    NWEndpoint *_mobikeEndpoint;
    unsigned long long _retryIntervalInMilliseconds;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

- (void).cxx_destruct;
- (id)description;

@end
