@protocol MTLTexture;

@interface CMIImagePyramidLevel : NSObject {
    unsigned long long _levelIndex;
}

@property (retain, nonatomic, setter=setTexture:) id<MTLTexture> texture;

- (void).cxx_destruct;
- (void)dealloc;

@end
