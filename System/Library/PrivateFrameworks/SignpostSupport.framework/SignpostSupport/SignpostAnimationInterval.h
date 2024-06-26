@class NSArray, SignpostSupportAnimationGraceTime;

@interface SignpostAnimationInterval : SignpostInterval

@property (class) unsigned long long forcedGlitchTimeRatioAdjustedVersion;
@property (class, readonly) unsigned long long effectiveGlitchTimeRatioAdjustedVersion;

@property (readonly) SignpostSupportAnimationGraceTime *firstFrameGraceTime;
@property (readonly, nonatomic) unsigned long long firstFrameGraceTimeMCT;
@property (retain, nonatomic) NSArray *compositeIntervals;
@property (readonly, nonatomic) NSArray *firstFrameLifetimes;
@property (readonly, nonatomic) unsigned long long firstFrameGraceTimeMs;
@property (readonly, nonatomic) unsigned long long animationType;
@property (readonly, nonatomic) NSArray *allCommits;
@property (readonly, nonatomic) NSArray *longCommits;
@property (readonly, nonatomic) NSArray *allSystemwideCommits;
@property (readonly, nonatomic) NSArray *longSystemwideCommits;
@property (readonly, nonatomic) NSArray *allClientDrawables;
@property (readonly, nonatomic) NSArray *longClientDrawables;
@property (readonly, nonatomic) NSArray *allSystemwideClientDrawables;
@property (readonly, nonatomic) NSArray *longSystemwideClientDrawables;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) NSArray *allTransactionLifetimes;
@property (readonly, nonatomic) NSArray *longTransactionLifetimes;
@property (readonly, nonatomic) NSArray *allFrameLatencies;
@property (readonly, nonatomic) NSArray *allContributedFrameLatencies;
@property (readonly, nonatomic) NSArray *longFrameLatencies;
@property (readonly, nonatomic) NSArray *contributedLongFrameLatencies;
@property (readonly, nonatomic) NSArray *allFrameLifetimes;
@property (readonly, nonatomic) NSArray *allContributedFrameLifetimes;
@property (readonly, nonatomic) NSArray *longFrameLifetimes;
@property (readonly, nonatomic) NSArray *longContributedFrameLifetimes;
@property (readonly, nonatomic) NSArray *allHIDLatencies;
@property (readonly, nonatomic) NSArray *longHIDLatencies;
@property (readonly, nonatomic) NSArray *allRenderServerRenders;
@property (readonly, nonatomic) NSArray *longRenderServerRenders;
@property (readonly, nonatomic) NSArray *glitches;
@property (readonly, nonatomic) NSArray *contributedGlitches;
@property (readonly, nonatomic) double glitchTimeRatio;
@property (readonly, nonatomic) double glitchTimeRatioMsPerS;
@property (readonly, nonatomic) double glitchTimeRatioAdjusted;
@property (readonly, nonatomic) double glitchTimeRatioAdjustedMsPerS;
@property (readonly, nonatomic) NSArray *firstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedFirstFrameGlitches;
@property (readonly, nonatomic) double firstFrameGlitchTimeRatio;
@property (readonly, nonatomic) double firstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *nonFirstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedNonFirstFrameGlitches;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatio;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatioAdjusted;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatioAdjustedMsPerS;

+ (id)glitchesFromAnimationIntervals:(id)a0;
+ (float)_durationInSecondsFromDurationInMCT:(unsigned long long)a0 timebaseRatio:(double)a1;
+ (id)_glitchesFromAnimationIntervals:(id)a0 contributedGlitchesOnly:(BOOL)a1 skipFirstFrame:(BOOL)a2 skipNonFirstFrame:(BOOL)a3;
+ (double)_timeRatioForTimeIntervalArray:(id)a0 inAnimationIntervals:(id)a1 applyPerceptionAdjustments:(unsigned long long)a2;
+ (double)_totalAnimationDurationOfAnimationIntervals:(id)a0 applyPerceptionAdjustments:(unsigned long long)a1;
+ (id)_unionRangesForAnimations:(id)a0;
+ (double)aggregateFirstFrameGlitchTimeRatioForAnimationIntervals:(id)a0;
+ (double)aggregateFirstFrameGlitchTimeRatioMsPerSForAnimationIntervals:(id)a0;
+ (double)aggregateGlitchTimeRatioAdjustedForAnimationIntervals:(id)a0;
+ (double)aggregateGlitchTimeRatioAdjustedMsPerSForAnimationIntervals:(id)a0;
+ (double)aggregateGlitchTimeRatioForAnimationIntervals:(id)a0;
+ (double)aggregateGlitchTimeRatioMsPerSForAnimationIntervals:(id)a0;
+ (double)aggregateNonFirstFrameGlitchTimeRatioAdjustedForAnimationIntervals:(id)a0;
+ (double)aggregateNonFirstFrameGlitchTimeRatioAdjustedMsPerSForAnimationIntervals:(id)a0;
+ (double)aggregateNonFirstFrameGlitchTimeRatioForAnimationIntervals:(id)a0;
+ (double)aggregateNonFirstFrameGlitchTimeRatioMsPerSForAnimationIntervals:(id)a0;
+ (id)contributedFirstFrameGlitchesFromAnimationIntervals:(id)a0;
+ (id)contributedGlitchesFromAnimationIntervals:(id)a0;
+ (id)contributedNonFirstFrameGlitchesFromAnimationIntervals:(id)a0;
+ (id)firstFrameGlitchesFromAnimationIntervals:(id)a0;
+ (id)nonFirstFrameGlitchesFromAnimationIntervals:(id)a0;
+ (id)serializationTypeNumber;

- (id)initWithDictionary:(id)a0;
- (BOOL)isFramePossibleFirstFrameForAnimation:(id)a0;
- (BOOL)isFramePossibleFirstFrameForAnimation:(id)a0 withGraceTime:(unsigned long long)a1;
- (unsigned long long)durationToFirstBeginMachContinuousTime:(id)a0;
- (id)_intervalTypeString;
- (id)humanReadableType;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_frameDescription;
- (double)_timeRatioForTimeIntervalArray:(id)a0 applyPerceptionAdjustments:(unsigned long long)a1;
- (id)_poorPerfFrameDescription;
- (id)debugDescription;
- (unsigned long long)durationToFirstEndMachContinuousTime:(id)a0;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)_detailedFrameDescription;
- (double)durationToFirstEndSeconds:(id)a0;
- (double)durationToFirstBeginSeconds:(id)a0;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1 accumulatedState:(id)a2 firstFrameGraceTimeController:(id)a3;
- (id)_statsStringForTimeIntervals:(id)a0 label:(id)a1;
- (id)firstFrameLifetimesWithGraceTimeMCT:(unsigned long long)a0;
- (id)_animationStatsDescription;

@end
