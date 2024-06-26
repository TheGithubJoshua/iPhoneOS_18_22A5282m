@class NSString;

@interface SBSUserNotificationButtonDefinition : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int presentationStyle;
@property (readonly, nonatomic) BOOL isPreferredButton;

+ (id)_buttonDefinitionsFromSerializedDefinitions:(id)a0;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0;
- (id)_initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyPropertiesToDefinition:(id)a0;

@end
