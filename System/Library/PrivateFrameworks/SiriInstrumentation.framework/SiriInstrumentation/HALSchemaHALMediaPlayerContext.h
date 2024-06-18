@class NSData;

@interface HALSchemaHALMediaPlayerContext : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char type : 1; unsigned char timeSinceLastMediaPlaybackInSeconds : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int timeSinceLastMediaPlaybackInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastMediaPlaybackInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteType;
- (id)suppressMessageUnderConditions;
- (void)deleteState;
- (void)deleteTimeSinceLastMediaPlaybackInSeconds;

@end
