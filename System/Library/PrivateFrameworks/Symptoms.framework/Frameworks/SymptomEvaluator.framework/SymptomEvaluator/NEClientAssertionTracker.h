@class NSUUID;

@interface NEClientAssertionTracker : NSObject

@property (retain, nonatomic) NSUUID *processUUID;
@property (nonatomic) BOOL hasAppRecord;
@property (nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)description;

@end
