@class NSString;

@interface PTTexture : NSObject

@property (retain, nonatomic) NSString *colorPrimaries;
@property (retain, nonatomic) NSString *transferFunction;
@property (retain, nonatomic) NSString *YCbCrMatrix;
@property (nonatomic) long long YCbCrColorDepth;
@property (nonatomic) BOOL YCbCrFullRange;

+ (id)createYUV420:(id)a0 chroma:(id)a1;
+ (id)createRGBA:(id)a0;

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;

@end
