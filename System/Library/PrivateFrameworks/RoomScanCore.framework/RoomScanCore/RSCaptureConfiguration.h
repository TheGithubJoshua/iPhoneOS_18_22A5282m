@interface RSCaptureConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isMirrorDetectionEnabled) BOOL mirrorDetectionEnabled;
@property (nonatomic) unsigned long long coachingMaxFrameRate;
@property (nonatomic, getter=isCurvedWallEnabled) BOOL curvedWallEnabled;
@property (nonatomic, getter=isWindowDoorDetectionEnabled) BOOL windowDoorDetectionEnabled;
@property (nonatomic, getter=isLiveResultEnabled) BOOL liveResultEnabled;
@property (nonatomic, getter=isTextCoachingEnabled) BOOL textCoachingEnabled;
@property (nonatomic, getter=isOnboardingEnabled) BOOL onboardingEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) BOOL objectBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) BOOL standardizationEnabled;
@property (nonatomic, getter=isMarkerCoachingEnabled) BOOL markerCoachingEnabled;
@property (nonatomic, getter=isDoorWindowBeautificationEnabled) BOOL doorWindowBeautificationEnabled;
@property (nonatomic, getter=isDriftDetectionEnabled) BOOL driftDetectionEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) BOOL nonUniformHeightEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) BOOL openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) BOOL opendoorReplaceOpeningEnabled;
@property (nonatomic, getter=isDoorReplaceOpeningEnabled) BOOL doorReplaceOpeningEnabled;
@property (nonatomic, getter=isBoundaryRefinementEnabled) BOOL boundaryRefinementEnabled;
@property (nonatomic, getter=isBayWindowRecessedAreaEnabled) BOOL bayWindowRecessedAreaEnabled;
@property (nonatomic) unsigned long long maxFramerate;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
