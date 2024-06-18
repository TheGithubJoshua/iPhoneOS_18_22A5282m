@class _OSLogEventSerializationMetadata, NSDictionary;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _unixTimeZone;
    struct timeval { long long tv_sec; int tv_usec; } _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossStartUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossEndUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossEndUnixTimeZone;
    unsigned long long _type;
}

@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (retain, nonatomic) NSDictionary *curEventDictionary;
@property (nonatomic) BOOL needsTypeLookup;

- (id)senderImagePath;
- (id)processImagePath;
- (unsigned long long)threadIdentifier;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (id)process;
- (id)decomposedMessage;
- (unsigned long long)traceIdentifier;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (const char *)senderImageUUIDBytes;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (unsigned long long)machContinuousTimestamp;
- (id)composedMessage;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)senderImageOffset;
- (int)processIdentifier;
- (id)backtrace;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (id)processImageUUID;
- (id)date;
- (unsigned long long)signpostIdentifier;
- (void).cxx_destruct;
- (id)formatString;
- (id)bootUUID;
- (unsigned long long)logType;
- (id)_frameForDict:(id)a0;
- (const char *)processImageUUIDBytes;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (id)timeZone;
- (unsigned long long)timeToLive;
- (unsigned long long)size;
- (unsigned long long)signpostType;
- (id)category;
- (unsigned long long)signpostScope;
- (id)senderImageUUID;
- (unsigned long long)parentActivityIdentifier;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (unsigned long long)type;
- (id)subsystem;
- (id)signpostName;
- (id)sender;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)activityIdentifier;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (void)_resetNeedsLookup;
- (unsigned long long)creatorActivityIdentifier;

@end
