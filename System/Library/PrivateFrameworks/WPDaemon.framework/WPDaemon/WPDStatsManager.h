@class WPDaemonServer, NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WPDStatsManager : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *scanArray;
@property (retain, nonatomic) NSMutableArray *regularScanArray;
@property (retain, nonatomic) NSMutableArray *aggressiveScanArray;
@property (retain, nonatomic) NSMutableArray *advertisingArray;
@property unsigned long long *resetScanArray;
@property unsigned long long *resetAdvertisingArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (nonatomic) double nextPushTime;
@property (readonly, nonatomic) BOOL PLLogAvailable;
@property (readonly, weak) WPDaemonServer *server;

+ (id)getStringFromActivity:(unsigned long long)a0;

- (void)generateStateDump;
- (void)stopActivity:(unsigned long long)a0;
- (void)resetActivityAsync:(unsigned long long)a0 forType:(unsigned char)a1;
- (void)startActivity:(unsigned long long)a0 forType:(unsigned char)a1;
- (void)stopActivityAsync:(unsigned long long)a0 forType:(unsigned char)a1;
- (void)stopActivityAsync:(unsigned long long)a0;
- (void)resetActivity:(unsigned long long)a0 forType:(unsigned char)a1;
- (void)startActivityAsync:(unsigned long long)a0 forType:(unsigned char)a1 scanRate:(long long)a2;
- (void)reportPLStats;
- (void).cxx_destruct;
- (id)generateStateDumpStrings;
- (void)stopActivity:(unsigned long long)a0 forType:(unsigned char)a1;
- (id)description;
- (id)getStatsDictionary;
- (void)startActivity:(unsigned long long)a0 forType:(unsigned char)a1 scanRate:(long long)a2;
- (void)startActivityAsync:(unsigned long long)a0 forType:(unsigned char)a1;
- (void)dealloc;
- (id)initWithServer:(id)a0;

@end
