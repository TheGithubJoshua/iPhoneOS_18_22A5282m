@class PHImageRequestOptions;
@protocol PXDisplayAsset;

@interface PXImageRequestDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, copy, nonatomic) PHImageRequestOptions *options;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;

@end
