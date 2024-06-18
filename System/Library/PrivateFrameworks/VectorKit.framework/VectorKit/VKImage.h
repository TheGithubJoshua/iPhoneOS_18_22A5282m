@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject {
    struct CGImage { } *_imageRef;
    NSData *_data;
    NSString *_name;
    void *_gglTexture;
    struct shared_ptr<md::TextureAtlasRegion> { struct TextureAtlasRegion *__ptr_; struct __shared_weak_count *__cntrl_; } _textureAtlasRegion;
    struct Box<float, 2> { struct Matrix<float, 2, 1> { float _e[2]; } _minimum; struct Matrix<float, 2, 1> { float _e[2]; } _maximum; } _textureCoordinates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collisionRect;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGPoint { double x; double y; } _labelingPoint;
    struct CGSize { double width; double height; } _size;
    double _scale;
    BOOL _hasCollisionRect;
    BOOL _hasAnchorPoint;
    BOOL _hasLabelingPoint;
    BOOL _usedAsTextureAndImage;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isTextureReady;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isImageReady;
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (int)compareTo:(id)a0;
- (id)initWithData:(id)a0 scale:(double)a1;
- (struct CGImage { } *)image;
- (void)setCollisionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collisionRect;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void *)gglTexture;
- (id)initWithName:(id)a0 scale:(double)a1 resourceManager:(id)a2;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas { void /* function */ **x0; } *)a0;
- (const void *)textureCoordinates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)scale;
- (id)initWithData:(id)a0 scale:(double)a1 usedAsTextureAndImage:(BOOL)a2;
- (struct CGSize { double x0; double x1; })size;
- (void)setLabelingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 usedAsTextureAndImage:(BOOL)a2;
- (void)dealloc;
- (void)prepareTextureWithAtlas:(struct TextureAtlas { void /* function */ **x0; } *)a0;
- (void)_prepareImage;
- (struct CGPoint { double x0; double x1; })labelingPoint;

@end
