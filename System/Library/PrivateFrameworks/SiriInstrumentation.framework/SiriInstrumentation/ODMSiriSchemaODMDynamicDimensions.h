@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMDynamicDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewMode : 1; unsigned char audioInterface : 1; unsigned char taskType : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) int viewMode;
@property (nonatomic) BOOL hasViewMode;
@property (nonatomic) int audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskType;
- (void)deleteViewMode;

@end
