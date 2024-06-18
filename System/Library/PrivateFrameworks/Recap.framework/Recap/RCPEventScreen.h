@class NSString;

@interface RCPEventScreen : NSObject

@property (nonatomic) struct CGSize { double width; double height; } pointSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic) unsigned int displayID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
