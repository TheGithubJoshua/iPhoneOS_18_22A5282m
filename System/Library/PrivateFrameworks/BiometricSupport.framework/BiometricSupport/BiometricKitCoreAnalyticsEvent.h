@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSString *_eventName;
    NSArray *_privateProperties;
    NSDictionary *_boundedFieldLimits;
}

@property (retain) NSNumber *eventCanceled;
@property (retain) NSNumber *displayOn;
@property (retain) NSNumber *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollment;
@property (retain) NSNumber *timeSinceLastEnrollmentBinned;
@property (retain) NSNumber *timeSinceLastEvent;
@property (retain) NSDate *previousEventDate;

- (id)getEventDictionary;
- (void)persistData;
- (void)updateBoundedFieldValue;
- (id)dictionaryRepresentation;
- (void)resetClass:(Class)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (id)initWithPersistedDataWithName:(id)a0;
- (id)dictionaryRepresentationForClass:(Class)a0;
- (void)incrementCountField:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (void)logAnalyticsDictionary:(id)a0;
- (void)reset;
- (BOOL)postEvent;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;

@end
