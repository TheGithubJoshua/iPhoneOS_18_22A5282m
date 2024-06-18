@class NSString, SBSUserNotificationColorDefinition;

@interface SBSUserNotificationSystemImageDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) SBSUserNotificationColorDefinition *tintColor;

+ (id)_definitionType;

- (id)initWithSystemImageName:(id)a0 tintColor:(id)a1;
- (id)_initWithDictionary:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)initWithSystemImageName:(id)a0;
- (id)_initWithSystemImageName:(id)a0 tintColor:(id)a1;

@end
