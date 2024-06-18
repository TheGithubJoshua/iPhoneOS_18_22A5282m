@class NSNumber;

@interface FBKDeletedItem : NSObject

@property (retain, nonatomic) NSNumber *remoteID;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0;

@end
