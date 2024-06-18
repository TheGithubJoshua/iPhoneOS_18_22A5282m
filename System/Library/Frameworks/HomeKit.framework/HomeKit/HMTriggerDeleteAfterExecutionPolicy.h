@interface HMTriggerDeleteAfterExecutionPolicy : HMTriggerDeletePolicy

+ (BOOL)supportsSecureCoding;
+ (id)deleteAfterExecutionPolicy;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithPayload:(id)a0 payload:(id)a1;

@end
