@class NSObject;
@protocol OS_xpc_object;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) double initialTouchTimestamp;

+ (BOOL)supportsSecureCoding;

- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (id)assertionEndpoint;
- (void)setAssertionEndpoint:(id)a0;
- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContextId:(unsigned int)a0 initialTouchTimestamp:(double)a1;

@end
