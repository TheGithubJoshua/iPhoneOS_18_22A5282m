@class NSDate;

@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_dateFormatter;

@end
