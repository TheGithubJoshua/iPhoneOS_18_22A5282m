@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (id)symbol;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (id)makeSymbolResourceProvider;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)_aspectRatio;
- (BOOL)isEqual:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)_fallbackKey;
- (void)resolve;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)initWithDigest:(id)a0;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (id)_placeholderImageWithImageDescriptor:(id)a0 markAsPlaceholder:(BOOL)a1;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToIcon:(id)a0;

@end
