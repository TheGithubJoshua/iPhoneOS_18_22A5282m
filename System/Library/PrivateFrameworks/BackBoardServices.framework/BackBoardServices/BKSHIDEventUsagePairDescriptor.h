@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForHIDEventType:(unsigned int)a0 page:(unsigned short)a1 usage:(unsigned short)a2;

- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)describes:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPage:(unsigned int)a0 usage:(unsigned int)a1 eventType:(unsigned int)a2;
- (BOOL)_page:(unsigned int)a0 usage:(unsigned int)a1 matchesHIDEvent:(struct __IOHIDEvent { } *)a2;

@end
