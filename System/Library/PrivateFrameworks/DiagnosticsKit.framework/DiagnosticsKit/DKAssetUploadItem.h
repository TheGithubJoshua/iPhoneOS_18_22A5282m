@class NSData, NSDictionary;

@interface DKAssetUploadItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *extra;

+ (id)assetWithData:(id)a0 andExtra:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_decoderClasses;
- (id)initWithData:(id)a0 andExtra:(id)a1;

@end
