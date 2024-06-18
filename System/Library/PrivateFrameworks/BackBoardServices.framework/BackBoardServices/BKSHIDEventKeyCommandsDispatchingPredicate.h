@class NSSet, NSString;

@interface BKSHIDEventKeyCommandsDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *senderDescriptors;
@property (readonly, copy, nonatomic) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithSenderDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
