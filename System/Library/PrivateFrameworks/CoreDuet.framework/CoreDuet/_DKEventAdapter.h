@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (short)valueClass;
- (double)doubleValue;
- (long long)compatibilityVersion;
- (long long)endDayOfWeek;
- (double)confidence;
- (id)structuredMetadata;
- (id)startDate;
- (long long)endSecondOfDay;
- (long long)valueTypeCode;
- (id)streamName;
- (id)customMetadata;
- (id)source;
- (id)creationDate;
- (BOOL)boolValue;
- (id)UUID;
- (unsigned long long)hash;
- (long long)integerValue;
- (id)uuid;
- (id)localCreationDate;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)startSecondOfDay;
- (id)timeZone;
- (id)stream;
- (long long)secondsFromGMT;
- (double)valueDouble;
- (id)metadata;
- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)valueInteger;
- (id)endDate;
- (id)valueString;
- (id)uuidHash;
- (long long)startDayOfWeek;
- (id)value;

@end
