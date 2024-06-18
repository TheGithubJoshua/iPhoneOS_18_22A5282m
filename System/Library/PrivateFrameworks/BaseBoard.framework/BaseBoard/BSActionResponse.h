@class BSAuditToken, NSString, BSSettings, NSError;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding>

@property (readonly, copy, nonatomic) BSAuditToken *auditToken;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)response;
+ (id)responseWithInfo:(id)a0;
+ (id)responseForError:(id)a0;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescription;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)a0;

@end
