@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExperts : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationSinceLastSuccessfulTraining : 1; unsigned char trainingTime : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) int durationSinceLastSuccessfulTraining;
@property (nonatomic) BOOL hasTrainingTime;
@property (nonatomic) int trainingTime;
@property (retain, nonatomic) NSMutableArray *experts;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionsType;
+ (Class)expertsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearSuggestions;
- (void)dealloc;
- (unsigned long long)suggestionsCount;
- (id)expertsAtIndex:(unsigned long long)a0;
- (void)addExperts:(id)a0;
- (void)clearExperts;
- (unsigned long long)expertsCount;

@end
