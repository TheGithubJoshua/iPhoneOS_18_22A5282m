@class NSString, NSMutableDictionary, AVComposition, CIImage, AVAudioMix, NUImageGeometry, NUGeometrySpaceMap, AVVideoComposition, NSDictionary;
@protocol NUVideoProperties, NUImageProperties;

@interface NURenderNode : NSObject {
    unsigned long long _hashValue;
}

@property (retain) CIImage *cached_outputImage;
@property (retain) NSMutableDictionary *cached_auxiliaryImages;
@property (retain) AVComposition *cached_outputVideo;
@property (retain) AVVideoComposition *cached_outputVideoComposition;
@property (retain) AVAudioMix *cached_outputAudioMix;
@property (retain) NUImageGeometry *cached_outputImageGeometry;
@property (retain) id<NUImageProperties> cached_imageProperties;
@property (retain) id<NUVideoProperties> cached_videoProperties;
@property (retain) NUGeometrySpaceMap *cached_geometrySpaceMap;
@property (getter=isCached) BOOL cached;
@property long long _evaluatedForMode;
@property (readonly, nonatomic) BOOL isCached;
@property (nonatomic) long long evaluatedForMode;
@property (readonly, nonatomic) NSString *dominantInputKey;
@property (readonly, nonatomic) NSString *spaceMapKey;
@property (readonly, nonatomic) double nodeCreationTime;
@property (retain, nonatomic) NSString *nodeCreationJobName;
@property (nonatomic) long long cacheHitsCount;
@property (readonly) NSDictionary *inputs;
@property (readonly) NSDictionary *settings;
@property (readonly) NSDictionary *xforms;
@property (readonly) BOOL isGeometryNode;
@property (readonly) BOOL isPlaceholderNode;

+ (id)nodeFromCache:(id)a0 cache:(id)a1;
+ (id)nodeFromCache:(id)a0;

- (unsigned long long)_hash;
- (id)init;
- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)outputImage:(out id *)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)uniqueInputNode;
- (id)_evaluateAudioMix:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (id)imageProperties:(out id *)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputForKey:(id)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (void)nu_updateDigest:(id)a0;
- (id)outputImageGeometry:(out id *)a0;
- (id)outputTimedMetadataSampleWithIdentifier:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(out id *)a2;
- (id)outputVideo:(out id *)a0;
- (id)outputVideoComposition:(out id *)a0;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)videoProperties:(out id *)a0;
- (id)outputAudioMix:(out id *)a0;
- (void)_appendInputsWithOffset:(long long)a0 to:(id)a1;
- (id)_descriptionWithOffset:(long long)a0 showInputs:(BOOL)a1;
- (id)_dictionaryToSingleLineString:(id)a0;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)_evaluateGeometrySpaceMap:(out id *)a0;
- (id)_evaluateImageProperties:(out id *)a0;
- (id)_evaluateTimedMetadataSampleWithIdentifier:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(out id *)a2;
- (id)_evaluateVideoAttributes:(out id *)a0;
- (id)_generateSpaceMapKey;
- (id)evaluateSettings:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)geometryNode;
- (BOOL)hasCyclicalDependencyForInput:(id)a0;
- (BOOL)isEqualToRenderNode:(id)a0;
- (BOOL)isEqualToSettingsAndInputs:(id)a0;
- (id)originalAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)outputGeometrySpaceMap:(out id *)a0;
- (id)outputVideoAttributes:(out id *)a0;
- (id)placeholderNodeWithCachedInputs:(id)a0;
- (void)resetInput:(id)a0 forKey:(id)a1;
- (unsigned long long)settingsAndInputsHash;

@end