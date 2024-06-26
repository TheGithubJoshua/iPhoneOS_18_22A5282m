@class NSArray, NSString, PLBatteryUIResponderService, NSDate;

@interface PLBatteryUIResponseTypeUISOCDrain : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double bucketSize;
@property (retain) NSArray *uiLevelDrainEntries;
@property (retain) NSArray *resultArray;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (id)dependencies;
- (void)run;
- (void)coalesce;
- (id)entriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 fromEntries:(id)a1;

@end
