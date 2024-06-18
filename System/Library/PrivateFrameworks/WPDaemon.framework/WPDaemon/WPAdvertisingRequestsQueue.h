@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)remove:(id)a0;
- (id)init;
- (id)allRequests;
- (void)removeAll;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)add:(id)a0;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (unsigned long long)count;

@end
