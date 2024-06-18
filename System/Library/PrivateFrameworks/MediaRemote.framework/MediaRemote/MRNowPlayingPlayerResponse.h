@class NSArray, MRPlayerPath, MRPlaybackQueue, MRClient, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRClient *clientProperties;
@property (copy, nonatomic) NSDate *deviceLastPlayingDate;
@property (copy, nonatomic) NSDate *playerLastPlayingDate;
@property (readonly, copy, nonatomic) NSArray *proxiableSupportedCommands;
@property (readonly, nonatomic) BOOL deviceHasPlayedRecently;
@property (readonly, nonatomic) BOOL playerHasPlayedRecently;
@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) BOOL hasPlayedRecently;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDictionaryRepresentation;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
