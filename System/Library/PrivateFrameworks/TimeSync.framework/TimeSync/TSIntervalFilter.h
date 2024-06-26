@class NSObject;
@protocol OS_dispatch_queue;

@interface TSIntervalFilter : NSObject {
    unsigned long long _expectedInterval;
    unsigned int _multiIntervalCount;
    unsigned long long _filterCount;
    unsigned long long *_filteredTimestamps;
    unsigned int _timestampIndex;
    unsigned long long _timestampCount[8];
    unsigned long long _timestampIntervals[8];
    long long _validEntry;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned char _filterSize;
    unsigned long long _filterOffset;
    struct IOTS_U128 { unsigned long long lo; unsigned long long hi; } _filteredSnapshot;
    struct IOTS_U128 { unsigned long long lo; unsigned long long hi; } _filteredOffset;
}

@property (readonly, nonatomic) unsigned long long multiIntervalTime;
@property (readonly, nonatomic) unsigned long long filterCount;

- (unsigned long long)filterCountForEntry:(long long)a0;
- (unsigned long long)multiIntervalTimeForEntry:(long long)a0;
- (unsigned long long)_calculateNewTimestamp:(unsigned long long)a0;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)a0 multiIntervalCount:(unsigned int)a1;
- (unsigned long long)filterCount;
- (id)initWithExpectedInterval:(unsigned long long)a0 multiIntervalCount:(unsigned int)a1 filterSize:(unsigned char)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)addTimestamp:(unsigned long long)a0 entry:(long long *)a1;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)a0;
- (void)dealloc;
- (void)resetFilter;
- (unsigned long long)addTimestamp:(unsigned long long)a0;
- (unsigned long long)multiIntervalTime;

@end
