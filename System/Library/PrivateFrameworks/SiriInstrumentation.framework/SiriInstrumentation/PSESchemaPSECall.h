@class NSData;

@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    struct { unsigned char callDurationInSeconds : 1; unsigned char hasUserInitiatedFollowup : 1; } _has;
}

@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) BOOL hasCallDurationInSeconds;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteCallDurationInSeconds;
- (void)deleteHasUserInitiatedFollowup;

@end
