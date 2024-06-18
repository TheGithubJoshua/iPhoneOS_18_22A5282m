@class NSArray, NSString, NSData;

@interface EXPSiriSchemaEXPSiriPegasusResponseSummary : SISchemaInstrumentationMessage {
    struct { unsigned char resultDomain : 1; unsigned char responseStatus : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) int resultDomain;
@property (nonatomic) BOOL hasResultDomain;
@property (nonatomic) int responseStatus;
@property (nonatomic) BOOL hasResponseStatus;
@property (copy, nonatomic) NSArray *canonicalIds;
@property (copy, nonatomic) NSString *catId;
@property (nonatomic) BOOL hasCatId;
@property (nonatomic) float confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)addCanonicalIds:(id)a0;
- (id)canonicalIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)canonicalIdsCount;
- (void)clearCanonicalIds;
- (void)deleteCanonicalIds;
- (void)deleteCatId;
- (void)deleteConfidenceScore;
- (void)deleteResponseStatus;
- (void)deleteResultDomain;

@end
