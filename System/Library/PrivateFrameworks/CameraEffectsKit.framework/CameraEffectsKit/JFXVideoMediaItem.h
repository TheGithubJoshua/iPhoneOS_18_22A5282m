@class AVAsset, JTVideoMediaUtils;

@interface JFXVideoMediaItem : JTAssetMediaItem

@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) JTVideoMediaUtils *videoMediaItemUtils;
@property (nonatomic) BOOL originalIsHEVC4k;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSizeWithTransform;
@property (nonatomic) int mediaStartOffset;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) BOOL isHighFrameRate;
@property (readonly, nonatomic) BOOL hasVideoTracks;
@property (readonly, nonatomic) BOOL hasAudioTracks;
@property (nonatomic) BOOL capturedByInAppCamera;
@property (readonly, nonatomic) BOOL needsDerivativeMedia;
@property (readonly, nonatomic) BOOL isUnsupportedAudio;

+ (void)videoMediaItemWithLocalURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;

- (id)assetURL;
- (id)colorSpace;
- (id)info;
- (void)commonInit;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)durationAt30fps;
- (void)cacheAssetInformation;
- (BOOL)canBeAddedToSequence;
- (BOOL)hasAudibleCharacteristic;
- (BOOL)hasVisualCharacteristic;
- (void)loadAVAssetWithCompletionHandler:(id /* block */)a0;
- (void)mediaserverdCrashed;
- (void)reloadAVAsset;
- (void)setAssetIs4kHEVC:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGSize { double x0; double x1; })a0 fillDest:(BOOL)a1;

@end
