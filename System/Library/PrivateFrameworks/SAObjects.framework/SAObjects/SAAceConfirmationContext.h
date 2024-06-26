@class NSString;

@interface SAAceConfirmationContext : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceConfirmationContextWithDictionary:(id)a0 context:(id)a1;
+ (id)aceConfirmationContext;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
