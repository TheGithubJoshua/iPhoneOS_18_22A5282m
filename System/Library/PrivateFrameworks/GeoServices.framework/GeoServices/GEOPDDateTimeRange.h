@class PBUnknownFields;

@interface GEOPDDateTimeRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned long long _endDate;
    unsigned long long _startDate;
    struct { unsigned char has_endDate : 1; unsigned char has_startDate : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasValidStartAndEndDates;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)jsonRepresentation;

@end
