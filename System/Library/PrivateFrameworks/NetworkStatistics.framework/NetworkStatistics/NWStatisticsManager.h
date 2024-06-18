@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, NWStatisticsManagerDelegate;

@interface NWStatisticsManager : NSObject {
    BOOL _systemInformationSubscribed;
    unsigned int _filter;
    unsigned int _continuationCount;
    unsigned long long _providerFilters[11];
    char *_iftracebuf;
    unsigned int _id;
    unsigned long long _numUpdatesDispatched;
    unsigned long long _numUpdatesSkipped;
    unsigned long long _numUpdatesLazyDispatched;
    unsigned long long _numUpdatesLazySkipped;
    unsigned long long _numSourceAddsReceived;
    unsigned long long _numSourceAddsSkipped;
    unsigned long long _numSourcesInserted;
    unsigned long long _numSourcesRemoved;
    unsigned long long _numSourcesQueried;
}

@property (retain) NSObject<OS_dispatch_source> *readSource;
@property int sockfd;
@property (getter=isReading) BOOL reading;
@property (retain) NSMutableDictionary *_internalSources;
@property (retain) NSMutableDictionary *currentQueries;
@property (retain) NSMutableDictionary *queuedQueryAlls;
@property unsigned long long currentQueryAllReference;
@property unsigned long long querySequenceNumber;
@property char *readBuffer;
@property (getter=isInvalidated) BOOL invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) id strongDelegate;
@property (weak, nonatomic) id<NWStatisticsManagerDelegate> delegate;
@property (nonatomic) unsigned int filter;
@property (nonatomic) unsigned int mgrflags;
@property (readonly) NSSet *sources;
@property (nonatomic) int interfaceTraceFd;
@property (nonatomic) int interfaceSourceFd;

- (BOOL)handleCompletion:(unsigned long long)a0 message:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a1 length:(unsigned int)a2;
- (BOOL)performQuery:(unsigned int)a0 sourceRef:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (BOOL)addSource:(id)a0 request:(struct nstat_msg_add_src { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned int x1; unsigned char x2[4]; unsigned char x3[0]; } *)a1 length:(unsigned long long)a2;
- (void)removeSourceInternal:(unsigned long long)a0 isFromClient:(BOOL)a1;
- (BOOL)addAllUDP:(unsigned long long)a0 events:(unsigned long long)a1 pid:(int)a2 uuid:(unsigned char[16] *)a3;
- (BOOL)addAllRoute;
- (void)removeSource:(id)a0;
- (void)dispatchDidReceiveDescription:(id)a0;
- (void)trace:(char *)a0;
- (void)sendRequestMessage:(int)a0 sourceRef:(unsigned long long)a1;
- (BOOL)addAllRoute:(unsigned long long)a0;
- (void)handleSystemInformationCounts:(struct nstat_sysinfo_counts { unsigned int x0; unsigned int x1; unsigned char x2[0]; } *)a0;
- (void)traceMemoryBuf:(char *)a0 length:(long long)a1 tag:(char *)a2;
- (BOOL)handleCompletionMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(unsigned int)a1;
- (void)handleReadEvent;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)queryAll:(id /* block */)a0;
- (void)dispatchDidReceiveType:(unsigned int)a0 source:(id)a1;
- (void)querySource:(id)a0 completion:(id /* block */)a1;
- (BOOL)addAllTCP:(unsigned long long)a0;
- (BOOL)addAllForProvider:(int)a0 filter:(unsigned long long)a1 events:(unsigned long long)a2 pid:(int)a3 uuid:(unsigned char[16] *)a4;
- (void)startQueuedQuery;
- (unsigned long long)_nextReferenceForTarget:(unsigned long long)a0 command:(unsigned int)a1;
- (void)setQueuePriority:(long long)a0;
- (void)queryAllDescriptions:(id /* block */)a0;
- (void)dispatchDidReceiveCounts:(id)a0 fromUpdate:(BOOL)a1;
- (BOOL)addAllTCP:(unsigned long long)a0 events:(unsigned long long)a1 pid:(int)a2 uuid:(unsigned char[16] *)a3;
- (void)sendRemoveSourceInternal:(unsigned long long)a0;
- (void)handleMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)reportInternalCounts;
- (void)subscribeToSystemInformation;
- (void)dispatchDidAddSource:(id)a0;
- (BOOL)sendMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (BOOL)addAllUDP:(unsigned long long)a0;
- (void)queryAllCounts:(id /* block */)a0;
- (void)performAllCompletions:(id)a0;
- (unsigned int)commandFromReference:(unsigned long long)a0;

@end