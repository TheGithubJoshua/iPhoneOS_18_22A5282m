@class NSCache, NSMutableDictionary;

@interface PAAccessLoggerState : NSObject

@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) long long topAccessIntervalSlot;
@property (readonly, nonatomic) NSMutableDictionary *ongoingAccessIntervals;
@property (readonly, nonatomic) NSCache *negativeAccessCache;
@property (readonly, nonatomic) NSMutableDictionary *slotByAccessForOngoingAccessInterval;

- (id)init;
- (void)setOngoingAccessIntervalState:(id)a0 forSlot:(id)a1;
- (id)takeOngoingAccessIntervalStateForAccess:(id)a0;
- (void).cxx_destruct;
- (id)takeOngoingAccessIntervalStateForSlot:(id)a0;
- (id)lookupCurrentAccessForSlot:(id)a0;

@end
