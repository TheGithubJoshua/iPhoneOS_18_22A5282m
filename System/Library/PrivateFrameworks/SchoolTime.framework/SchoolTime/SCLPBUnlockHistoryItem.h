@class NSString;

@interface SCLPBUnlockHistoryItem : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char startTimeIntervalSinceReferenceDate : 1; unsigned char scheduleEndHour : 1; unsigned char scheduleEndMinute : 1; unsigned char scheduleStartHour : 1; unsigned char scheduleStartMinute : 1; } _has;
}

@property (nonatomic) BOOL hasStartTimeIntervalSinceReferenceDate;
@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (retain, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) BOOL hasScheduleStartHour;
@property (nonatomic) unsigned int scheduleStartHour;
@property (nonatomic) BOOL hasScheduleStartMinute;
@property (nonatomic) unsigned int scheduleStartMinute;
@property (nonatomic) BOOL hasScheduleEndHour;
@property (nonatomic) unsigned int scheduleEndHour;
@property (nonatomic) BOOL hasScheduleEndMinute;
@property (nonatomic) unsigned int scheduleEndMinute;

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
