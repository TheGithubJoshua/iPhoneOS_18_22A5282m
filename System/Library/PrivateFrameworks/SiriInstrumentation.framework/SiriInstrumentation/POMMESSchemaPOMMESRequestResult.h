@class NSString, NSData;

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { unsigned char pommesConfidenceScore : 1; } _has;
}

@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
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
- (void)deletePegasusDomain;
- (void)deletePommesConfidenceScore;

@end
