@class ATXPBActivity, NSMutableArray;

@interface ATXPBActivitySuggestionFeedbackEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; unsigned char location : 1; unsigned char suggestionType : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (readonly, nonatomic) BOOL hasActivity;
@property (retain, nonatomic) ATXPBActivity *activity;
@property (retain, nonatomic) NSMutableArray *serializedAcceptedTriggers;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;

+ (Class)serializedAcceptedTriggersType;

- (int)StringAsSuggestionType:(id)a0;
- (id)suggestionTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (int)StringAsLocation:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)locationAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEventType:(id)a0;
- (void)clearSerializedAcceptedTriggers;
- (unsigned long long)serializedAcceptedTriggersCount;
- (void)addSerializedAcceptedTriggers:(id)a0;
- (id)serializedAcceptedTriggersAtIndex:(unsigned long long)a0;

@end
