@class NSString, NSArray, NSMutableDictionary, NSDictionary, SCNGeometry, SCNOrderedDictionary, UIColor;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    struct __C3DParticleSystem { } *_particleSystem;
    unsigned char _isPresentationInstance : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    double _emissionDuration;
    double _emissionDurationVariation;
    double _idleDuration;
    double _idleDurationVariation;
    double _birthRate;
    double _birthRateVariation;
    double _warmupDuration;
    SCNGeometry *_emitterShape;
    long long _birthLocation;
    long long _birthDirection;
    struct SCNVector3 { float x; float y; float z; } _emittingDirection;
    struct SCNVector3 { float x; float y; float z; } _orientationDirection;
    struct SCNVector3 { float x; float y; float z; } _acceleration;
    double _spreadingAngle;
    BOOL _loops;
    BOOL _isLocal;
    BOOL _affectedByGravity;
    BOOL _affectedByPhysicsFields;
    BOOL _physicsCollisionsEnabled;
    BOOL _lightingEnabled;
    BOOL _softParticlesEnabled;
    BOOL _particleDiesOnCollision;
    BOOL _blackPassEnabled;
    BOOL _writesToDepthBuffer;
    double _particleAngle;
    double _particleAngleVariation;
    double _particleVelocity;
    double _particleVelocityVariation;
    double _particleAngularVelocity;
    double _particleAngularVelocityVariation;
    double _particleLifeSpan;
    double _particleLifeSpanVariation;
    double _particleBounce;
    double _particleBounceVariation;
    double _particleFriction;
    double _particleFrictionVariation;
    double _particleCharge;
    double _particleChargeVariation;
    id _particleImage;
    UIColor *_particleColor;
    struct SCNVector4 { float x; float y; float z; float w; } _particleColorVariation;
    SCNParticleSystem *_systemSpawnedOnCollision;
    SCNParticleSystem *_systemSpawnedOnDying;
    SCNParticleSystem *_systemSpawnedOnLiving;
    double _particleSize;
    double _particleSizeVariation;
    double _particleIntensity;
    double _particleIntensityVariation;
    long long _seed;
    long long _blendMode;
    long long _renderingMode;
    long long _orientationMode;
    long long _imageSequenceAnimationMode;
    NSArray *_particleGeometries;
    NSArray *_colliderNodes;
    NSDictionary *_propertyControllers;
    long long _sortingMode;
    double _particleMass;
    double _particleMassVariation;
    double _dampingFactor;
    double _speedFactor;
    double _fixedTimeStep;
    double _stretchFactor;
    double _lightEmissionRadiusFactor;
    double _fresnelExponent;
    unsigned long long _imageSequenceColumnCount;
    unsigned long long _imageSequenceRowCount;
    double _imageSequenceInitialFrame;
    double _imageSequenceInitialFrameVariation;
    double _imageSequenceFrameRate;
    double _imageSequenceFrameRateVariation;
    NSString *_referenceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double emissionDuration;
@property (nonatomic) double emissionDurationVariation;
@property (nonatomic) double idleDuration;
@property (nonatomic) double idleDurationVariation;
@property (nonatomic) BOOL loops;
@property (nonatomic) double birthRate;
@property (nonatomic) double birthRateVariation;
@property (nonatomic) double warmupDuration;
@property (retain, nonatomic) SCNGeometry *emitterShape;
@property (nonatomic) long long birthLocation;
@property (nonatomic) long long birthDirection;
@property (nonatomic) double spreadingAngle;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } emittingDirection;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } orientationDirection;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } acceleration;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic) double particleAngle;
@property (nonatomic) double particleAngleVariation;
@property (nonatomic) double particleVelocity;
@property (nonatomic) double particleVelocityVariation;
@property (nonatomic) double particleAngularVelocity;
@property (nonatomic) double particleAngularVelocityVariation;
@property (nonatomic) double particleLifeSpan;
@property (nonatomic) double particleLifeSpanVariation;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property (retain, nonatomic) id particleImage;
@property (nonatomic) unsigned long long imageSequenceColumnCount;
@property (nonatomic) unsigned long long imageSequenceRowCount;
@property (nonatomic) double imageSequenceInitialFrame;
@property (nonatomic) double imageSequenceInitialFrameVariation;
@property (nonatomic) double imageSequenceFrameRate;
@property (nonatomic) double imageSequenceFrameRateVariation;
@property (nonatomic) long long imageSequenceAnimationMode;
@property (retain, nonatomic) UIColor *particleColor;
@property (nonatomic) struct SCNVector4 { float x0; float x1; float x2; float x3; } particleColorVariation;
@property (nonatomic) double particleSize;
@property (nonatomic) double particleSizeVariation;
@property (nonatomic) double particleIntensity;
@property (nonatomic) double particleIntensityVariation;
@property (nonatomic) long long blendMode;
@property (nonatomic, getter=isBlackPassEnabled) BOOL blackPassEnabled;
@property (nonatomic) long long orientationMode;
@property (nonatomic) long long sortingMode;
@property (nonatomic, getter=isLightingEnabled) BOOL lightingEnabled;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL affectedByPhysicsFields;
@property (nonatomic) BOOL particleDiesOnCollision;
@property (copy, nonatomic) NSArray *colliderNodes;
@property (nonatomic) double particleMass;
@property (nonatomic) double particleMassVariation;
@property (nonatomic) double particleBounce;
@property (nonatomic) double particleBounceVariation;
@property (nonatomic) double particleFriction;
@property (nonatomic) double particleFrictionVariation;
@property (nonatomic) double particleCharge;
@property (nonatomic) double particleChargeVariation;
@property (nonatomic) double dampingFactor;
@property (nonatomic) double speedFactor;
@property (nonatomic) double stretchFactor;
@property (nonatomic) double fresnelExponent;
@property (nonatomic) BOOL writesToDepthBuffer;
@property (copy, nonatomic) NSDictionary *propertyControllers;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)particleSystem;
+ (id)particleSystemNamed:(id)a0 inDirectory:(id)a1;
+ (id)particleSystemWithParticleSystemRef:(struct __C3DParticleSystem { } *)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setIdentifier:(id)a0;
- (void)setIsLocal:(BOOL)a0;
- (long long)seed;
- (id)copy;
- (void)setRenderingMode:(long long)a0;
- (void)setSeed:(long long)a0;
- (void)removeAllAnimations;
- (long long)renderingMode;
- (void)addAnimation:(id)a0;
- (id)scene;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)identifier;
- (void)setName:(id)a0;
- (void)reset;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)animationPlayerForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (id)referenceName;
- (void)setReferenceName:(id)a0;
- (short)typeOfProperty:(id)a0;
- (BOOL)lightingEnabled;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_customDecodingOfSCNParticleSystem:(id)a0;
- (void)_customEncodingOfSCNParticleSystem:(id)a0;
- (BOOL)_isAReference;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (void)_setParticleImagePath:(id)a0 withResolvedPath:(id)a1;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateParticleC3DImage:(id)a0;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (void)addModifierForProperties:(id)a0 atStage:(long long)a1 withBlock:(id /* block */)a2;
- (BOOL)areSoftParticlesEnabled;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (BOOL)blackPassEnabled;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (double)fixedTimeStep;
- (void)handleEvent:(long long)a0 forProperties:(id)a1 withBlock:(id /* block */)a2;
- (id)initPresentationSystemWithSystemRef:(struct __C3DParticleSystem { } *)a0;
- (id)initWithParticleSystemRef:(struct __C3DParticleSystem { } *)a0;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (double)lightEmissionRadiusFactor;
- (id)particleGeometries;
- (struct __C3DParticleSystem { } *)particleSystemRef;
- (void)pauseAnimationForKey:(id)a0;
- (BOOL)physicsCollisionsEnabled;
- (id)presentationInstance;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAllModifiers;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)removeModifiersOfStage:(long long)a0;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (void)setFixedTimeStep:(double)a0;
- (void)setLightEmissionRadiusFactor:(double)a0;
- (void)setParticleGeometries:(id)a0;
- (void)setPhysicsCollisionsEnabled:(BOOL)a0;
- (void)setSoftParticlesEnabled:(BOOL)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (BOOL)softParticlesEnabled;
- (void)unbindAnimatablePath:(id)a0;

@end