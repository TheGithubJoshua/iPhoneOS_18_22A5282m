@class NSString, NSDictionary, NSNumber;

@interface HKMCLoggedDataMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSString *method;
@property (retain, nonatomic) NSNumber *dayIndexLoggingOffset;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMethod:(id)a0;

@end
