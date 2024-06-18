@class INIntent;

@interface REUIElementIntentAction : REUIElementDonatedActionAction

@property (readonly, nonatomic) INIntent *intent;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_newPerformer;
- (void)_performWithContext:(id)a0;

@end
