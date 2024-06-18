@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)defaultSpeedFromList:(id)a0;
+ (id)collectionWithSpeeds:(id)a0;

- (void)selectNextPlaybackSpeed:(id)a0;
- (id)internalDescription;
- (void)setActiveSpeed:(id)a0;
- (void)selectSpeed:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_initInternalWithSpeeds:(id)a0;
- (id)description;
- (id)delegate;
- (id)debugDescription;
- (id)displaySpeeds;
- (id)activeSpeed;

@end
