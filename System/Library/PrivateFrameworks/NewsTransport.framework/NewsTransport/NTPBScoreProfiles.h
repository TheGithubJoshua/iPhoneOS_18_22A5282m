@class NTPBScoreProfile;

@interface NTPBScoreProfiles : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDefaultScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *defaultScoreProfile;
@property (readonly, nonatomic) BOOL hasForYouGroupScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *forYouGroupScoreProfile;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
