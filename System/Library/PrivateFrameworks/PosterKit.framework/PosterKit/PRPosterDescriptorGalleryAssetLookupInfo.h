@class NSDictionary;

@interface PRPosterDescriptorGalleryAssetLookupInfo : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_lookupInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultLookupInfo;
+ (id)lookUpInfoForAssetCatalogIdentifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetCatalogIdentifier:(id)a0;
- (id)imageFromBundle:(id)a0 traitCollection:(id)a1 error:(out id *)a2;

@end
