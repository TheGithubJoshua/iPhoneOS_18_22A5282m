@class NSArray, NSString, NSDictionary;

@interface CAReportingPerformanceObject : NSObject

@property (nonatomic) struct pc_session { } *session;
@property (retain) NSArray *processIdentifiers;
@property (retain) NSString *hostApplicationDisplayID;
@property (readonly, nonatomic) NSDictionary *performanceMetrics;
@property (nonatomic) unsigned short serviceType;
@property (retain, nonatomic) NSDictionary *configuration;

- (void)abandon;
- (id)initWithProcessIdentifiers:(id)a0;
- (void)begin;
- (void).cxx_destruct;
- (id)endAndReturnPerformanceMetrics;

@end
