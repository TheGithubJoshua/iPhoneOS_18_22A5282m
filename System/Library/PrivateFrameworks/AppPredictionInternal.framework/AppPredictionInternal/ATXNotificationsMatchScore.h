@class NSMutableArray;

@interface ATXNotificationsMatchScore : NSObject {
    NSMutableArray *_values;
}

- (void)combine:(id)a0;
- (id /* block */)getAggregationBlockForName:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dict;
- (id)get:(unsigned long long)a0;
- (void)set:(unsigned long long)a0 value:(id)a1;

@end
