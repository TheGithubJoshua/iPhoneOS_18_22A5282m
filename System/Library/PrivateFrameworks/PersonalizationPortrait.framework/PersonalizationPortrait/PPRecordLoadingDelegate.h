@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (void)resetRecordData;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;
- (id)initWithName:(id)a0;

@end
