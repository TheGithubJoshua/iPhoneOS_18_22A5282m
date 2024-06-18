@class NSString, NSMutableArray;

@interface WPDPendingCompletions : NSObject

@property (retain) NSMutableArray *pendingCompletions;
@property unsigned long long lastID;
@property (retain) NSString *name;

- (unsigned long long)addCompletion:(id)a0;
- (void)completeID:(unsigned long long)a0 success:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;

@end
