@class NSNumber, NSString, NSUUID;

@interface ASDVPPRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *accountIdentifier;
@property long long archiveType;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemIdentifier;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) long long requestType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
