@class NSString;

@interface SiriTaskConfiguration : NSObject

@property (retain, nonatomic) NSString *eventTime;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *taskType;
@property (nonatomic) long long minDurationInSeconds;

- (id)initWithDictionary:(id)a0;
- (id)initWithJSONData:(id)a0;
- (void).cxx_destruct;

@end
