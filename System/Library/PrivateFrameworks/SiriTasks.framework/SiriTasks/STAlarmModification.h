@class NSURL, NSNumber, NSString;

@interface STAlarmModification : STSiriModelObject {
    long long _addedFrequency;
    NSURL *_alarmId;
    NSNumber *_enabled;
    NSNumber *_hour;
    NSString *_label;
    NSNumber *_minute;
    long long _removedFrequency;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)minute;
- (id)hour;
- (id)alarmId;
- (id)enabled;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)label;
- (long long)addedFrequency;
- (long long)removedFrequency;
- (id)_initWithAddedFrequency:(long long)a0 alarmId:(id)a1 enabled:(id)a2 hour:(id)a3 label:(id)a4 minute:(id)a5 removedFrequency:(long long)a6;

@end