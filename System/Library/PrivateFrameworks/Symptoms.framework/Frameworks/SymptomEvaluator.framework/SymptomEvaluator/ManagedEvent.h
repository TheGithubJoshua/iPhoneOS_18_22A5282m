@class DecisionDetails;

@interface ManagedEvent : NSObject

@property (nonatomic) unsigned long long id_number;
@property (retain, nonatomic) DecisionDetails *details;

- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(unsigned long long)a0 details:(id)a1;
- (void)serializeToXPCObject:(id)a0;

@end
