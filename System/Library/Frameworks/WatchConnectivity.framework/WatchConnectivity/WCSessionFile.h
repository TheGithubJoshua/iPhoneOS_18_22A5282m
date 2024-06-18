@class NSURL, NSString, NSDictionary, NSData, WCUserInfo, NSDate, NSNumber;

@interface WCSessionFile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) WCUserInfo *userInfoStorage;
@property (copy, nonatomic) NSString *relativePath;
@property (copy) NSString *fileIdentifier;
@property (copy, nonatomic) NSNumber *fileSize;
@property (readonly, copy) NSData *userInfoData;
@property (retain, nonatomic) NSURL *fileURL;

- (id)initWithFileURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 fileURL:(id)a1 relativePath:(id)a2;
- (id)initWithIdentifier:(id)a0 relativePath:(id)a1;
- (BOOL)updateUserInfo:(id)a0 error:(id *)a1;
- (BOOL)updateUserInfoData:(id)a0 error:(id *)a1;
- (BOOL)verifyMetadata;

@end