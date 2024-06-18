@class NSData;

@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isMuted : 1; unsigned char callType : 1; unsigned char callState : 1; unsigned char callAppType : 1; unsigned char participantCountBucket : 1; } _has;
}

@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) int callType;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic) int callState;
@property (nonatomic) BOOL hasCallState;
@property (nonatomic) int callAppType;
@property (nonatomic) BOOL hasCallAppType;
@property (nonatomic) int participantCountBucket;
@property (nonatomic) BOOL hasParticipantCountBucket;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteCallState;
- (void)deleteCallAppType;
- (void)deleteCallType;
- (void)deleteIsMuted;
- (void)deleteParticipantCountBucket;

@end
