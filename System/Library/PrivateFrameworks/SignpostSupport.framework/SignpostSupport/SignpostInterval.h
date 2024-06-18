@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (int)tz_dsttime;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)durationMachContinuousTime;
- (BOOL)_hasBeginTimeval;
- (id)_eventDescriptions;
- (id)string1Value;
- (long long)tv_sec;
- (id)number1Name;
- (unsigned long long)startMachContinuousTime;
- (id)string1Name;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)string2Name;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)number1Value;
- (unsigned long long)hash;
- (unsigned long long)endMachContinuousTime;
- (id)number2Name;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)number2Value;
- (id)humanReadableType;
- (int)tv_usec;
- (unsigned long long)scope;
- (id)string2Value;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (BOOL)intersectsInterval:(id)a0;
- (id)debugDescription;
- (BOOL)_hasEndTimeval;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (float)durationSeconds;
- (int)tz_minuteswest;
- (BOOL)telemetryEnabled;

@end
