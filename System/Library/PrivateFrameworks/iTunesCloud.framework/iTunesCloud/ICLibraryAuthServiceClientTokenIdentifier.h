@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *deviceGUID;

- (id)initWithCoder:(id)a0;
- (id)initWithResponseDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end