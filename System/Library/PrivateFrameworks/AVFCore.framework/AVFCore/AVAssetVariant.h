@class AVAssetVariantVideoAttributes, AVAssetVariantAudioAttributes, FigAlternateObjC;

@interface AVAssetVariant : NSObject <NSSecureCoding> {
    FigAlternateObjC *_figAlternateObjC;
    AVAssetVariantVideoAttributes *_videoAttributes;
    AVAssetVariantAudioAttributes *_audioAttributes;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double peakBitRate;
@property (readonly, nonatomic) double averageBitRate;
@property (readonly, nonatomic) AVAssetVariantVideoAttributes *videoAttributes;
@property (readonly, nonatomic) AVAssetVariantAudioAttributes *audioAttributes;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (struct OpaqueFigAlternate { } *)_figAlternate;

@end
