@class NSString, NSMutableArray, NSDictionary;

@interface PMRSplitTime : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) long long level;
@property (nonatomic) unsigned long long splitTime;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSMutableArray *splitTimes;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void)dealloc;
- (id)_subtreeDescription;
- (void)addSplitTimesObject:(id)a0;
- (id)dumpTraceLog;
- (id)initWithKey:(id)a0 comment:(id)a1 level:(long long)a2;
- (id)initWithKey:(id)a0 comment:(id)a1 level:(long long)a2 duration:(unsigned long long)a3 userInfo:(id)a4;
- (void)removeSplitTimesObject:(id)a0;

@end
