@class NSString;

@interface HMAccessoryInfoProtoMediaStateEvent : PBCodable <NSCopying> {
    struct { unsigned char playbackState : 1; unsigned char repeatState : 1; unsigned char shuffleState : 1; unsigned char volume : 1; } _has;
}

@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) long long playbackState;
@property (nonatomic) BOOL hasShuffleState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) BOOL hasRepeatState;
@property (nonatomic) long long repeatState;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) double volume;
@property (readonly, nonatomic) BOOL hasMediaIdentifier;
@property (retain, nonatomic) NSString *mediaIdentifier;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
