@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)init;
- (id)parseSimpleDeltaSample;
- (id)deltaValueForSimpleChannel:(id)a0;
- (id)getCurrentStats;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)_init;
- (id)parseSimpleIOReportSample;
- (BOOL)updateStats;
- (id)currentValueForSimpleChannel:(id)a0;
- (id)getDeltaStats;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (void).cxx_destruct;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (double)getSampleDuration;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (void)clearSubscription;
- (void)dealloc;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;

@end
