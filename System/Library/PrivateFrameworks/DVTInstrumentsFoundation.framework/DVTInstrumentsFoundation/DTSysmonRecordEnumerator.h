@class DTSysmonTapRecordDecoder, NSArray;

@interface DTSysmonRecordEnumerator : NSObject {
    unsigned long long _heartbeatTime;
}

@property (retain, nonatomic) DTSysmonTapRecordDecoder *recordDecoder;
@property (retain, nonatomic) NSArray *samples;

- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsWithBlock:(id /* block */)a0;
- (id)initWithHeartbeatTime:(unsigned long long)a0;

@end
