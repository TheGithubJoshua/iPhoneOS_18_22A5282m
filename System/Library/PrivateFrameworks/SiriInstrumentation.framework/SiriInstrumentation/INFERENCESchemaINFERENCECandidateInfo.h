@class NSString, NSData;

@interface INFERENCESchemaINFERENCECandidateInfo : SISchemaInstrumentationMessage {
    struct { unsigned char searchProvider : 1; unsigned char rank : 1; unsigned char score : 1; unsigned char isShownToUser : 1; unsigned char candidateType : 1; } _has;
}

@property (nonatomic) int searchProvider;
@property (nonatomic) BOOL hasSearchProvider;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL isShownToUser;
@property (nonatomic) BOOL hasIsShownToUser;
@property (copy, nonatomic) NSString *anonymizedEntityIdentifier;
@property (nonatomic) BOOL hasAnonymizedEntityIdentifier;
@property (nonatomic) int candidateType;
@property (nonatomic) BOOL hasCandidateType;
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
- (void)deleteAnonymizedEntityIdentifier;
- (void)deleteCandidateType;
- (void)deleteIsShownToUser;
- (void)deleteRank;
- (void)deleteScore;
- (void)deleteSearchProvider;

@end
