@class AWDHomeKitPresenceEvent, AWDHomeKitCharacteristicThresholdEvent, AWDHomeKitCharacteristicEvent, AWDHomeKitLocationEvent, AWDHomeKitCalendarEvent, AWDHomeKitDurationEvent, AWDHomeKitSignificantTimeEvent;

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying> {
    struct { unsigned char endEvent : 1; } _has;
}

@property (nonatomic) BOOL hasEndEvent;
@property (nonatomic) BOOL endEvent;
@property (readonly, nonatomic) BOOL hasCharEvent;
@property (retain, nonatomic) AWDHomeKitCharacteristicEvent *charEvent;
@property (readonly, nonatomic) BOOL hasLocationEvent;
@property (retain, nonatomic) AWDHomeKitLocationEvent *locationEvent;
@property (readonly, nonatomic) BOOL hasCharThresholdEvent;
@property (retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *charThresholdEvent;
@property (readonly, nonatomic) BOOL hasCalendarEvent;
@property (retain, nonatomic) AWDHomeKitCalendarEvent *calendarEvent;
@property (readonly, nonatomic) BOOL hasSignificantTimeEvent;
@property (retain, nonatomic) AWDHomeKitSignificantTimeEvent *significantTimeEvent;
@property (readonly, nonatomic) BOOL hasThresholdEvent;
@property (retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *thresholdEvent;
@property (readonly, nonatomic) BOOL hasPresenceEvent;
@property (retain, nonatomic) AWDHomeKitPresenceEvent *presenceEvent;
@property (readonly, nonatomic) BOOL hasDurationEvent;
@property (retain, nonatomic) AWDHomeKitDurationEvent *durationEvent;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
