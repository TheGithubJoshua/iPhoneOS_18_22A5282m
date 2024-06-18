@interface HMDTriggerDeletePolicy : HMDTriggerPolicy

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyPolicy:(id)a0;

@end
