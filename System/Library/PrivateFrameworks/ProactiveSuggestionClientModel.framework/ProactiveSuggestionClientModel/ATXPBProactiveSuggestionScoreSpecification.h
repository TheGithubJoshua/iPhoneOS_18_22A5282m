@interface ATXPBProactiveSuggestionScoreSpecification : PBCodable <NSCopying> {
    struct { unsigned char rawScore : 1; unsigned char suggestedConfidenceCategory : 1; } _has;
}

@property (nonatomic) BOOL hasRawScore;
@property (nonatomic) double rawScore;
@property (nonatomic) BOOL hasSuggestedConfidenceCategory;
@property (nonatomic) int suggestedConfidenceCategory;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (int)StringAsSuggestedConfidenceCategory:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestedConfidenceCategoryAsString:(int)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
