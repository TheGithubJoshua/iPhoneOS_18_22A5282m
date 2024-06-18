@class PKImage;

@interface PKPassPreviewImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *iconImage;
@property (retain, nonatomic) PKImage *notificationIconImage;
@property (retain, nonatomic) PKImage *rawIcon;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
