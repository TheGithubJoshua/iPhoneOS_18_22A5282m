@class ODMSiriSchemaODMSiriAggregationDimensions, NSData;

@interface ODMSiriSchemaODMSiriTaskCountsReported : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char completedSiriTaskCount : 1; unsigned char failedSiriTaskCount : 1; unsigned char cancelledSiriTaskCount : 1; unsigned char completedUITaskCount : 1; } _has;
}

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) unsigned int completedSiriTaskCount;
@property (nonatomic) BOOL hasCompletedSiriTaskCount;
@property (nonatomic) unsigned int failedSiriTaskCount;
@property (nonatomic) BOOL hasFailedSiriTaskCount;
@property (nonatomic) unsigned int cancelledSiriTaskCount;
@property (nonatomic) BOOL hasCancelledSiriTaskCount;
@property (nonatomic) unsigned int completedUITaskCount;
@property (nonatomic) BOOL hasCompletedUITaskCount;
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
- (void)deleteCancelledSiriTaskCount;
- (void)deleteCompletedSiriTaskCount;
- (void)deleteCompletedUITaskCount;
- (void)deleteDimensions;
- (void)deleteFailedSiriTaskCount;
- (void)deleteTaskType;

@end
