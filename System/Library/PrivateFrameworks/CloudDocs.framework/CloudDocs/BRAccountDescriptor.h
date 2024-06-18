@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString *_personaIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isLoggedInToCloudDocs;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) NSString *organizationName;

+ (id)allLoggedInAccountDescriptors;
+ (BOOL)mightHaveDataSeparatedAccountDescriptor;
+ (id)accountDescriptorForURL:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (void)clearAccountDescriptorCache;
+ (id)accountDescriptorForAccountID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)accountDescriptorForURL:(id)a0;
+ (id)accountDescriptorForPersonaID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)accountDescriptorForPersonaID:(id)a0;
+ (id)accountDescriptorForAccountID:(id)a0;
+ (id)allEligibleAccountDescriptors;

- (id)initWithCoder:(id)a0;
- (id)personaIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPersonaIdentifier:(id)a0 accountIdentifier:(id)a1 organizationName:(id)a2 dataSeparated:(BOOL)a3 loggedInToCloudDocs:(BOOL)a4;

@end
