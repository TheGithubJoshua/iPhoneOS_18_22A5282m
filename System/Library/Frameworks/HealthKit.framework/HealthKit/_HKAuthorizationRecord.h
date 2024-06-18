@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (id)initWithCoder:(id)a0;
- (BOOL)deniedReading;
- (id)recordWithReadingDisabled;
- (BOOL)requestedSharing;
- (BOOL)deniedSharing;
- (BOOL)requestedReading;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)recordWithSharingDisabled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (id)description;
- (BOOL)isCompatibleStatus:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readingEnabled;
- (BOOL)sharingEnabled;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;

@end
