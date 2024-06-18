@class NSNumber;

@interface CSEvent : NSObject

@property (nonatomic) long long type;
@property (nonatomic, getter=isConsumable) BOOL consumable;
@property (nonatomic, getter=isStateless) BOOL stateless;
@property (retain, nonatomic) NSNumber *value;

+ (id)eventWithType:(long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
