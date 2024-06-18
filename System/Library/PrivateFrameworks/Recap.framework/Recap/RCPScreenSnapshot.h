@class UIImage;

@interface RCPScreenSnapshot : NSObject

@property (nonatomic) long long index;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) UIImage *snapshotImage;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
