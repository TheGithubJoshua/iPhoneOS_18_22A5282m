@class AWDWiFiMetricsManagerEvent;

@interface AWDWiFiMetricsManagerAssociationEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasEventInfo;
@property (retain, nonatomic) AWDWiFiMetricsManagerEvent *eventInfo;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;

- (void)mergeFrom:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsEventType:(id)a0;

@end
