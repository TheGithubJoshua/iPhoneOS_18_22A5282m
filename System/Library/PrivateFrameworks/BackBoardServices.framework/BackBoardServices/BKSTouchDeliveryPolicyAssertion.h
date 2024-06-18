@class NSObject;
@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> *_listener;
}

- (id)init;
- (id)endpoint;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
