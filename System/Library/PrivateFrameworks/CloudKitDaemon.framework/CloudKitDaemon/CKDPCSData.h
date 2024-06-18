@class NSString, NSData;
@protocol NSSecureCoding;

@interface CKDPCSData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pcsKeyID;
@property (readonly, nonatomic) id<NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *pcs;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSData *pcsData;

- (id)initWithCoder:(id)a0;
- (BOOL)shouldEncodePCSData;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPCSData:(id)a0;

@end
