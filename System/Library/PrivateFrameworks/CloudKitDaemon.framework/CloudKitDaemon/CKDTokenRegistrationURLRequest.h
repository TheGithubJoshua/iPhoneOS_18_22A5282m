@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL skipBundleIDCheck;

- (id)requestOperationClasses;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (id)sourceApplicationSecondaryIdentifier;
- (id)initWithOperation:(id)a0 apsToken:(id)a1 apsEnvironmentString:(id)a2 bundleID:(id)a3 skipBundleIDCheck:(BOOL)a4;
- (BOOL)requiresTokenRegistration;

@end
