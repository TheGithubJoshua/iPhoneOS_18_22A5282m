@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (readonly, nonatomic) BOOL hasEncryption;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *humanReadableName;

+ (id)schemeWithName:(id)a0;
+ (void)initialize;
+ (void)registerSchemeClass:(Class)a0;
+ (id)authenticationSchemesForAccount:(id)a0 connection:(id)a1;
+ (id)knownSchemes;

- (Class)connectionClassForAccountClass:(Class)a0;
- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;

@end
