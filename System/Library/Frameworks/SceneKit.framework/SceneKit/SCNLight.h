@class NSData, NSString, NSArray, NSURL, SCNMaterialProperty, NSMutableDictionary, SCNOrderedDictionary, SCNTechnique;

@interface SCNLight : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    struct __C3DLight { } *_light;
    unsigned char _isPresentationInstance : 1;
    unsigned char _castsShadow : 1;
    unsigned char _usesDeferredShadows : 1;
    unsigned char _usesModulatedMode : 1;
    unsigned char _baked : 1;
    unsigned char _shouldBakeDirectLighting : 1;
    unsigned char _shouldBakeIndirectLighting : 1;
    unsigned char _automaticallyAdjustsShadowProjection : 1;
    unsigned char _forcesBackFaceCasters : 1;
    unsigned char _sampleDistributedShadowMaps : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _shadowRadius;
    double _intensity;
    double _temperature;
    double _orthographicScale;
    struct CGSize { double width; double height; } _shadowMapSize;
    unsigned long long _categoryBitMask;
    unsigned char _shadowSampleCount;
    unsigned char _shadowCascadeCount;
    double _maximumShadowDistance;
    double _shadowCascadeSplittingFactor;
    double _cascadeDebugFactor;
    double _zNear;
    double _zFar;
    double _shadowBias;
    long long _probeType;
    long long _probeUpdateType;
    BOOL _parallaxCorrectionEnabled;
    void /* unknown type, empty encoding */ _probeExtents;
    void /* unknown type, empty encoding */ _probeOffset;
    void /* unknown type, empty encoding */ _parallaxExtentsFactor;
    void /* unknown type, empty encoding */ _parallaxCenterOffset;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
    float _spotInnerAngle;
    float _spotOuterAngle;
    float _spotFalloffExponent;
    SCNMaterialProperty *_gobo;
    NSURL *_IESProfileURL;
    SCNTechnique *_technique;
    NSData *_sphericalHarmonics;
    SCNMaterialProperty *_probeEnvironment;
    long long _areaType;
    void /* unknown type, empty encoding */ _areaExtents;
    NSArray *_areaPolygonVertices;
    BOOL _drawsArea;
    BOOL _doubleSided;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id color;
@property (nonatomic) double temperature;
@property (nonatomic) double intensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL castsShadow;
@property (retain, nonatomic) id shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowMapSize;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowBias;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) double maximumShadowDistance;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (nonatomic) double orthographicScale;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (retain, nonatomic) NSURL *IESProfileURL;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) long long probeType;
@property (nonatomic) long long probeUpdateType;
@property (nonatomic) void /* unknown type, empty encoding */ probeExtents;
@property (nonatomic) void /* unknown type, empty encoding */ probeOffset;
@property (nonatomic) BOOL parallaxCorrectionEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ parallaxExtentsFactor;
@property (nonatomic) void /* unknown type, empty encoding */ parallaxCenterOffset;
@property (readonly, nonatomic) SCNMaterialProperty *probeEnvironment;
@property (nonatomic) long long areaType;
@property (nonatomic) void /* unknown type, empty encoding */ areaExtents;
@property (copy, nonatomic) NSArray *areaPolygonVertices;
@property (nonatomic) BOOL drawsArea;
@property (nonatomic) BOOL doubleSided;
@property (readonly, nonatomic) SCNMaterialProperty *gobo;
@property (nonatomic) unsigned long long categoryBitMask;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight { } *)a0;
+ (id)lightWithMDLLight:(id)a0;
+ (id)lightWithMDLLightProbe:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setIdentifier:(id)a0;
- (id)technique;
- (id)copy;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllAnimations;
- (void)addAnimation:(id)a0;
- (id)scene;
- (void)encodeWithCoder:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTechnique:(id)a0;
- (void)dealloc;
- (id)identifier;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)attributeForKey:(id)a0;
- (id)animationPlayerForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (void)setSphericalHarmonicsCoefficients:(id)a0;
- (void)set_sphericalHarmonics:(id)a0;
- (BOOL)hasGobo;
- (BOOL)isBaked;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_customDecodingOfSCNLight:(id)a0;
- (void)_customEncodingOfSCNLight:(id)a0;
- (void)_didDecodeSCNLight:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)_resyncObjCModelOfPerTypeParameters;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (double)_shadowCascadeDebugFactor;
- (id)_sphericalHarmonics;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (BOOL)adjustsShadowProjection;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)copyAnimationChannelForKeyPath:(id)a0 property:(id)a1;
- (BOOL)forceBackFaceCasters;
- (id)initPresentationLightWithLightRef:(struct __C3DLight { } *)a0;
- (id)initWithLightRef:(struct __C3DLight { } *)a0;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DLight { } *)lightRef;
- (void)pauseAnimationForKey:(id)a0;
- (id)presentationInstance;
- (id)presentationLight;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (void)setAdjustsShadowProjection:(BOOL)a0;
- (void)setBaked:(BOOL)a0;
- (void)setForceBackFaceCasters:(BOOL)a0;
- (void)setIESProfileURL:(id)a0 resolvedURL:(id)a1;
- (void)setShouldBakeDirectLighting:(BOOL)a0;
- (void)setShouldBakeIndirectLighting:(BOOL)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (void)setSpotFalloffExponent:(double)a0;
- (void)setUsesDeferredShadows:(BOOL)a0;
- (void)setUsesModulatedMode:(BOOL)a0;
- (void)set_shadowCascadeDebugFactor:(double)a0;
- (BOOL)shouldBakeDirectLighting;
- (BOOL)shouldBakeIndirectLighting;
- (double)spotFalloffExponent;
- (void)unbindAnimatablePath:(id)a0;
- (BOOL)usesDeferredShadows;
- (BOOL)usesModulatedMode;

@end