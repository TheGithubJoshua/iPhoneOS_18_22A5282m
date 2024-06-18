@class INIntent;

@interface WFSiriKitIntentRequest : WFSiriActionRequest

@property (readonly, nonatomic) INIntent *intent;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
