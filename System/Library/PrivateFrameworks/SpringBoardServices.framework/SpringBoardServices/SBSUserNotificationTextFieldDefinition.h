@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL _hasSetMaxLength;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;

+ (id)_definitionsFromSerializedDefinitions:(id)a0;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyPropertiesToDefinition:(id)a0;

@end
