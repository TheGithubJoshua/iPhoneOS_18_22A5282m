@class AVMutableVideoComposition, AVPlayerItem, AVMutableComposition, AVMutableAudioMix, JFXCompositionTrackGroup, NSMutableArray, NSMutableDictionary, PVColorSpace, NSMapTable;
@protocol JFXCompositionPlayableElementsDataSource, JFXPlayableElement;

@interface JFXComposition : NSObject

@property (retain, nonatomic) NSMapTable *clipCustomRendererMap;
@property (retain, nonatomic) NSMapTable *clipFaceTrackingPlaybackDelegates;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVMutableComposition *avComposition;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (retain, nonatomic) AVMutableAudioMix *audioMix;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) JFXCompositionTrackGroup *trackGroupA;
@property (retain, nonatomic) JFXCompositionTrackGroup *trackGroupB;
@property (retain, nonatomic) NSMutableArray *audioMixParameters;
@property (retain, nonatomic) id<JFXCompositionPlayableElementsDataSource> clipsDataSource;
@property (retain, nonatomic) NSMutableArray *videoCompositionInstructions;
@property (nonatomic) struct CGSize { double width; double height; } previousRenderSize;
@property (nonatomic) long long backgroundAudioTrackCount;
@property (nonatomic) long long foregroundAudioTrackCount;
@property (nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) id<JFXPlayableElement> liveTransformClip;
@property (nonatomic) struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } liveCompositionTransform;
@property (retain, nonatomic) NSMutableDictionary *assetsUsed;
@property (nonatomic) float globalAudioVolume;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (readonly, nonatomic) PVColorSpace *compositionOutputColorSpace;
@property (nonatomic) unsigned int parentCode;

+ (Class)instructionBuilderClass;

- (BOOL)validate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (void)markDirty;
- (void)playerItemDidReachEnd:(id)a0;
- (BOOL)CARenderingRequiredForClip:(id)a0;
- (void)CFX_updateFaceTrackingPlaybackDelegateForClip:(id)a0 sharedMediaDataReaderManager:(id)a1;
- (BOOL)JFX_hasEffectThatRequiresCustomRendering;
- (BOOL)JFX_isContigousSplitClip:(id)a0 nextClip:(id)a1;
- (float)JFX_preferredRenderScale;
- (int)outputFrameRate;
- (id)AVComposition;
- (void)JFX_applyPropertiesForCustomVideoCompositor:(id)a0;
- (void)JFX_finalizeVideoComposition;
- (void)JFX_setScrubbingModeForPlaybackDelegates:(BOOL)a0;
- (void)JFX_updateFaceTrackPropertiesForEffectsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)JFX_updatePlaybackDelegatesForClip:(id)a0;
- (void)addBackTracksIfRemoved;
- (id)animojiCustomRendererPropsForClip:(id)a0 currentCustomProperties:(id)a1 sharedMediaDataReaderManager:(id)a2;
- (void)applyExportProperties;
- (void)applyPlayerItemProperties;
- (void)applyPropertiesForCustomVideoCompositor:(id)a0;
- (void)assetUsed:(id)a0;
- (id)buildClipList;
- (void)burnInPlaybackSettings:(id)a0;
- (void)clearPlayerItemProperties;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })clipTransform:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })compositionItemsForState:(id)a0 compositionItem:(id *)a1 backfillCompositionItem:(id *)a2;
- (id)dissolveGraphNode:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 from:(id)a1 to:(id)a2;
- (BOOL)emptySegments:(id)a0;
- (id)initWithClipsDataSource:(id)a0;
- (id)instructionToHideTrackID:(int)a0 whileHidingTrackID:(int)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 requiresCARendering:(BOOL)a3;
- (id)instructionToShowClip:(id)a0 withTrackID:(int)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 requiresCARendering:(BOOL)a4;
- (id)instructionToShowImageWithClip:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 requiresCARendering:(BOOL)a3;
- (void)logAddedTrack:(id)a0 trackID:(int)a1;
- (void)logRemovedTrack:(id)a0 trackID:(int)a1;
- (id)newInstructionGraphNodeForClip:(id)a0 clipTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 compositionTrackID:(int)a2 requiresTweening:(BOOL *)a3 isContainedClip:(BOOL)a4;
- (void)noteEffectChangeForClip:(id)a0;
- (void)notifyNeedsEffectPropertiesUpdatedForPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)notifyPlaybackDidStopAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)notifyPlaybackWillBegin;
- (void)rebuildCompositionInstructionsForVideoStillTitleCard:(id)a0;
- (void)refreshAVComposition;
- (void)removeEmptyTracks;
- (void)removeTrackFromAudioMix:(int)a0;
- (BOOL)removeTrackIfEmpty:(id)a0;
- (void)setRenderScale;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForClip:(id)a0;
- (void)updateRenderSizeIfNeeded;
- (id)updateVideoAndAudioInstructionForState:(id)a0 previousInstructions:(id)a1 waitingForResource:(BOOL)a2;
- (float)volumeForClip:(id)a0;

@end
