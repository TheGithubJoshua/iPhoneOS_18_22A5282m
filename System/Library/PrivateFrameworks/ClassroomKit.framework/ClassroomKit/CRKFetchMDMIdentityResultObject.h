@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *mdmIdentityPersistentID;
@property (retain, nonatomic) NSString *mdmIdentityCommonName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
