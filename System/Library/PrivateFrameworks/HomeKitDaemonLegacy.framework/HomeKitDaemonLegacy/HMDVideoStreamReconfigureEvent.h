@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)initWithEventType:(unsigned long long)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
