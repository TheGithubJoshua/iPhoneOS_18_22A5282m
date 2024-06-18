@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (id)url;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (long long)partitionType;
- (BOOL)allowsAuthedAccount;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (long long)serverType;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;

@end
